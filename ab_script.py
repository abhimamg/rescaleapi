

cases=[
      ["hmlt_base_case.odb", "PART-1-1.FL_B_ELS_BUCKLE", 16, 1], 
      ["hmlt_base_case.odb", "PART-1-1.FL_B_ELS_BUCKLE", 16, 2], 
      ["hmlt_base_case.odb", "PART-1-1.FL_B_ELS_BUCKLE", 16, 3], 
      ["hmlt_base_case.odb", "PART-1-1.FL_B_ELS_BUCKLE", 16, 4], 
      ["hmlt_base_case.odb", "PART-1-1.FL_B_ELS_BUCKLE", 16, 5], 
      ["hmlt_base_case.odb", "PART-1-1.FL_B_ELS_BUCKLE", 16, 6], 
      ["hmlt_base_case.odb", "PART-1-1.FL_B_ELS_BUCKLE", 16, 7], 
      ["hmlt_base_case.odb", "PART-1-1.FL_B_ELS_BUCKLE", 16, 8], 
      ["hmlt_base_case.odb", "PART-1-1.FL_B_ELS_BUCKLE", 16, 9], 
      ["hmlt_base_case.odb", "PART-1-1.FL_B_ELS_BUCKLE", 16, 10], 
      ["hmlt_base_case.odb", "PART-1-1.FL_B_ELS_BUCKLE", 16, 11], 
      ["hmlt_base_case.odb", "PART-1-1.FL_B_ELS_BUCKLE", 16, 12], 
      ["hmlt_base_case.odb", "PART-1-1.FL_B_ELS_BUCKLE", 16, 13], 
      ["hmlt_base_case.odb", "PART-1-1.FL_B_ELS_BUCKLE", 16, 14], 
      ["hmlt_base_case.odb", "PART-1-1.FL_B_ELS_BUCKLE", 16, 15], 
      ]

from abaqus import *
from abaqusConstants import *
from viewerModules import *

def create_output(ModelFile, ElementSet, Step, Frame, OutFile, Append=ON):
    leaf = dgo.LeafFromElementSets(elementSets=(ElementSet))  
    session.viewports['Viewport: 1'].setValues(displayedObject=session.openOdb(name=ModelFile))
    session.viewports['Viewport: 1'].odbDisplay.displayGroup.replace(leaf=leaf)
    #session.fieldReportOptions.setValues(reportFormat=COMMA_SEPARATED_VALUES)
    session.fieldReportOptions.setValues(printTotal=OFF, printMinMax=OFF)
    session.writeFieldReport(
        fileName=OutFile, 
        append=Append,
        sortItem='Element Label', 
        odb=session.odbs[ModelFile], 
        step=int(Step)-1, 
        frame=int(Frame),
        outputPosition=INTEGRATION_POINT, 
        variable=(('ESF1', INTEGRATION_POINT), ('SM', INTEGRATION_POINT), )
        )

def main(cases):
    OutFile = "AbaqusOutput.txt"
    f = open(OutFile,"w")
    f.close() 
    for ModelFile, ElementSet, Step, Frame in cases:
        create_output(ModelFile, ElementSet, Step, Frame,  OutFile)

if __name__ == "__main__":
    main(cases=cases)
    
    