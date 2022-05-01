**   Version: v2-beam-LB
**
** ----------------------------------
** --- SEABED DEFINITION (seabed) ---
** ----------------------------------
**
** nodes used:.........92001
**                     92002
**                     92501
** elements used:......NONE
** ref nodes:..........seabed_ref_nd
** rigid contact
**   surfaces:.........seabed_b_rs
**                     seabed_sh_rs
**                     sealevel_rs
**
****PS
**
*PARAMETER
#
# --- NODE NUMBER DEFINITION
#
seabed_ref_nd        = 92001
seabed_b_ref_nd      = 92002
seabed_sh_ref_nd     = 92003
seabed_anchor_nd     = 92010
sealevel_ref_nd      = 92501
#
# --- SURFACE DEFINITION
#
seabed_start_x    = - 0.1 * cp_len
seabed_end_x      = 1.1 * cp_len 
seabed_b_elevation   = seabed_elevation + cp_coat_rad_out
seabed_sh_elevation  = seabed_elevation
seabed_ref_nd_elevation  = seabed_sh_elevation - 1.0
**
****PE
**
** --- NODE DEFINITION
**
*NODE, NSET=seabed_ref
 <seabed_ref_nd>, <seabed_start_x>, 0.0, <seabed_ref_nd_elevation>
*NODE, NSET=seabed_b_ref
 <seabed_b_ref_nd>, <seabed_start_x>, 0.0, <seabed_ref_nd_elevation>
*NODE, NSET=seabed_sh_ref
 <seabed_sh_ref_nd>, <seabed_start_x>, 0.0, <seabed_ref_nd_elevation>
*NODE, NSET=seabed_anchor
 <seabed_anchor_nd>, 0.0, 0.0, <seabed_b_elevation>
*NODE, NSET=sealevel_ref
 <sealevel_ref_nd>, <seabed_start_x>, 0.0, 0.0
**
** #NOTE Not Sure what used for?
*NSET, NSET=non_seabed_ref
seabed_b_ref
seabed_sh_ref
seabed_anchor
sealevel_ref
**
*MPC
  TIE, seabed_b_ref, seabed_ref
  TIE, seabed_sh_ref, seabed_ref
**
** --- RIGID SURFACE DEFINITION
**
*SURFACE, TYPE=CYLINDER, NAME=seabed_b_rs
 0.0, 0.0, 0.0, 100.0, 0.0, 0.0
 0.0, 1.0, 0.0
** Modified to include freespan
 START, <seabed_start_x>, <seabed_b_elevation>
 LINE,  <seabed_end_x>,   <seabed_b_elevation>
*RIGID BODY, ANALYTICAL SURFACE=seabed_b_rs, REF NODE=<seabed_b_ref_nd>, TIE NSET=seabed_anchor
**
*SURFACE, TYPE=CYLINDER, NAME=seabed_sh_rs
 0.0, 0.0, 0.0, 100.0, 0.0, 0.0
 0.0, 1.0, 0.0
 START, <seabed_start_x>, <seabed_sh_elevation>
 LINE,  <seabed_end_x>,   <seabed_sh_elevation>
*RIGID BODY, ANALYTICAL SURFACE=seabed_sh_rs, REF NODE=<seabed_sh_ref_nd>
**
*SURFACE, TYPE=CYLINDER, NAME=sealevel_rs
 0.0, 0.0, 0.0, 100.0, 0.0, 0.0
 0.0, 1.0, 0.0
 START, <seabed_start_x>, 0.
 LINE,  <seabed_end_x>,   0.
*RIGID BODY, ANALYTICAL SURFACE=sealevel_rs, REF NODE=<sealevel_ref_nd>
**
** ------------------------------
** --- END OF SEABED DEFINITION ---
** ------------------------------
**