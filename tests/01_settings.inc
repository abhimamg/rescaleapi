**   Version: v3c2-beam-PIP-LB
**
*PARAMETER
**
****************************************************************************
**    CARRIER DIMENSIONS    (adjustable section)
****************************************************************************
**
cp_b_wt =     19.2e-3 
cp_b_dia_out = 381.0e-3
cp_coat_wt  = 3.2e-3
**
****************************************************************************
**    FLOWLINE DIMENSIONS    (adjustable section)
****************************************************************************
**
fl_b_wt = 14.9e-3
fl_b_dia_out = 323.9e-3
fl_coat_wt  = 15.0e-3
**
****************************************************************************
**    Liner DIMENSIONS    (adjustable section)
****************************************************************************
**
li_b_wt = 3.0e-3
li_b_dia_out = fl_b_dia_out - 2*fl_b_wt
**
****************************************************************************
**    CENTRALISER SETTINGS     (adjustable section)
**    Change ITTs and slidelines definitions accordingly (PIP file) to reflect any change below
****************************************************************************
**
cent_pitch = 2.15                              # Centralizer pitch (m)
cent_gap   = 7.3E-3                            # Centralizer gap (m)
**
**************************************************
**    PARAMETERS USED IN RIGID SURFACE DEFINITIONS
**************************************************
cp_dia_out                 = cp_b_dia_out
cp_rad_out                 = cp_dia_out / 2.0  # used to define rigid surfaces
cp_coat_rad_out            = cp_rad_out + cp_coat_wt
cp_coat_dia_out            = cp_coat_rad_out * 2.0
**
cp_b_dia_in                = cp_b_dia_out - 2 * cp_b_wt
cp_b_rad_out               = cp_rad_out + cp_coat_wt
**
fl_dia_out                 = fl_b_dia_out
fl_rad_out                 = fl_dia_out / 2.0  # used to define rigid surfaces
fl_coat_rad_out            = fl_rad_out + fl_coat_wt
fl_coat_dia_out            = fl_coat_rad_out * 2.0
**
fl_b_dia_in                = fl_b_dia_out - 2 * fl_b_wt

**
li_dia_out                 = li_b_dia_out
li_rad_out                 = li_dia_out / 2.0  # used to define rigid surfaces
**
li_b_dia_in                = li_b_dia_out - 2 * li_b_wt
****************************************************************************
**    PIPE LENGTH    (adjustable section)
****************************************************************************
cp_len                     = 2000.0             # carrier pipe total length (m) #TODO Model Length
**
fl_len                     = cp_len             # Flowline total length (m)
**
**************************************************
**    PIPE SECTIONS  (adjustable section)
**************************************************
**
** carrier pipe beam section lengths  (in metres)		
**		
**		
#cp_b_sec_1_len
cp_b_sec_2_len          = 50.0
cp_b_sec_3_len          = 50.0
cp_b_sec_4_len          = 50.0
cp_b_sec_5_len          = 100.0
cp_b_sec_6_len          = 60.0
cp_b_sec_7_len          = 15.0
**................................... Call this the buckle - half length of RC
cp_b_sec_8_len          = 20.0
cp_b_sec_9_len          = 15.0
cp_b_sec_10_len         = 10.0
**
cp_b_sec_1_len          = (cp_len / 2.0 ) - (cp_b_sec_2_len  + cp_b_sec_3_len  + cp_b_sec_4_len + cp_b_sec_5_len   \
                          + cp_b_sec_6_len  + cp_b_sec_7_len  + cp_b_sec_8_len  + cp_b_sec_9_len + cp_b_sec_10_len)
**
cp_b_sec_11_len         = cp_b_sec_10_len
cp_b_sec_12_len         = cp_b_sec_9_len
cp_b_sec_13_len         = cp_b_sec_8_len
cp_b_sec_14_len         = cp_b_sec_7_len
**
cp_b_sec_15_len         = cp_b_sec_6_len
cp_b_sec_16_len         = cp_b_sec_5_len
**
cp_b_sec_17_len         = cp_b_sec_4_len
cp_b_sec_18_len         = cp_b_sec_3_len
cp_b_sec_19_len         = cp_b_sec_2_len
cp_b_sec_20_len         = cp_b_sec_1_len
**
cp_b_len                = cp_b_sec_1_len  + cp_b_sec_2_len  + cp_b_sec_3_len  + cp_b_sec_4_len  \
                        + cp_b_sec_5_len  + cp_b_sec_6_len  + cp_b_sec_7_len  + cp_b_sec_8_len  + cp_b_sec_9_len  \
                        + cp_b_sec_10_len + cp_b_sec_11_len + cp_b_sec_12_len + cp_b_sec_13_len + cp_b_sec_14_len \
                        + cp_b_sec_15_len + cp_b_sec_16_len + cp_b_sec_17_len + cp_b_sec_18_len + cp_b_sec_19_len \
                        + cp_b_sec_20_len
**
** flowline pipe beam section lengths  (in metres)
**
**
fl_b_sec_1_len          = cp_b_sec_1_len
fl_b_sec_2_len          = cp_b_sec_2_len 
fl_b_sec_3_len          = cp_b_sec_3_len 
fl_b_sec_4_len          = cp_b_sec_4_len 
**
fl_b_sec_5_len          = cp_b_sec_5_len 
fl_b_sec_6_len          = cp_b_sec_6_len 
**
fl_b_sec_7_len          = cp_b_sec_7_len 
**
fl_b_sec_8_len          = cp_b_sec_8_len 
fl_b_sec_9_len          = cp_b_sec_9_len
fl_b_sec_10_len         = cp_b_sec_10_len
**
fl_b_sec_11_len         = cp_b_sec_11_len
fl_b_sec_12_len         = cp_b_sec_12_len 
fl_b_sec_13_len         = cp_b_sec_13_len 
fl_b_sec_14_len         = cp_b_sec_14_len 
**
fl_b_sec_15_len         = cp_b_sec_15_len 
fl_b_sec_16_len         = cp_b_sec_16_len 
**
fl_b_sec_17_len         = cp_b_sec_17_len 
**
fl_b_sec_18_len         = cp_b_sec_18_len 
fl_b_sec_19_len         = cp_b_sec_19_len
fl_b_sec_20_len         = cp_b_sec_20_len
**
fl_b_len                = fl_b_sec_1_len  + fl_b_sec_2_len  + fl_b_sec_3_len  + fl_b_sec_4_len  \
                          + fl_b_sec_5_len  + fl_b_sec_6_len  + fl_b_sec_7_len  + fl_b_sec_8_len  + fl_b_sec_9_len  \
                          + fl_b_sec_10_len + fl_b_sec_11_len + fl_b_sec_12_len + fl_b_sec_13_len + fl_b_sec_14_len \
                          + fl_b_sec_15_len + fl_b_sec_16_len + fl_b_sec_17_len + fl_b_sec_18_len + fl_b_sec_19_len \
                          + fl_b_sec_20_len
**
**************************************************
**    MESH SETTINGS  (adjustable section)
**************************************************
**
**
cp_b_nint_points_radial    = 3                 # Number of beam section int pts in the wall thickness
cp_b_nint_points_circ      = 24                # Number of beam section int pts in the circumference (greater than 8)
**
fl_b_nint_points_radial    = 3                 # Number of beam section int pts in the wall thickness
fl_b_nint_points_circ      = 24                # Number of beam section int pts in the circumference (greater than 8)
**
cp_b_IP_6o_clock_inner     = 1
cp_b_IP_6o_clock_outer     = cp_b_nint_points_radial
cp_b_IP_3o_clock_inner     = cp_b_IP_6o_clock_inner + (cp_b_nint_points_radial * cp_b_nint_points_circ / 4)
cp_b_IP_3o_clock_outer     = cp_b_IP_6o_clock_outer + (cp_b_nint_points_radial * cp_b_nint_points_circ / 4)
cp_b_IP_12o_clock_inner    = cp_b_IP_6o_clock_inner + (cp_b_nint_points_radial * cp_b_nint_points_circ / 2)
cp_b_IP_12o_clock_outer    = cp_b_IP_6o_clock_outer + (cp_b_nint_points_radial * cp_b_nint_points_circ / 2)
cp_b_IP_9o_clock_inner     = cp_b_IP_6o_clock_inner + (3 * cp_b_nint_points_radial * cp_b_nint_points_circ / 4)
cp_b_IP_9o_clock_outer     = cp_b_IP_6o_clock_outer + (3 * cp_b_nint_points_radial * cp_b_nint_points_circ / 4)
**
fl_b_IP_6o_clock_inner     = 1
fl_b_IP_6o_clock_outer     = fl_b_nint_points_radial
fl_b_IP_3o_clock_inner     = fl_b_IP_6o_clock_inner + (fl_b_nint_points_radial * fl_b_nint_points_circ / 4)
fl_b_IP_3o_clock_outer     = fl_b_IP_6o_clock_outer + (fl_b_nint_points_radial * fl_b_nint_points_circ / 4)
fl_b_IP_12o_clock_inner    = fl_b_IP_6o_clock_inner + (fl_b_nint_points_radial * fl_b_nint_points_circ / 2)
fl_b_IP_12o_clock_outer    = fl_b_IP_6o_clock_outer + (fl_b_nint_points_radial * fl_b_nint_points_circ / 2)
fl_b_IP_9o_clock_inner     = fl_b_IP_6o_clock_inner + (3 * fl_b_nint_points_radial * fl_b_nint_points_circ / 4)
fl_b_IP_9o_clock_outer     = fl_b_IP_6o_clock_outer + (3 * fl_b_nint_points_radial * fl_b_nint_points_circ / 4)
**
**
** Mesh density (number of elements per metre)		
**		
cp_b_sec_1_row_dens 	=	0.25
cp_b_sec_2_row_dens 	=	0.25
cp_b_sec_3_row_dens 	=	0.5
cp_b_sec_4_row_dens 	=	0.5
cp_b_sec_5_row_dens 	=	1.0
cp_b_sec_6_row_dens 	=	2.0
cp_b_sec_7_row_dens 	=	2.0
cp_b_sec_8_row_dens 	=	2.0
cp_b_sec_9_row_dens 	=	2.0
cp_b_sec_10_row_dens	=	2.0
cp_b_sec_11_row_dens	=	cp_b_sec_10_row_dens
cp_b_sec_12_row_dens	=	cp_b_sec_9_row_dens
cp_b_sec_13_row_dens	=	cp_b_sec_8_row_dens
cp_b_sec_14_row_dens	=	cp_b_sec_7_row_dens
cp_b_sec_15_row_dens	=	cp_b_sec_6_row_dens
cp_b_sec_16_row_dens	=	cp_b_sec_5_row_dens
cp_b_sec_17_row_dens	=	cp_b_sec_4_row_dens
cp_b_sec_18_row_dens	=	cp_b_sec_3_row_dens
cp_b_sec_19_row_dens	=	cp_b_sec_2_row_dens
cp_b_sec_20_row_dens	=	cp_b_sec_1_row_dens
**
**
 fl_b_sec_1_row_dens        =  cp_b_sec_1_row_dens
 fl_b_sec_2_row_dens        =  cp_b_sec_2_row_dens
 fl_b_sec_3_row_dens        =  cp_b_sec_3_row_dens
 fl_b_sec_4_row_dens        =  cp_b_sec_4_row_dens
 fl_b_sec_5_row_dens        =  cp_b_sec_5_row_dens
 fl_b_sec_6_row_dens        =  cp_b_sec_6_row_dens
 fl_b_sec_7_row_dens        =  cp_b_sec_7_row_dens
**
 fl_b_sec_8_row_dens        =  cp_b_sec_8_row_dens        # buckling area
 fl_b_sec_9_row_dens        =  cp_b_sec_9_row_dens        # buckling area
 fl_b_sec_10_row_dens       =  cp_b_sec_10_row_dens       # buckling area
**
**
 fl_b_sec_11_row_dens       =  fl_b_sec_10_row_dens       # buckling area
 fl_b_sec_12_row_dens       =  fl_b_sec_9_row_dens        # buckling area
 fl_b_sec_13_row_dens       =  fl_b_sec_8_row_dens        # buckling area
**
 fl_b_sec_14_row_dens       =  fl_b_sec_7_row_dens
 fl_b_sec_15_row_dens       =  fl_b_sec_6_row_dens
 fl_b_sec_16_row_dens       =  fl_b_sec_5_row_dens
 fl_b_sec_17_row_dens       =  fl_b_sec_4_row_dens
 fl_b_sec_18_row_dens       =  fl_b_sec_3_row_dens
 fl_b_sec_19_row_dens       =  fl_b_sec_2_row_dens
 fl_b_sec_20_row_dens       =  fl_b_sec_1_row_dens
**
**
cp_b_no_el_rows_sec_1    = max(2,int(cp_b_sec_1_len  * cp_b_sec_1_row_dens))        # sec_1
cp_b_no_el_rows_sec_2    = max(2,int(cp_b_sec_2_len  * cp_b_sec_2_row_dens))        # sec_2
cp_b_no_el_rows_sec_3    = max(2,int(cp_b_sec_3_len  * cp_b_sec_3_row_dens))        # sec_3
cp_b_no_el_rows_sec_4    = max(2,int(cp_b_sec_4_len  * cp_b_sec_4_row_dens))        # sec_4
cp_b_no_el_rows_sec_5    = max(2,int(cp_b_sec_5_len  * cp_b_sec_5_row_dens))	    # sec_5
cp_b_no_el_rows_sec_6    = max(2,int(cp_b_sec_6_len  * cp_b_sec_6_row_dens))	    # sec_6
cp_b_no_el_rows_sec_7    = max(2,int(cp_b_sec_7_len  * cp_b_sec_7_row_dens))	    # sec_7
#
cp_b_no_el_rows_sec_8    = max(2,int(cp_b_sec_8_len  * cp_b_sec_8_row_dens))        # sec_8, buckling area
cp_b_no_el_rows_sec_9    = max(2,int(cp_b_sec_9_len  * cp_b_sec_9_row_dens))        # sec_9, buckling area
cp_b_no_el_rows_sec_10   = max(2,int(cp_b_sec_10_len * cp_b_sec_10_row_dens))       # sec_10, buckling area
#
cp_b_no_el_rows_sec_11   = max(2,int(cp_b_sec_11_len * cp_b_sec_11_row_dens))       # sec_11, buckling area
cp_b_no_el_rows_sec_12   = max(2,int(cp_b_sec_12_len * cp_b_sec_12_row_dens))       # sec_12, buckling area
cp_b_no_el_rows_sec_13   = max(2,int(cp_b_sec_13_len * cp_b_sec_13_row_dens))       # sec_13, buckling area
#
cp_b_no_el_rows_sec_14   = max(2,int(cp_b_sec_14_len * cp_b_sec_14_row_dens))       # sec_14
cp_b_no_el_rows_sec_15   = max(2,int(cp_b_sec_15_len * cp_b_sec_15_row_dens))       # sec_15
cp_b_no_el_rows_sec_16   = max(2,int(cp_b_sec_16_len * cp_b_sec_16_row_dens))       # sec_16
cp_b_no_el_rows_sec_17   = max(2,int(cp_b_sec_17_len * cp_b_sec_17_row_dens))       # sec_17
cp_b_no_el_rows_sec_18   = max(2,int(cp_b_sec_18_len * cp_b_sec_18_row_dens))	    # sec_18
cp_b_no_el_rows_sec_19   = max(2,int(cp_b_sec_19_len * cp_b_sec_19_row_dens))	    # sec_19
cp_b_no_el_rows_sec_20   = max(2,int(cp_b_sec_20_len * cp_b_sec_20_row_dens))	    # sec_20
**
cp_b_no_el_rows          = cp_b_no_el_rows_sec_1  + cp_b_no_el_rows_sec_2  + cp_b_no_el_rows_sec_3 \
                          + cp_b_no_el_rows_sec_4  + cp_b_no_el_rows_sec_5  + cp_b_no_el_rows_sec_6 \
                          + cp_b_no_el_rows_sec_7  + cp_b_no_el_rows_sec_8  + cp_b_no_el_rows_sec_9 \
                          + cp_b_no_el_rows_sec_10 + cp_b_no_el_rows_sec_11  + cp_b_no_el_rows_sec_12 \
                          + cp_b_no_el_rows_sec_13  + cp_b_no_el_rows_sec_14  + cp_b_no_el_rows_sec_15 \
                          + cp_b_no_el_rows_sec_16  + cp_b_no_el_rows_sec_17  + cp_b_no_el_rows_sec_18 \
                          + cp_b_no_el_rows_sec_19 + cp_b_no_el_rows_sec_20
**
fl_b_no_el_rows_sec_1    = max(2,int(fl_b_sec_1_len  * fl_b_sec_1_row_dens))        # sec_1
fl_b_no_el_rows_sec_2    = max(2,int(fl_b_sec_2_len  * fl_b_sec_2_row_dens))        # sec_2
fl_b_no_el_rows_sec_3    = max(2,int(fl_b_sec_3_len  * fl_b_sec_3_row_dens))        # sec_3
fl_b_no_el_rows_sec_4    = max(2,int(fl_b_sec_4_len  * fl_b_sec_4_row_dens))        # sec_4
fl_b_no_el_rows_sec_5    = max(2,int(fl_b_sec_5_len  * fl_b_sec_5_row_dens))	    # sec_5
fl_b_no_el_rows_sec_6    = max(2,int(fl_b_sec_6_len  * fl_b_sec_6_row_dens))	    # sec_6
fl_b_no_el_rows_sec_7    = max(2,int(fl_b_sec_7_len  * fl_b_sec_7_row_dens))	    # sec_7
#
fl_b_no_el_rows_sec_8    = max(2,int(fl_b_sec_8_len  * fl_b_sec_8_row_dens))        # sec_8, buckling area
fl_b_no_el_rows_sec_9    = max(2,int(fl_b_sec_9_len  * fl_b_sec_9_row_dens))        # sec_9, buckling area
fl_b_no_el_rows_sec_10   = max(2,int(fl_b_sec_10_len * fl_b_sec_10_row_dens))       # sec_10, buckling area
#
fl_b_no_el_rows_sec_11   = max(2,int(fl_b_sec_11_len * fl_b_sec_11_row_dens))       # sec_11, buckling area
fl_b_no_el_rows_sec_12   = max(2,int(fl_b_sec_12_len * fl_b_sec_12_row_dens))       # sec_12, buckling area
fl_b_no_el_rows_sec_13   = max(2,int(fl_b_sec_13_len * fl_b_sec_13_row_dens))       # sec_13, buckling area
#
fl_b_no_el_rows_sec_14   = max(2,int(fl_b_sec_14_len * fl_b_sec_14_row_dens))       # sec_14
fl_b_no_el_rows_sec_15   = max(2,int(fl_b_sec_15_len * fl_b_sec_15_row_dens))       # sec_15
fl_b_no_el_rows_sec_16   = max(2,int(fl_b_sec_16_len * fl_b_sec_16_row_dens))       # sec_16
fl_b_no_el_rows_sec_17   = max(2,int(fl_b_sec_17_len * fl_b_sec_17_row_dens))       # sec_17
fl_b_no_el_rows_sec_18   = max(2,int(fl_b_sec_18_len * fl_b_sec_18_row_dens))	    # sec_18
fl_b_no_el_rows_sec_19   = max(2,int(fl_b_sec_19_len * fl_b_sec_19_row_dens))	    # sec_19
fl_b_no_el_rows_sec_20   = max(2,int(fl_b_sec_20_len * fl_b_sec_20_row_dens))	    # sec_20
**
fl_b_no_el_rows          = fl_b_no_el_rows_sec_1  + fl_b_no_el_rows_sec_2  + fl_b_no_el_rows_sec_3 \
                          + fl_b_no_el_rows_sec_4  + fl_b_no_el_rows_sec_5  + fl_b_no_el_rows_sec_6 \
                          + fl_b_no_el_rows_sec_7  + fl_b_no_el_rows_sec_8  + fl_b_no_el_rows_sec_9 \
                          + fl_b_no_el_rows_sec_10 + fl_b_no_el_rows_sec_11  + fl_b_no_el_rows_sec_12 \
                          + fl_b_no_el_rows_sec_13  + fl_b_no_el_rows_sec_14  + fl_b_no_el_rows_sec_15 \
                          + fl_b_no_el_rows_sec_16  + fl_b_no_el_rows_sec_17  + fl_b_no_el_rows_sec_18 \
                          + fl_b_no_el_rows_sec_19 + fl_b_no_el_rows_sec_20
**
** Bias values  ( 1.0 by default)
**
cp_b_bias_sec_1          = 1.0
cp_b_bias_sec_2          = 1.0
cp_b_bias_sec_3          = 1.0
cp_b_bias_sec_4          = 1.0
cp_b_bias_sec_5          = 1.0
cp_b_bias_sec_6          = 1.0
cp_b_bias_sec_7          = 1.0
#
cp_b_bias_sec_8          = 1.0
cp_b_bias_sec_9          = 1.0
cp_b_bias_sec_10         = 1.0
**
cp_b_bias_sec_11         = 1.0
cp_b_bias_sec_12         = 1.0
cp_b_bias_sec_13         = 1.0
#
cp_b_bias_sec_14         = 1.0
cp_b_bias_sec_15         = 1.0
cp_b_bias_sec_16         = 1.0
cp_b_bias_sec_17         = 1.0
cp_b_bias_sec_18         = 1.0
cp_b_bias_sec_19         = 1.0
cp_b_bias_sec_20         = 1.0
**
**
fl_b_bias_sec_1          = 1.0
fl_b_bias_sec_2          = 1.0
fl_b_bias_sec_3          = 1.0
fl_b_bias_sec_4          = 1.0
fl_b_bias_sec_5          = 1.0
fl_b_bias_sec_6          = 1.0
fl_b_bias_sec_7          = 1.0
#
fl_b_bias_sec_8          = 1.0
fl_b_bias_sec_9          = 1.0
fl_b_bias_sec_10         = 1.0
**
fl_b_bias_sec_11         = 1.0
fl_b_bias_sec_12         = 1.0
fl_b_bias_sec_13         = 1.0
#
fl_b_bias_sec_14         = 1.0
fl_b_bias_sec_15         = 1.0
fl_b_bias_sec_16         = 1.0
fl_b_bias_sec_17         = 1.0
fl_b_bias_sec_18         = 1.0
fl_b_bias_sec_19         = 1.0
fl_b_bias_sec_20         = 1.0
**
*****************************************************
**    DIMENSIONS AND PROPERTIES
*****************************************************
**
pi                         = 22/7.0
**
cp_area                    = pi * (cp_b_dia_out**2  - cp_b_dia_in**2) / 4.0
fl_area                    = pi * (fl_b_dia_out**2  - fl_b_dia_in**2) / 4.0
li_area                    = pi * (li_b_dia_out**2  - li_b_dia_in**2) / 4.0
**
cp_internal_area           = pi * (cp_b_dia_in**2) / 4.0
fl_internal_area           = pi * (fl_b_dia_in**2) / 4.0
li_internal_area           = pi * (li_b_dia_in**2) / 4.0
**
cp_coat_area		   = pi * (cp_coat_dia_out**2 - cp_dia_out**2) / 4.0
fl_coat_area		   = pi * (fl_coat_dia_out**2 - fl_dia_out**2) / 4.0
**
cp_coat_bouy_area	   = pi * cp_coat_dia_out**2 / 4.0
**
cp_I11                     = pi * (cp_b_dia_out**4  - cp_b_dia_in**4) / 64.0    # Moment of Inertia for bending around 1-axis
cp_I12                     = 0.0                                                # Moment of Inertia for cross bending
cp_I22                     = pi * (cp_b_dia_out**4  - cp_b_dia_in**4) / 64.0    # Moment of Inertia for bending around 2-axis
cp_J                       = pi * (cp_b_dia_out**4  - cp_b_dia_in**4) / 32.0    # Torsional Constant
**
fl_I11                     = pi * (fl_b_dia_out**4  - fl_b_dia_in**4) / 64.0    # Moment of Inertia for bending around 1-axis
fl_I12                     = 0.0                                                # Moment of Inertia for cross bending
fl_I22                     = pi * (fl_b_dia_out**4  - fl_b_dia_in**4) / 64.0    # Moment of Inertia for bending around 2-axis
fl_J                       = pi * (fl_b_dia_out**4  - fl_b_dia_in**4) / 32.0    # Torsional Constant
**
**
****************************************************************************
**    CATENARY COORDINATES  (adjustable section)
****************************************************************************
**
seabed_elevation           	= -365.0                               		# Seabed elevation (m)
water_elevation           	= -seabed_elevation                       # Water column elevation (m)
**
cp_b_z                     	= seabed_elevation + cp_coat_rad_out   		# Carrier pipe elevation (m)
**
fl_b_z                     	= seabed_elevation + cp_coat_rad_out - 1.e-5	# Flowline elevation (m)
**
****************************************************************************
**    GRAVITY AMPLITUDE  (adjustable section)
****************************************************************************
**
grav_amp                   	= 9.81                                		# Gravitational acceleration (m/s^2)
**
****************************************************************************
**    CENTALISERS/CARRIER PIPE FRICTION COEFFICIENT  (adjustable section)
****************************************************************************
**
cent_friction      		= 0.30
**
****************************************************************************
**    FLUID PARAMETERS  (adjustable section)
****************************************************************************
water_density              	= 1025                              		# Seawater density (kg/m^3)
Cd			   	= 1.0				  		# Drag coefficient
Ca			   	= 1.0				  		# Added mass coefficient
Cm			   	= 1.0 + Ca		 		# Inertia coefficient
**
****************************************************************************
**    ADDITIONAL WEIGHT  (adjustable section): excludes steel weight and buoyancy
****************************************************************************
cont_density			= 870                                     	# Content density (kg/m^3)
cont_shtd_density		= 870                           	      	# Content density (kg/m^3)
freshwater_density		= 1025                               		# Content density (kg/m^3)
cp_coat_density			= 950.0                               		# Carrier pipe coating density (kg/m^3)
fl_coat_density			= 160.0                               		# Carrier pipe coating density (kg/m^3)
cont_wgt			= cont_density * li_internal_area
cp_coat_wgt			= cp_coat_density * cp_coat_area
fl_coat_wgt			= fl_coat_density * fl_coat_area
cont_water_wgt			= water_density * li_internal_area
cont_freshwater_wgt		= freshwater_density * li_internal_area
cont_shtd_wgt			= cont_shtd_density * li_internal_area
cp_wgt			        = cp_material_density * cp_area
fl_wgt			        = fl_material_density * fl_area
li_wgt			        = li_material_density * li_area
Bouy_wgt			= water_density * cp_coat_bouy_area
**
**
cp_addition_weight         	= cp_coat_wgt					# Carrier pipe additional weight (kg/m)
fl_addition_weight         	= cont_wgt + fl_coat_wgt 			# Flowline additional weight (kg/m)
**
fl_weight_empty_deduct		= cont_wgt * grav_amp
fl_weight_water_deduct		= (cont_wgt - cont_water_wgt) * grav_amp
fl_weight_freshwater_deduct	= (cont_wgt - cont_freshwater_wgt) * grav_amp
fl_weight_shtd_deduct		= (cont_wgt - cont_shtd_wgt) * grav_amp
**
weight_empty_sub	= (cp_wgt + cp_coat_wgt + fl_wgt +li_wgt + fl_coat_wgt - Bouy_wgt) * grav_amp
weight_water_sub	= weight_empty_sub + cont_water_wgt * grav_amp
weight_prod_sub		= weight_empty_sub + cont_wgt * grav_amp

****************************************************************************
**    SOIL CHARACTERISTICS  (adjustable section)
****************************************************************************
**
axial_friction_ins             	= 0.64						# Axial friction coefficient
axial_friction_hyd             	= 0.64						# Axial friction coefficient
axial_friction_ope             	= 0.64						# Axial friction coefficient
** axial_friction_rock             = 0.675						# Axial friction coefficient
**
lateral_friction_ins           	= 0.75						# Residual Lateral friction coefficient
lateral_friction_hyd           	= 0.75						# Lateral friction coefficient
lateral_friction_ope           	= 0.75						# Lateral friction coefficient
** lateral_friction_rock           = 0.675						# Lateral friction coefficient
**
elastic_slip       		= 0.01*(cp_dia_out)               		# Elastic slip for both axial and lateral behaviour (m)
**
seabed_stiffness 		=  75 * 1000 					# seabed stiffness (N/m/m)
**
****************************************************************************
**    LATERAL DISPLACEMENT  (adjustable section)
****************************************************************************
**
 cp_lat_offset 		= 0.5						                #HOOS (m)
 rcm_rotation			= 0
**
****************************************************************************
**    TEMPERATURE LOADS  (adjustable section)
****************************************************************************
  cp_temp_ini              = 4.0                             			# initial temperature (degrees C)
  cp_temp_hydro            = 10.9                           			# hydrotest temperature (degrees C)
  cp_temp_oper             = 10.9                            			# production operation temperature (degrees C)
  cp_temp_design           = 10.9                           			# production operation temperature (degrees C)
  cp_temp_shtd		         = 4.0                            			# production shutdown temperature (degrees C)
**
  fl_temp_ini              = 4.0                             			# initial temperature (degrees C)
  fl_temp_hydro            = 10.9                           			# hydrotest temperature (degrees C)
  fl_temp_oper             = 80                           			# production operation temperature (degrees C)
  fl_temp_design           = 85                         			# Design production operation temperature (degrees C)
  fl_temp_shtd		         = 4.0                      			# production shutdown temperature (degrees C)
**
  li_temp_ini              = 4.0                             			# initial temperature (degrees C)
  li_temp_hydro            = 10.9                            			# hydrotest temperature (degrees C)
  li_temp_oper             = 80                            			# production operation temperature (degrees C)
  li_temp_design           = 85                            			# Design production operation temperature (degrees C)
  li_temp_shtd	           = 4.0                          			# production shutdown temperature (degrees C)
**
****************************************************************************
**    PRESSURE LOADS  (adjustable section)
****************************************************************************
  Pressure_hydrostatic 	= - seabed_elevation* grav_amp * water_density   	# Hydrostatic pressure (Pa)
  fl_Pressure_ini 	= 1.0   						# Empty pressure (Pa)
  fl_Pressure_install 	= 1.0e5	+  Pressure_hydrostatic				   	# Installation flooded pressure (Pa)
  fl_Pressure_prod 	= - seabed_elevation * grav_amp * cont_density   	# Product flooded pressure (Pa)
  fl_Pressure_hydro     = 288.8e5						# hydrotest pressure (Pa)
  fl_pressure_oper      = 70e5                          			# operational pressure (Pa)
  fl_pressure_design    = 250e5                         			# Design pressure (Pa)
  fl_pressure_shtd      = 1.0e5                         			# Shutdown pressure (Pa)
**

  pressure_ratio 		= 0.768
  # Manually changed based on Mathcad Calculation


  Pressure_hydrostatic_int 	= Pressure_hydrostatic * pressure_ratio	# Hydrostatic pressure (Pa)
  fl_Pressure_prod_int		= fl_Pressure_prod * pressure_ratio	# Product flooded pressure (Pa)
  fl_Pressure_install_int	= fl_Pressure_install * pressure_ratio	# Installation flooded pressure (Pa)
  fl_Pressure_hydro_int 	= fl_Pressure_hydro * pressure_ratio	# hydrotest pressure (Pa)
  fl_pressure_oper_int  	= fl_pressure_oper * pressure_ratio	# operational pressure (Pa)
  fl_pressure_design_int	= fl_pressure_design * pressure_ratio	# Design pressure (Pa)
  fl_pressure_shtd_int		= fl_pressure_shtd * pressure_ratio	# Shutdown pressure (Pa)
**
**
****************************************************************************
**    TRAWLING  (adjustable section)
****************************************************************************
  Total_dyn_step_time 		= 3.5						# Total dynamic step time (s)
  T_p                 		= 2.29 						# Trawl impact time (s)
  F_pull              		= 261.4 * 1.0 * 1000 * 0.8			# Lateral pullover force - positive in same direction as buckle (N)
  Fz_pull             		= -43.83 * 1.0 * 1000 * 0.8			# Vertical pullover force - positive is upwards (N)
  T_pFp               		= T_p - 0.6					# Time step 1 (s)
  T_pFi               		= 0.2						# Time step 2 (s)
  inc_step            		= Total_dyn_step_time / 200			# Time increment (s)
**
****************************************************************************
**    RESIDUAL LAYING TENSION  (adjustable section)
****************************************************************************
**
  total_lay_tension 		=    1e3
**
**
** Ignore below these lines if not using temperature gradient to apply RLT
**
  cp_residual_lay_tension 	=    1.0e3                         		# Carrier pipe residual tension from installation (N)
  fl_residual_lay_tension 	=    1.0e3                         		# Flowline residual tension from installation (N)
**
** residual axial stresses from installation
  cp_residual_lay_stress =  cp_residual_lay_tension  / cp_area  		# in Pa
  fl_residual_lay_stress =  fl_residual_lay_tension  / fl_area  		# in Pa
**
** temperature gradient to apply residual tension
  cp_temp_gradient_res_tension =  cp_residual_lay_tension  / (cp_area * cp_material_E_0C * cp_material_th_expansion_0C)  # in Pa
  fl_temp_gradient_res_tension =  fl_residual_lay_tension  / (fl_area * fl_material_E_0C * fl_material_th_expansion_0C)  # in Pa
**
** Laid temperature to apply residual tension
  cp_temp_res_tension =  cp_temp_ini - cp_temp_gradient_res_tension             # in degrees Celsius
  fl_temp_res_tension =  fl_temp_ini - fl_temp_gradient_res_tension             # in degrees Celsius
**
** Hydrotest temperature, including residual tension temperature gradient
  cp_temp_hydro_res_tension =  cp_temp_hydro - cp_temp_gradient_res_tension     # in degrees Celsius
  fl_temp_hydro_res_tension =  fl_temp_hydro - fl_temp_gradient_res_tension     # in degrees Celsius
**
** Production operation temperature, including residual tension temperature gradient
  cp_temp_oper_res_tension =  cp_temp_oper - cp_temp_gradient_res_tension     # in degrees Celsius
  fl_temp_oper_res_tension =  fl_temp_oper - fl_temp_gradient_res_tension     # in degrees Celsius
**
** Design production operation temperature, including residual tension temperature gradient
  cp_temp_design_res_tension =  cp_temp_design - cp_temp_gradient_res_tension     # in degrees Celsius
  fl_temp_design_res_tension =  fl_temp_design - fl_temp_gradient_res_tension     # in degrees Celsius
**
** Shutdown production operation temperature, including residual tension temperature gradient
  cp_temp_shtd_res_tension =  cp_temp_shtd - cp_temp_gradient_res_tension     # in degrees Celsius
  fl_temp_shtd_res_tension =  fl_temp_shtd - fl_temp_gradient_res_tension     # in degrees Celsius
