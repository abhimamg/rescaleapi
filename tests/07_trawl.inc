** ------------------------------------
** --- TRAWL GEAR DEFINITION        ---
** ------------------------------------
*PARAMETER

Warp_length = -3 * seabed_elevation
Warp_stiffness = 2 * 35000000 / Warp_length
Connector_displacement = 15
connector_force = Warp_stiffness * Connector_displacement
trawler_velocity = 2.5

# --- INDENTER DEFINITION
trawler_id 		= 92013
trawler_x_pos	= 500
trawler_y_pos	= sqrt(Warp_length**2 - seabed_elevation**2)
trawler_z_pos	= cp_b_z - sqrt(Warp_length**2 - seabed_elevation**2) * Fz_pull / abs(F_pull)

** --- NODE DEFINITION

*NODE, NSET=nset_trawler
 <trawler_id>,  <trawler_x_pos>, <trawler_y_pos>, <trawler_z_pos>
**
*NSET, NSET=LoadingPoint
 <cp_b_nd_id_pullover>
** --- ELEMENT DEFINITION
**
*ELEMENT, ELSET=elset_warpline, type=conn3d2
 <trawler_id>, <cp_b_nd_id_pullover>, <trawler_id>
**
*ELSET, ELSET=LoadingPoint
 <cp_b_nd_id_pullover>
** --- CONNECTOR SECTION DEFINITION
**
*connector section,elset=elset_warpline,behavior=warp_stiffness
 axial
*connector behavior,name=warp_stiffness, EXTRAPOLATION=constant
*CONNECTOR ELASTICITY, COMPONENT=1, NONLINEAR
 0.0, 0.0
 <connector_force> , <Connector_displacement>
**
*EQUATION
 2
 <cp_b_nd_id_pullover>, 3, 1.0, <trawler_id>, 3, -1.0   
**
** ------------------------------------
** --- END OF TRAWL GEAR DEFINITION ---
** ------------------------------------
**