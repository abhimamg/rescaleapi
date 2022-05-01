

from abaqus import *
from abaqusConstants import *
from viewerModules import *

out_file = "AbaqusOutput{{cae_id}}.txt"
f = open(out_file,"w")
f.close()

odb_file = "hmlt_base_case.odb"

cases=[
      ["PART-1-1.CP_B_ELS", 16],
      ["PART-1-1.FL_B_ELS", 16],      
      ["PART-1-1.CP_B_ELS", 17],
      ["PART-1-1.FL_B_ELS", 17],      
      ["PART-1-1.CP_B_ELS", 18],
      ["PART-1-1.FL_B_ELS", 18]
      ]


for elset, step in cases:
    leaf = dgo.LeafFromElementSets(elementSets=(elset))  
    odb = session.openOdb(name=odb_file)
    session.viewports['Viewport: 1'].setValues(displayedObject=odb)
    session.viewports['Viewport: 1'].odbDisplay.displayGroup.replace(leaf=leaf)
    session.fieldReportOptions.setValues(printTotal=OFF, printMinMax=OFF)

    for frame in range(len(odb.steps["Step-"+str(step)].frames)):
        session.writeFieldReport(
            fileName="AbaqusOutput_LCC.txt", 
            append=ON,
            sortItem='Element Label', 
            odb=session.odbs[odb_file], 
            step=int(step)-1, 
            frame=int(frame),
            outputPosition=INTEGRATION_POINT, 
            variable=(
                ('ESF1', INTEGRATION_POINT), 
                ('SM', INTEGRATION_POINT), 
                )
            )

    
    session.viewports['Viewport: 1'].odbDisplay.basicOptions.setValues(
            sectionResults=USE_ENVELOPE, envelopeCriteria=MAX_VALUE, 
            envelopeDataPosition=ELEMENT_NODAL)

    for frame in range(len(odb.steps["Step-"+str(step)].frames)):            
        session.writeFieldReport(
            fileName="AbaqusOutput_DCC.txt", 
            append=ON,
            sortItem='Node Label', 
            odb=session.odbs[odb_file], 
            step=int(step)-1, 
            frame=int(frame),
            outputPosition=INTEGRATION_POINT, 
            variable=(
                ('EE', INTEGRATION_POINT, ((COMPONENT, 'EE11'), )),
                ('PE', INTEGRATION_POINT, ((COMPONENT, 'PE11'), )),
                )
            )