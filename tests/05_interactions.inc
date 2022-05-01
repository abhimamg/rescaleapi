**   Version: v1-SL-penalty
**
*PARAMETER
**
Pipe_OD_Coating = cp_b_wt + 2 *	cp_coat_wt		# pipeline OD including coating
** soil_mob_axi = Pipe_OD_Coating*0.01         # Taken from P1 and Diva model
** soil_mob_lat = Pipe_OD_Coating*0.097        # Taken from P1 and Diva model
**
**
# ************************************************************************ #
#                                                                          #
#          Friction parameters                                             #
#                                                                          #
#  Notation:                                                               #
#  _c1: curve 1                                                            #
#  _p2: pressure 2                                                         #
#  mu_xbreak_c1_p2: mu break in axial direction for curve 1, pressure 2    #
#                                                                          #
# ************************************************************************ #
#

nfric	=	2
# 2 friction curves used. One for inst/hyd and other for operation

npress	=	1
# Number of dependences to pressure (1-20)

pp_1	=	2058.1 # Submerged Weight
# Installation Submerged weight used throughout.

kstep_init	=	8
# Application on self weight

kstep_berm	=	20
# Activation step for berms. Berms not used so a high step number is provided

sl_el_x	=	0.47 / (Pipe_OD_Coating*0.01)
# elastic slope in cyclic regime, axial direction, drained breakout friction

sl_el_y	=	2.10 / (Pipe_OD_Coating*0.097)
# elastic slope in cyclic regime, lateral direction
# HE Value not available. HE value used

# curve 1 parameters
#======================================
g_xbreak_c1	=	Pipe_OD_Coating*0.01
# Slip at break, axial direction  (Axial Mobilisation)

g_ybreak_c1	=	Pipe_OD_Coating*0.664
# Slip at break, lateral direction (Lateral Mobilisation)
# HE Value not available. BE value used

g_xres_c1	=	Pipe_OD_Coating
# Slip at residual, axial direction

g_yres_c1	=	Pipe_OD_Coating*1.5
# Slip at residual, lateral direction

dg_yberm_c1	=	1.000
# Berm foot position, increase per cycle #Not used

gmax_yberm_c1	=	Pipe_OD_Coating*1.5
# Berm foot position, max increase 

mu_xbreak_c1_p1	=	0.47
# Friction coefficient at break, axial directio

mu_ybreak_c1_p1	=	2.10
# Friction coefficient at break, lateral direction 

mu_xres_c1_p1	=	0.47
# Friction coefficient at residual, axial direction

mu_yres_c1_p1	=	1.14
# Friction coefficient at residual, lateral direction

mu_ycyc_c1_p1	=	1.14
# Friction  coef  in  cyclic  regime  (min  value),  lateral direction

dmu_ycyc_c1_p1	=	1.000
# Friction coef slope between the berms # Not Used

dmu_yberm_c1_p1	=	1.000
#  Friction coef slope in the berms  # Not Used


# curve 2 parameters
#
step_fric2	=	15
g_xbreak_c2	=	Pipe_OD_Coating*0.01
g_ybreak_c2	=	Pipe_OD_Coating*0.664
g_xres_c2	=	Pipe_OD_Coating
g_yres_c2	=	Pipe_OD_Coating*1.5
dg_yberm_c2	=	1.000
gmax_yberm_c2	=	Pipe_OD_Coating*1.5
mu_xbreak_c2_p1	=	0.47
mu_ybreak_c2_p1	=	2.10
mu_xres_c2_p1	=	0.47
mu_yres_c2_p1	=	1.14
mu_ycyc_c2_p1	=	1.14
dmu_ycyc_c2_p1	=	1.000
dmu_yberm_c2_p1	=	1.000
#
nprops = 5 + npress+nfric*(7+npress*7)
**
**
**
**...................................... ===============================
**************************************** --- PART CONNECTION SECTION ---
**...................................... ===============================
**
**
**............................................... -----------------------------------------------------
************************************************* --- FLOWLINE TO CARRIER PIPE BULKHEADS CONNECTION ---
**............................................... -----------------------------------------------------
**
**.............(dependent)............................ (independent)
*MPC
 TIE,    <fl_b_nd_id_sec_1>,                          <cp_b_nd_id_sec_1>
*MPC
 TIE,    <fl_b_nd_id_end>,                            <cp_b_nd_id_end>
**
**
**
**............................................... =======================================
************************************************* --- CONTACT PAIR DEFINITION SECTION ---
**............................................... =======================================
**
** node-to-surface contact interaction
**
**...(slave).......(master)
**
************************************************* --- seabed
**
*CONTACT PAIR, INTERACTION=inter_seabed, HCRIT=1.0, TYPE=SURFACE TO SURFACE
 cp_b_el_cont_noRC,      seabed_b_rs
**
**............................................... --------------------------------------
************************************************* --- CONTACT INTERACTION DEFINITION ---
**............................................... --------------------------------------
**
*SURFACE INTERACTION, NAME=inter_seabed
**
*SURFACE BEHAVIOR, PRESSURE-OVERCLOSURE=LINEAR
 <seabed_stiffness>.
**
*FRICTION, USER, DEPVAR=21, PROPERTIES=<nprops>
<nfric>,<npress>,<pp_1>,<kstep_init>,<kstep_berm>,<sl_el_x>, <sl_el_y>,<g_xbreak_c1>
<g_ybreak_c1>,<g_xres_c1>,<g_yres_c1>,<dg_yberm_c1>,<gmax_yberm_c1>,<mu_xbreak_c1_p1>, <mu_ybreak_c1_p1>,<mu_xres_c1_p1>
<mu_yres_c1_p1>,<mu_ycyc_c1_p1>,<dmu_ycyc_c1_p1>,<dmu_yberm_c1_p1>,<step_fric2>,<g_xbreak_c2>,<g_ybreak_c2>,<g_xres_c2>
<g_yres_c2>,<dg_yberm_c2>,<gmax_yberm_c2>,<mu_xbreak_c2_p1>,<mu_ybreak_c2_p1>,<mu_xres_c2_p1>,<mu_yres_c2_p1>,<mu_ycyc_c2_p1>
<dmu_ycyc_c2_p1>,<dmu_yberm_c2_p1>
**
**
*SURFACE INTERACTION, NAME=inter_seabed_RC
**
*SURFACE BEHAVIOR, PRESSURE-OVERCLOSURE=LINEAR
 <seabed_stiffness>.
**
*FRICTION, ANISOTROPIC, ELASTIC SLIP=<elastic_slip>
 0, 0
**
** --- centralisers interface definition
**
*INTERFACE, ELSET=cent_els
 <cent_gap>
*SURFACE BEHAVIOR, PRESSURE-OVERCLOSURE=EXPONENTIAL
 1.0E-3, 20000.
*FRICTION
<cent_friction>
**
**
**
**
**