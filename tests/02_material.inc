**   Version: v2-PIP
** HAMLET
*PARAMETER
**---------------------------------------------------------
# CARRIER PIPE
**---------------------------------------------------------
cp_material_name                = 'Carrier_DNV_SMLS_450_PD'
cp_material_E_0C                = 207.0E9
cp_material_E_50C               = 207.0E9
cp_material_nu                  = 0.3
**
cp_material_yield_t1            = 400.0E6
cp_material_yield_t2            = 379.0E6
**
cp_material_KHP_C1              = 35000.0E6
cp_material_KHP_gam1	        = 700.0
cp_material_KHP_C2              = 2700.0E6
cp_material_KHP_gam2	        = 14.5
**
cp_material_density	        = 7850.0
**
cp_material_temp1	        = 50
cp_material_temp2	        = 85
**
cp_material_th_expansion_0C       = 1.16e-5
cp_material_th_expansion_50C      = 1.16e-5
cp_material_th_expansion_85C      = 1.16e-5
#

**
 cp_material_E = cp_material_E_0C
 cp_material_th_expansion = cp_material_th_expansion_0C
#
**---------------------------------------------------------
# FLOWLINE
**---------------------------------------------------------
fl_material_name                = 'Flowline_DNV_SMLS_450_PD'
fl_material_E_0C                = 207.0E9
fl_material_E_50C               = 207.0E9
fl_material_E_85C               = 207.0E9
fl_material_nu                  = 0.3
**
fl_material_yield_t1            = 400.0E6
fl_material_yield_t2            = 379.0E6
**
fl_material_KHP_C1              = 35000.0E6
fl_material_KHP_gam1	        = 700.0
fl_material_KHP_C2              = 2700.0E6
fl_material_KHP_gam2	        = 14.5
**
fl_material_density	        = 7850.0
**
fl_material_temp1	        = 50
fl_material_temp2	        = 85
**
fl_material_th_expansion_0C       = 1.16e-5
fl_material_th_expansion_50C      = 1.16e-5
fl_material_th_expansion_85C      = 1.16e-5
#
**
 fl_material_E = fl_material_E_0C
 fl_material_th_expansion = fl_material_th_expansion_0C
**
**---------------------------------------------------------
# LINER
**---------------------------------------------------------
li_material_name                = 'liner-316l'
li_material_E_0C                 = 200.0E9
li_material_E_100C               = 200.0E9

**
li_material_nu                  = 0.3
**
li_material_s0_t1               = 29.0E6
**
li_material_KHP_C1              = 210000.0E6
li_material_KHP_gam1	       = 2300.0
li_material_KHP_C2              = 40000.0E6
li_material_KHP_gam2	       = 390.0
li_material_KHP_C3              = 2100.0E6
li_material_KHP_gam3	       = 2.
**
li_material_density	       = 8140.0
**
li_material_t1	               = 20
**
li_material_th_expansion_20C    = 1.65e-5
li_material_th_expansion_100C   = 1.75e-5
li_material_th_expansion_120C   = 1.77e-5
**
** -- PARAMETER END --
**
** **********************************
**  CARRIER PIPE MATERIAL DEFINITION
** **********************************
**
*MATERIAL, NAME=<cp_material_name>
*ELASTIC, TYPE=ISOTROPIC
 <cp_material_E_0C>  ,<cp_material_nu>, 0
 <cp_material_E_50C> ,<cp_material_nu>, 50
*PLASTIC,HARDENING=COMBINED, DATA TYPE=PARAMETERS, NUMBER BACKSTRESSES=2
 <cp_material_yield_t1>, <cp_material_KHP_C1>, <cp_material_KHP_gam1>, <cp_material_KHP_C2>, <cp_material_KHP_gam2>, <cp_material_temp1>
 <cp_material_yield_t2>, <cp_material_KHP_C1>, <cp_material_KHP_gam1>, <cp_material_KHP_C2>, <cp_material_KHP_gam2>, <cp_material_temp2>
*DENSITY
 <cp_material_density>
*EXPANSION, TYPE=ISO
 <cp_material_th_expansion_0C>   , 0
 <cp_material_th_expansion_50C>  , 50
 <cp_material_th_expansion_85C>  , 85
**
** *******************************
**  FLOWLINE MATERIAL DEFINITION
** *******************************
**
*MATERIAL, NAME=<fl_material_name>
*ELASTIC, TYPE=ISOTROPIC
 <fl_material_E_0C>  ,<fl_material_nu>, 0
 <fl_material_E_50C> ,<fl_material_nu>, 50
 <fl_material_E_85C> ,<fl_material_nu>, 85
*PLASTIC,HARDENING=COMBINED, DATA TYPE=PARAMETERS, NUMBER BACKSTRESSES=2
 <fl_material_yield_t1>, <fl_material_KHP_C1>, <fl_material_KHP_gam1>, <fl_material_KHP_C2>, <fl_material_KHP_gam2>, <fl_material_temp1>
 <fl_material_yield_t2>, <fl_material_KHP_C1>, <fl_material_KHP_gam1>, <fl_material_KHP_C2>, <fl_material_KHP_gam2>, <fl_material_temp2>
*DENSITY
 <fl_material_density>
*EXPANSION, TYPE=ISO
 <fl_material_th_expansion_0C>   , 0
 <fl_material_th_expansion_50C>  , 50
 <fl_material_th_expansion_85C>  , 85
**
**
** *******************************
**  LINER MATERIAL DEFINITION
** *******************************
**
*MATERIAL, NAME=<li_material_name>
*ELASTIC, TYPE=ISOTROPIC
 <li_material_E_0C> ,<li_material_nu>, 20
 <li_material_E_100C> ,<li_material_nu>, 100
*PLASTIC,HARDENING=COMBINED, DATA TYPE=PARAMETERS, NUMBER BACKSTRESSES=3
 <li_material_s0_t1>, <li_material_KHP_C1>, <li_material_KHP_gam1>, <li_material_KHP_C2>, <li_material_KHP_gam2>, <li_material_KHP_C3>, <li_material_KHP_gam3>, <li_material_t1>
*DENSITY
 <li_material_density>
*EXPANSION, TYPE=ISO
 <li_material_th_expansion_20C>  , 20
 <li_material_th_expansion_100C> , 100
**
**