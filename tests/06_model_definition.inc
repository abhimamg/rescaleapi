**   Version: v3c-beam-PIP-LB
**
** ---------------------------------------------------
** --- CARRIER PIPE DEFINITION [FULL BEAM SECTION] ---
** ---------------------------------------------------
**
****PS
**
*PARAMETER
#
#
# --- MESH PROPERTY DEFINITION
#
#
# --- beam element rows
#
#
#
** *************************************
** A - ID's FOR BEAM NODES AND ELEMENTS
** *************************************
#
# --- NODE NUMBER DEFINITION
#
# --- beam element nodes
#
cp_b_nd_id_start       = 1000001
cp_b_id_row_inc        = 1
cp_b_nd_id_start_p1    = cp_b_nd_id_start + cp_b_id_row_inc
cp_b_nd_id_end         = cp_b_nd_id_start + cp_b_no_el_rows * cp_b_id_row_inc
cp_b_nd_id_end_m1      = cp_b_nd_id_end - cp_b_id_row_inc
cp_b_nd_id_end_m2      = cp_b_nd_id_end - 2 * cp_b_id_row_inc
#
**  cp_b_nd_id_mid         = cp_b_nd_id_start + cp_b_no_el_rows * cp_b_id_row_inc / 2
#
#
cp_b_nd_id_sec_1       = cp_b_nd_id_start
cp_b_nd_id_sec_2       = cp_b_nd_id_sec_1 + cp_b_no_el_rows_sec_1   * cp_b_id_row_inc
cp_b_nd_id_sec_3       = cp_b_nd_id_sec_2 + cp_b_no_el_rows_sec_2   * cp_b_id_row_inc
cp_b_nd_id_sec_4       = cp_b_nd_id_sec_3 + cp_b_no_el_rows_sec_3   * cp_b_id_row_inc
cp_b_nd_id_sec_5       = cp_b_nd_id_sec_4 + cp_b_no_el_rows_sec_4   * cp_b_id_row_inc
cp_b_nd_id_sec_6       = cp_b_nd_id_sec_5 + cp_b_no_el_rows_sec_5   * cp_b_id_row_inc
cp_b_nd_id_sec_7       = cp_b_nd_id_sec_6 + cp_b_no_el_rows_sec_6   * cp_b_id_row_inc
cp_b_nd_id_sec_8       = cp_b_nd_id_sec_7 + cp_b_no_el_rows_sec_7   * cp_b_id_row_inc
cp_b_nd_id_sec_9       = cp_b_nd_id_sec_8 + cp_b_no_el_rows_sec_8   * cp_b_id_row_inc
cp_b_nd_id_sec_10      = cp_b_nd_id_sec_9 + cp_b_no_el_rows_sec_9   * cp_b_id_row_inc
cp_b_nd_id_sec_11      = cp_b_nd_id_sec_10 + cp_b_no_el_rows_sec_10 * cp_b_id_row_inc
cp_b_nd_id_sec_12      = cp_b_nd_id_sec_11 + cp_b_no_el_rows_sec_11 * cp_b_id_row_inc
cp_b_nd_id_sec_13      = cp_b_nd_id_sec_12 + cp_b_no_el_rows_sec_12 * cp_b_id_row_inc
cp_b_nd_id_sec_14      = cp_b_nd_id_sec_13 + cp_b_no_el_rows_sec_13 * cp_b_id_row_inc
cp_b_nd_id_sec_15      = cp_b_nd_id_sec_14 + cp_b_no_el_rows_sec_14 * cp_b_id_row_inc
cp_b_nd_id_sec_16      = cp_b_nd_id_sec_15 + cp_b_no_el_rows_sec_15 * cp_b_id_row_inc
cp_b_nd_id_sec_17      = cp_b_nd_id_sec_16 + cp_b_no_el_rows_sec_16 * cp_b_id_row_inc
cp_b_nd_id_sec_18      = cp_b_nd_id_sec_17 + cp_b_no_el_rows_sec_17 * cp_b_id_row_inc
cp_b_nd_id_sec_19      = cp_b_nd_id_sec_18 + cp_b_no_el_rows_sec_18 * cp_b_id_row_inc
cp_b_nd_id_sec_20      = cp_b_nd_id_sec_19 + cp_b_no_el_rows_sec_19 * cp_b_id_row_inc
#
cp_b_nd_id_sec_1_p1    = cp_b_nd_id_sec_1 + 1
cp_b_nd_id_sec_2_p1    = cp_b_nd_id_sec_2 + 1
cp_b_nd_id_sec_3_p1    = cp_b_nd_id_sec_3 + 1
cp_b_nd_id_sec_4_p1    = cp_b_nd_id_sec_4 + 1
cp_b_nd_id_sec_5_p1    = cp_b_nd_id_sec_5 + 1
cp_b_nd_id_sec_6_p1    = cp_b_nd_id_sec_6 + 1
cp_b_nd_id_sec_7_p1    = cp_b_nd_id_sec_7 + 1
cp_b_nd_id_sec_8_p1    = cp_b_nd_id_sec_8 + 1
cp_b_nd_id_sec_9_p1    = cp_b_nd_id_sec_9 + 1
cp_b_nd_id_sec_10_p1   = cp_b_nd_id_sec_10 + 1
cp_b_nd_id_sec_11_p1   = cp_b_nd_id_sec_11 + 1
cp_b_nd_id_sec_12_p1   = cp_b_nd_id_sec_12 + 1
cp_b_nd_id_sec_13_p1   = cp_b_nd_id_sec_13 + 1
cp_b_nd_id_sec_14_p1   = cp_b_nd_id_sec_14 + 1
cp_b_nd_id_sec_15_p1   = cp_b_nd_id_sec_15 + 1
cp_b_nd_id_sec_16_p1   = cp_b_nd_id_sec_16 + 1
cp_b_nd_id_sec_17_p1   = cp_b_nd_id_sec_17 + 1
cp_b_nd_id_sec_18_p1   = cp_b_nd_id_sec_18 + 1
cp_b_nd_id_sec_19_p1   = cp_b_nd_id_sec_19 + 1
cp_b_nd_id_sec_20_p1   = cp_b_nd_id_sec_20 + 1
#
# DEFINE PULLOVER AND BUCKLE NODES
** MGa: Pullover node, needs to be defined in accordance with requirements
** in a VAS model can be the same as the buckle or somewhere else, e.g. at Buckle
cp_b_nd_id_mid         = cp_b_nd_id_sec_11
cp_b_nd_id_pullover    = cp_b_nd_id_mid   
cp_b_nd_id_buckle1     = cp_b_nd_id_mid
cp_b_nd_id_restrain1	= int(cp_b_nd_id_mid - cp_b_sec_6_row_dens * 50)
cp_b_nd_id_restrain2	= int(cp_b_nd_id_mid + cp_b_sec_6_row_dens * 50)
#
# --- ELEMENT NUMBER DEFINITION
#
# --- beam elements
#
cp_b_el_id_start       = 1000001
cp_b_el_id_end         = cp_b_el_id_start + cp_b_no_el_rows * cp_b_id_row_inc - 1
cp_b_el_id_mid_left    = cp_b_el_id_start + cp_b_no_el_rows * cp_b_id_row_inc / 2.0 - 1
cp_b_el_id_mid_right   = cp_b_el_id_start + cp_b_no_el_rows * cp_b_id_row_inc / 2.0
#
cp_b_el_id_sec_1       = cp_b_el_id_start
cp_b_el_id_sec_2       = cp_b_el_id_sec_1 + cp_b_no_el_rows_sec_1   * cp_b_id_row_inc
cp_b_el_id_sec_3       = cp_b_el_id_sec_2 + cp_b_no_el_rows_sec_2   * cp_b_id_row_inc
cp_b_el_id_sec_4       = cp_b_el_id_sec_3 + cp_b_no_el_rows_sec_3   * cp_b_id_row_inc
cp_b_el_id_sec_5       = cp_b_el_id_sec_4 + cp_b_no_el_rows_sec_4   * cp_b_id_row_inc
cp_b_el_id_sec_6       = cp_b_el_id_sec_5 + cp_b_no_el_rows_sec_5   * cp_b_id_row_inc
cp_b_el_id_sec_7       = cp_b_el_id_sec_6 + cp_b_no_el_rows_sec_6   * cp_b_id_row_inc
cp_b_el_id_sec_8       = cp_b_el_id_sec_7 + cp_b_no_el_rows_sec_7   * cp_b_id_row_inc
cp_b_el_id_sec_9       = cp_b_el_id_sec_8 + cp_b_no_el_rows_sec_8   * cp_b_id_row_inc
cp_b_el_id_sec_10      = cp_b_el_id_sec_9 + cp_b_no_el_rows_sec_9   * cp_b_id_row_inc
cp_b_el_id_sec_11      = cp_b_el_id_sec_10 + cp_b_no_el_rows_sec_10 * cp_b_id_row_inc
cp_b_el_id_sec_12      = cp_b_el_id_sec_11 + cp_b_no_el_rows_sec_11 * cp_b_id_row_inc
cp_b_el_id_sec_13      = cp_b_el_id_sec_12 + cp_b_no_el_rows_sec_12 * cp_b_id_row_inc
cp_b_el_id_sec_14      = cp_b_el_id_sec_13 + cp_b_no_el_rows_sec_13 * cp_b_id_row_inc
cp_b_el_id_sec_15      = cp_b_el_id_sec_14 + cp_b_no_el_rows_sec_14 * cp_b_id_row_inc
cp_b_el_id_sec_16      = cp_b_el_id_sec_15 + cp_b_no_el_rows_sec_15 * cp_b_id_row_inc
cp_b_el_id_sec_17      = cp_b_el_id_sec_16 + cp_b_no_el_rows_sec_16 * cp_b_id_row_inc
cp_b_el_id_sec_18      = cp_b_el_id_sec_17 + cp_b_no_el_rows_sec_17 * cp_b_id_row_inc
cp_b_el_id_sec_19      = cp_b_el_id_sec_18 + cp_b_no_el_rows_sec_18 * cp_b_id_row_inc
cp_b_el_id_sec_20      = cp_b_el_id_sec_19 + cp_b_no_el_rows_sec_19 * cp_b_id_row_inc
#
#
** *******************************
** B - POSITIONS ALONG THE PIPE
** *******************************
**
cp_b_start_x       = 0.0
**
cp_POS_1    = cp_b_start_x
cp_POS_2    = cp_POS_1      + cp_b_sec_1_len
cp_POS_3    = cp_POS_2      + cp_b_sec_2_len
cp_POS_4    = cp_POS_3      + cp_b_sec_3_len
cp_POS_5    = cp_POS_4      + cp_b_sec_4_len
cp_POS_6    = cp_POS_5      + cp_b_sec_5_len
cp_POS_7    = cp_POS_6      + cp_b_sec_6_len
cp_POS_8    = cp_POS_7      + cp_b_sec_7_len
cp_POS_9    = cp_POS_8      + cp_b_sec_8_len
cp_POS_10   = cp_POS_9      + cp_b_sec_9_len
cp_POS_11   = cp_POS_10     + cp_b_sec_10_len
cp_POS_12   = cp_POS_11     + cp_b_sec_11_len
cp_POS_13   = cp_POS_12     + cp_b_sec_12_len
cp_POS_14   = cp_POS_13     + cp_b_sec_13_len
cp_POS_15   = cp_POS_14     + cp_b_sec_14_len
cp_POS_16   = cp_POS_15     + cp_b_sec_15_len
cp_POS_17   = cp_POS_16     + cp_b_sec_16_len
cp_POS_18   = cp_POS_17     + cp_b_sec_17_len
cp_POS_19   = cp_POS_18     + cp_b_sec_18_len
cp_POS_20   = cp_POS_19     + cp_b_sec_19_len
**
cp_b_end_x       = cp_b_start_x + cp_b_len
**
**
****PE
**
** **********************
** C1 - NODE DEFINITION
** **********************
**
** --- Beam Mesh
**
** Generate nodes at the start of each section
**
*NODE, NSET=cp_b_nds_sec_1
 <cp_b_nd_id_sec_1>,  <cp_POS_1>,    0., <cp_b_z>
*NODE, NSET=cp_b_nds_sec_2
 <cp_b_nd_id_sec_2>,  <cp_POS_2>,    0., <cp_b_z>
*NODE, NSET=cp_b_nds_sec_3
 <cp_b_nd_id_sec_3>,  <cp_POS_3>,    0., <cp_b_z>
*NODE, NSET=cp_b_nds_sec_4
 <cp_b_nd_id_sec_4>,  <cp_POS_4>,    0., <cp_b_z>
*NODE, NSET=cp_b_nds_sec_5
 <cp_b_nd_id_sec_5>,  <cp_POS_5>,    0., <cp_b_z>
*NODE, NSET=cp_b_nds_sec_6
 <cp_b_nd_id_sec_6>,  <cp_POS_6>,    0., <cp_b_z>
*NODE, NSET=cp_b_nds_sec_7
 <cp_b_nd_id_sec_7>,  <cp_POS_7>,    0., <cp_b_z>
*NODE, NSET=cp_b_nds_sec_8
 <cp_b_nd_id_sec_8>,  <cp_POS_8>,    0., <cp_b_z>
*NODE, NSET=cp_b_nds_sec_9
 <cp_b_nd_id_sec_9>,  <cp_POS_9>,    0., <cp_b_z>
*NODE, NSET=cp_b_nds_sec_10
 <cp_b_nd_id_sec_10>, <cp_POS_10>,   0., <cp_b_z>
*NODE, NSET=cp_b_nds_sec_11
 <cp_b_nd_id_sec_11>, <cp_POS_11>,   0., <cp_b_z>
*NODE, NSET=cp_b_nds_sec_12
 <cp_b_nd_id_sec_12>, <cp_POS_12>,   0., <cp_b_z>
*NODE, NSET=cp_b_nds_sec_13
 <cp_b_nd_id_sec_13>, <cp_POS_13>,   0., <cp_b_z>
*NODE, NSET=cp_b_nds_sec_14
 <cp_b_nd_id_sec_14>, <cp_POS_14>,   0., <cp_b_z>
*NODE, NSET=cp_b_nds_sec_15
 <cp_b_nd_id_sec_15>, <cp_POS_15>,   0., <cp_b_z>
*NODE, NSET=cp_b_nds_sec_16
 <cp_b_nd_id_sec_16>, <cp_POS_16>,   0., <cp_b_z>
*NODE, NSET=cp_b_nds_sec_17
 <cp_b_nd_id_sec_17>, <cp_POS_17>,   0., <cp_b_z>
*NODE, NSET=cp_b_nds_sec_18
 <cp_b_nd_id_sec_18>, <cp_POS_18>,   0., <cp_b_z>
*NODE, NSET=cp_b_nds_sec_19
 <cp_b_nd_id_sec_19>, <cp_POS_19>,   0., <cp_b_z>
*NODE, NSET=cp_b_nds_sec_20
 <cp_b_nd_id_sec_20>, <cp_POS_20>,   0., <cp_b_z>
*NODE, NSET=cp_b_nds_end
 <cp_b_nd_id_end>,    <cp_b_end_x>,  0., <cp_b_z>
**
** Fill the nodes in each section
**
*NFILL, NSET=cp_b_nds_sec_1, BIAS=<cp_b_bias_sec_1>
 cp_b_nds_sec_1, cp_b_nds_sec_2, <cp_b_no_el_rows_sec_1>, <cp_b_id_row_inc>
*NFILL, NSET=cp_b_nds_sec_2, BIAS=<cp_b_bias_sec_2>
 cp_b_nds_sec_2, cp_b_nds_sec_3, <cp_b_no_el_rows_sec_2>, <cp_b_id_row_inc>
*NFILL, NSET=cp_b_nds_sec_3, BIAS=<cp_b_bias_sec_3>
 cp_b_nds_sec_3, cp_b_nds_sec_4, <cp_b_no_el_rows_sec_3>, <cp_b_id_row_inc>
*NFILL, NSET=cp_b_nds_sec_4, BIAS=<cp_b_bias_sec_4>
 cp_b_nds_sec_4, cp_b_nds_sec_5, <cp_b_no_el_rows_sec_4>, <cp_b_id_row_inc>
*NFILL, NSET=cp_b_nds_sec_5, BIAS=<cp_b_bias_sec_5>
 cp_b_nds_sec_5, cp_b_nds_sec_6, <cp_b_no_el_rows_sec_5>, <cp_b_id_row_inc>
*NFILL, NSET=cp_b_nds_sec_6, BIAS=<cp_b_bias_sec_6>
 cp_b_nds_sec_6, cp_b_nds_sec_7, <cp_b_no_el_rows_sec_6>, <cp_b_id_row_inc>
*NFILL, NSET=cp_b_nds_sec_7, BIAS=<cp_b_bias_sec_7>
 cp_b_nds_sec_7, cp_b_nds_sec_8, <cp_b_no_el_rows_sec_7>, <cp_b_id_row_inc>
*NFILL, NSET=cp_b_nds_sec_8, BIAS=<cp_b_bias_sec_8>
 cp_b_nds_sec_8, cp_b_nds_sec_9, <cp_b_no_el_rows_sec_8>, <cp_b_id_row_inc>
*NFILL, NSET=cp_b_nds_sec_9, BIAS=<cp_b_bias_sec_9>
 cp_b_nds_sec_9, cp_b_nds_sec_10, <cp_b_no_el_rows_sec_9>, <cp_b_id_row_inc>
*NFILL, NSET=cp_b_nds_sec_10, BIAS=<cp_b_bias_sec_10>
 cp_b_nds_sec_10, cp_b_nds_sec_11, <cp_b_no_el_rows_sec_10>, <cp_b_id_row_inc>
*NFILL, NSET=cp_b_nds_sec_11, BIAS=<cp_b_bias_sec_11>
 cp_b_nds_sec_11, cp_b_nds_sec_12, <cp_b_no_el_rows_sec_11>, <cp_b_id_row_inc>
*NFILL, NSET=cp_b_nds_sec_12, BIAS=<cp_b_bias_sec_12>
 cp_b_nds_sec_12, cp_b_nds_sec_13, <cp_b_no_el_rows_sec_12>, <cp_b_id_row_inc>
*NFILL, NSET=cp_b_nds_sec_13, BIAS=<cp_b_bias_sec_13>
 cp_b_nds_sec_13, cp_b_nds_sec_14, <cp_b_no_el_rows_sec_13>, <cp_b_id_row_inc>
*NFILL, NSET=cp_b_nds_sec_14, BIAS=<cp_b_bias_sec_14>
 cp_b_nds_sec_14, cp_b_nds_sec_15, <cp_b_no_el_rows_sec_14>, <cp_b_id_row_inc>
*NFILL, NSET=cp_b_nds_sec_15, BIAS=<cp_b_bias_sec_15>
 cp_b_nds_sec_15, cp_b_nds_sec_16, <cp_b_no_el_rows_sec_15>, <cp_b_id_row_inc>
*NFILL, NSET=cp_b_nds_sec_16, BIAS=<cp_b_bias_sec_16>
 cp_b_nds_sec_16, cp_b_nds_sec_17, <cp_b_no_el_rows_sec_16>, <cp_b_id_row_inc>
*NFILL, NSET=cp_b_nds_sec_17, BIAS=<cp_b_bias_sec_17>
 cp_b_nds_sec_17, cp_b_nds_sec_18, <cp_b_no_el_rows_sec_17>, <cp_b_id_row_inc>
*NFILL, NSET=cp_b_nds_sec_18, BIAS=<cp_b_bias_sec_18>
 cp_b_nds_sec_18, cp_b_nds_sec_19, <cp_b_no_el_rows_sec_18>, <cp_b_id_row_inc>
*NFILL, NSET=cp_b_nds_sec_19, BIAS=<cp_b_bias_sec_19>
 cp_b_nds_sec_19, cp_b_nds_sec_20, <cp_b_no_el_rows_sec_19>, <cp_b_id_row_inc>
*NFILL, NSET=cp_b_nds_sec_20, BIAS=<cp_b_bias_sec_20>
 cp_b_nds_sec_20, cp_b_nds_end,    <cp_b_no_el_rows_sec_20>, <cp_b_id_row_inc>
**
**
** ***********************
** C2 - CREATE NODE SETS
** ***********************
**
**
** --- all beam nodes
**
*NSET, NSET=cp_b_nds, GENERATE
 <cp_b_nd_id_start>, <cp_b_nd_id_end>, 1
**
** --- al beam nodes except end node
**
*NSET, NSET=cp_b_nds_m1, GENERATE
 <cp_b_nd_id_start>, <cp_b_nd_id_end_m1>, 1
**
** --- create sets for 1st and last nodes to use in restarts
**
*NSET, NSET=cp_b_nd_start
 <cp_b_nd_id_start>
**
*NSET, NSET=cp_b_nd_end
 <cp_b_nd_id_end>
**
** --- create buckle and pullover node sets for restarts
**
*NSET, NSET=cp_b_nd_buckle1
 <cp_b_nd_id_buckle1>
**
*NSET, NSET=cp_b_nd_pullover
 <cp_b_nd_id_pullover> 
**
**
** *************************
** D1 - ELEMENT DEFINITION
** *************************
**
** --- Beam elements
**
*ELEMENT, TYPE=PIPE31H
 <cp_b_el_id_sec_1>,  <cp_b_nd_id_sec_1>,  <cp_b_nd_id_sec_1_p1>
 <cp_b_el_id_sec_2>,  <cp_b_nd_id_sec_2>,  <cp_b_nd_id_sec_2_p1>
 <cp_b_el_id_sec_3>,  <cp_b_nd_id_sec_3>,  <cp_b_nd_id_sec_3_p1>
 <cp_b_el_id_sec_4>,  <cp_b_nd_id_sec_4>,  <cp_b_nd_id_sec_4_p1>
 <cp_b_el_id_sec_5>,  <cp_b_nd_id_sec_5>,  <cp_b_nd_id_sec_5_p1>
 <cp_b_el_id_sec_6>,  <cp_b_nd_id_sec_6>,  <cp_b_nd_id_sec_6_p1>
 <cp_b_el_id_sec_7>,  <cp_b_nd_id_sec_7>,  <cp_b_nd_id_sec_7_p1> 
 <cp_b_el_id_sec_8>,  <cp_b_nd_id_sec_8>,  <cp_b_nd_id_sec_8_p1> 
 <cp_b_el_id_sec_9>,  <cp_b_nd_id_sec_9>,  <cp_b_nd_id_sec_9_p1>
 <cp_b_el_id_sec_10>,  <cp_b_nd_id_sec_10>, <cp_b_nd_id_sec_10_p1>
 <cp_b_el_id_sec_11>,  <cp_b_nd_id_sec_11>, <cp_b_nd_id_sec_11_p1>
 <cp_b_el_id_sec_12>,  <cp_b_nd_id_sec_12>, <cp_b_nd_id_sec_12_p1>
 <cp_b_el_id_sec_13>,  <cp_b_nd_id_sec_13>, <cp_b_nd_id_sec_13_p1>
 <cp_b_el_id_sec_14>,  <cp_b_nd_id_sec_14>, <cp_b_nd_id_sec_14_p1>
 <cp_b_el_id_sec_15>,  <cp_b_nd_id_sec_15>, <cp_b_nd_id_sec_15_p1>
 <cp_b_el_id_sec_16>,  <cp_b_nd_id_sec_16>, <cp_b_nd_id_sec_16_p1>
 <cp_b_el_id_sec_17>,  <cp_b_nd_id_sec_17>, <cp_b_nd_id_sec_17_p1>
 <cp_b_el_id_sec_18>,  <cp_b_nd_id_sec_18>, <cp_b_nd_id_sec_18_p1>
 <cp_b_el_id_sec_19>,  <cp_b_nd_id_sec_19>, <cp_b_nd_id_sec_19_p1>
 <cp_b_el_id_sec_20>,  <cp_b_nd_id_sec_20>, <cp_b_nd_id_sec_20_p1>
**
*ELGEN, ELSET=cp_b_els_sec_1
 <cp_b_el_id_sec_1>,  <cp_b_no_el_rows_sec_1>, <cp_b_id_row_inc>, <cp_b_id_row_inc>
*ELGEN, ELSET=cp_b_els_sec_2
 <cp_b_el_id_sec_2>,  <cp_b_no_el_rows_sec_2>, <cp_b_id_row_inc>, <cp_b_id_row_inc>
*ELGEN, ELSET=cp_b_els_sec_3
 <cp_b_el_id_sec_3>,  <cp_b_no_el_rows_sec_3>, <cp_b_id_row_inc>, <cp_b_id_row_inc>
*ELGEN, ELSET=cp_b_els_sec_4
 <cp_b_el_id_sec_4>,  <cp_b_no_el_rows_sec_4>, <cp_b_id_row_inc>, <cp_b_id_row_inc>
*ELGEN, ELSET=cp_b_els_sec_5
 <cp_b_el_id_sec_5>,  <cp_b_no_el_rows_sec_5>, <cp_b_id_row_inc>, <cp_b_id_row_inc>
*ELGEN, ELSET=cp_b_els_sec_6
 <cp_b_el_id_sec_6>,  <cp_b_no_el_rows_sec_6>, <cp_b_id_row_inc>, <cp_b_id_row_inc>
*ELGEN, ELSET=cp_b_els_sec_7
 <cp_b_el_id_sec_7>,  <cp_b_no_el_rows_sec_7>, <cp_b_id_row_inc>, <cp_b_id_row_inc>
*ELGEN, ELSET=cp_b_els_sec_8
 <cp_b_el_id_sec_8>,  <cp_b_no_el_rows_sec_8>, <cp_b_id_row_inc>, <cp_b_id_row_inc>
*ELGEN, ELSET=cp_b_els_sec_9
 <cp_b_el_id_sec_9>,  <cp_b_no_el_rows_sec_9>, <cp_b_id_row_inc>, <cp_b_id_row_inc>
*ELGEN, ELSET=cp_b_els_sec_10
 <cp_b_el_id_sec_10>,  <cp_b_no_el_rows_sec_10>, <cp_b_id_row_inc>, <cp_b_id_row_inc>
*ELGEN, ELSET=cp_b_els_sec_11
 <cp_b_el_id_sec_11>,  <cp_b_no_el_rows_sec_11>, <cp_b_id_row_inc>, <cp_b_id_row_inc>
*ELGEN, ELSET=cp_b_els_sec_12
 <cp_b_el_id_sec_12>,  <cp_b_no_el_rows_sec_12>, <cp_b_id_row_inc>, <cp_b_id_row_inc>
*ELGEN, ELSET=cp_b_els_sec_13
 <cp_b_el_id_sec_13>,  <cp_b_no_el_rows_sec_13>, <cp_b_id_row_inc>, <cp_b_id_row_inc>
*ELGEN, ELSET=cp_b_els_sec_14
 <cp_b_el_id_sec_14>,  <cp_b_no_el_rows_sec_14>, <cp_b_id_row_inc>, <cp_b_id_row_inc>
*ELGEN, ELSET=cp_b_els_sec_15
 <cp_b_el_id_sec_15>,  <cp_b_no_el_rows_sec_15>, <cp_b_id_row_inc>, <cp_b_id_row_inc>
*ELGEN, ELSET=cp_b_els_sec_16
 <cp_b_el_id_sec_16>,  <cp_b_no_el_rows_sec_16>, <cp_b_id_row_inc>, <cp_b_id_row_inc>
*ELGEN, ELSET=cp_b_els_sec_17
 <cp_b_el_id_sec_17>,  <cp_b_no_el_rows_sec_17>, <cp_b_id_row_inc>, <cp_b_id_row_inc>
*ELGEN, ELSET=cp_b_els_sec_18
 <cp_b_el_id_sec_18>,  <cp_b_no_el_rows_sec_18>, <cp_b_id_row_inc>, <cp_b_id_row_inc>
*ELGEN, ELSET=cp_b_els_sec_19
 <cp_b_el_id_sec_19>,  <cp_b_no_el_rows_sec_19>, <cp_b_id_row_inc>, <cp_b_id_row_inc>
*ELGEN, ELSET=cp_b_els_sec_20
 <cp_b_el_id_sec_20>,  <cp_b_no_el_rows_sec_20>, <cp_b_id_row_inc>, <cp_b_id_row_inc>
**
**
** *************************
** D2 - CREATE ELEMENT SETS
** *************************
**
** --- all pipe beam elements
**
*ELSET, ELSET=cp_b_els, GENERATE
 <cp_b_el_id_start>, <cp_b_el_id_end>, 1
**
*ELSET, ELSET=cp_b_els_buckle, GENERATE
 <cp_b_el_id_sec_7>, <cp_b_el_id_sec_15>, 1
*ELSET, ELSET=cp_els
 cp_b_els
**
*ELSET, ELSET=cp_el_buckle1
 <cp_b_nd_id_buckle1>
**
*ELSET, ELSET=cp_b_els_noRC
 cp_b_els_sec_1
 cp_b_els_sec_2
 cp_b_els_sec_3
 cp_b_els_sec_4
 cp_b_els_sec_5
 cp_b_els_sec_6
 cp_b_els_sec_7
 cp_b_els_sec_8
 cp_b_els_sec_9
 cp_b_els_sec_10
 cp_b_els_sec_11
 cp_b_els_sec_12
 cp_b_els_sec_13
 cp_b_els_sec_14
 cp_b_els_sec_15
 cp_b_els_sec_16
 cp_b_els_sec_17
 cp_b_els_sec_18
 cp_b_els_sec_19
 cp_b_els_sec_20
**
**
** ****************************
** E - BEAM SECTION DEFINITION
** ****************************
**
** --- beam section definition of all elements
**
*BEAM SECTION, ELSET=cp_b_els, SECTION=THICK PIPE, POISSON=0.0, MATERIAL=<cp_material_name>, TEMPERATURE=GRADIENTS
 <cp_rad_out>, <cp_b_wt>
 0., 1., 0.
 <cp_b_nint_points_radial>, <cp_b_nint_points_circ>
**
** --- SURFACE DEFINITION
**
** --- beam contact surface
**
*SURFACE, TYPE=NODE, NAME=cp_b_cont
 cp_b_nds, 1.0
**
*SURFACE, TYPE=ELEMENT, NAME=cp_b_el_cont
 cp_b_els
**
*SURFACE, TYPE=ELEMENT, NAME=cp_b_el_cont_noRC
 cp_b_els_noRC
**
** --------------------------------------
** --- END OF CARRIER PIPE DEFINITION ---
** --------------------------------------
**
**
** -----------------------------------------------
** --- FLOWLINE DEFINITION [FULL BEAM SECTION] ---
** -----------------------------------------------
**
****PS
**
*PARAMETER
#
#
# --- MESH PROPERTY DEFINITION
#
#
# --- beam element rows
#
#
#
** *************************************
** A - ID's FOR BEAM NODES AND ELEMENTS
** *************************************
#
# --- NODE NUMBER DEFINITION
#
# --- beam element nodes
#
fl_b_nd_id_start       = 2000001
fl_b_id_row_inc        = 1
fl_b_nd_id_start_p1    = fl_b_nd_id_start + fl_b_id_row_inc
fl_b_nd_id_end         = fl_b_nd_id_start + fl_b_no_el_rows * fl_b_id_row_inc
fl_b_nd_id_end_m1      = fl_b_nd_id_end - fl_b_id_row_inc
fl_b_nd_id_end_m2      = fl_b_nd_id_end - 2 * fl_b_id_row_inc
#
**  fl_b_nd_id_mid         = fl_b_nd_id_start + fl_b_no_el_rows * fl_b_id_row_inc / 2
#
#
fl_b_nd_id_sec_1       = fl_b_nd_id_start
fl_b_nd_id_sec_2       = fl_b_nd_id_sec_1 + fl_b_no_el_rows_sec_1   * fl_b_id_row_inc
fl_b_nd_id_sec_3       = fl_b_nd_id_sec_2 + fl_b_no_el_rows_sec_2   * fl_b_id_row_inc
fl_b_nd_id_sec_4       = fl_b_nd_id_sec_3 + fl_b_no_el_rows_sec_3   * fl_b_id_row_inc
fl_b_nd_id_sec_5       = fl_b_nd_id_sec_4 + fl_b_no_el_rows_sec_4   * fl_b_id_row_inc
fl_b_nd_id_sec_6       = fl_b_nd_id_sec_5 + fl_b_no_el_rows_sec_5   * fl_b_id_row_inc
fl_b_nd_id_sec_7       = fl_b_nd_id_sec_6 + fl_b_no_el_rows_sec_6   * fl_b_id_row_inc
fl_b_nd_id_sec_8       = fl_b_nd_id_sec_7 + fl_b_no_el_rows_sec_7   * fl_b_id_row_inc
fl_b_nd_id_sec_9       = fl_b_nd_id_sec_8 + fl_b_no_el_rows_sec_8   * fl_b_id_row_inc
fl_b_nd_id_sec_10      = fl_b_nd_id_sec_9 + fl_b_no_el_rows_sec_9   * fl_b_id_row_inc
fl_b_nd_id_sec_11      = fl_b_nd_id_sec_10 + fl_b_no_el_rows_sec_10 * fl_b_id_row_inc
fl_b_nd_id_sec_12      = fl_b_nd_id_sec_11 + fl_b_no_el_rows_sec_11 * fl_b_id_row_inc
fl_b_nd_id_sec_13      = fl_b_nd_id_sec_12 + fl_b_no_el_rows_sec_12 * fl_b_id_row_inc
fl_b_nd_id_sec_14      = fl_b_nd_id_sec_13 + fl_b_no_el_rows_sec_13 * fl_b_id_row_inc
fl_b_nd_id_sec_15      = fl_b_nd_id_sec_14 + fl_b_no_el_rows_sec_14 * fl_b_id_row_inc
fl_b_nd_id_sec_16      = fl_b_nd_id_sec_15 + fl_b_no_el_rows_sec_15 * fl_b_id_row_inc
fl_b_nd_id_sec_17      = fl_b_nd_id_sec_16 + fl_b_no_el_rows_sec_16 * fl_b_id_row_inc
fl_b_nd_id_sec_18      = fl_b_nd_id_sec_17 + fl_b_no_el_rows_sec_17 * fl_b_id_row_inc
fl_b_nd_id_sec_19      = fl_b_nd_id_sec_18 + fl_b_no_el_rows_sec_18 * fl_b_id_row_inc
fl_b_nd_id_sec_20      = fl_b_nd_id_sec_19 + fl_b_no_el_rows_sec_19 * fl_b_id_row_inc
#
fl_b_nd_id_sec_1_p1    = fl_b_nd_id_sec_1 + 1
fl_b_nd_id_sec_2_p1    = fl_b_nd_id_sec_2 + 1
fl_b_nd_id_sec_3_p1    = fl_b_nd_id_sec_3 + 1
fl_b_nd_id_sec_4_p1    = fl_b_nd_id_sec_4 + 1
fl_b_nd_id_sec_5_p1    = fl_b_nd_id_sec_5 + 1
fl_b_nd_id_sec_6_p1    = fl_b_nd_id_sec_6 + 1
fl_b_nd_id_sec_7_p1    = fl_b_nd_id_sec_7 + 1
fl_b_nd_id_sec_8_p1    = fl_b_nd_id_sec_8 + 1
fl_b_nd_id_sec_9_p1    = fl_b_nd_id_sec_9 + 1
fl_b_nd_id_sec_10_p1   = fl_b_nd_id_sec_10 + 1
fl_b_nd_id_sec_11_p1   = fl_b_nd_id_sec_11 + 1
fl_b_nd_id_sec_12_p1   = fl_b_nd_id_sec_12 + 1
fl_b_nd_id_sec_13_p1   = fl_b_nd_id_sec_13 + 1
fl_b_nd_id_sec_14_p1   = fl_b_nd_id_sec_14 + 1
fl_b_nd_id_sec_15_p1   = fl_b_nd_id_sec_15 + 1
fl_b_nd_id_sec_16_p1   = fl_b_nd_id_sec_16 + 1
fl_b_nd_id_sec_17_p1   = fl_b_nd_id_sec_17 + 1
fl_b_nd_id_sec_18_p1   = fl_b_nd_id_sec_18 + 1
fl_b_nd_id_sec_19_p1   = fl_b_nd_id_sec_19 + 1
fl_b_nd_id_sec_20_p1   = fl_b_nd_id_sec_20 + 1
#
#
# DEFINE PULLOVER AND BUCKLE NODES
** MGa: Pullover node, needs to be defined in accordance with requirements
** in a VAS model can be the same as the buckle or somewhere else, e.g. at Buckle
fl_b_nd_id_mid         = fl_b_nd_id_sec_11
fl_b_nd_id_pullover    = fl_b_nd_id_mid     
fl_b_nd_id_buckle1     = fl_b_nd_id_mid
**
# --- ELEMENT NUMBER DEFINITION
#
# --- beam elements
#
fl_b_el_id_start       = 2000001
fl_b_el_id_end         = fl_b_el_id_start + fl_b_no_el_rows * fl_b_id_row_inc - 1
fl_b_el_id_mid_left    = fl_b_el_id_start + fl_b_no_el_rows * fl_b_id_row_inc / 2.0 - 1
fl_b_el_id_mid_right   = fl_b_el_id_start + fl_b_no_el_rows * fl_b_id_row_inc / 2.0
#
fl_b_el_id_sec_1       = fl_b_el_id_start
fl_b_el_id_sec_2       = fl_b_el_id_sec_1 + fl_b_no_el_rows_sec_1   * fl_b_id_row_inc
fl_b_el_id_sec_3       = fl_b_el_id_sec_2 + fl_b_no_el_rows_sec_2   * fl_b_id_row_inc
fl_b_el_id_sec_4       = fl_b_el_id_sec_3 + fl_b_no_el_rows_sec_3   * fl_b_id_row_inc
fl_b_el_id_sec_5       = fl_b_el_id_sec_4 + fl_b_no_el_rows_sec_4   * fl_b_id_row_inc
fl_b_el_id_sec_6       = fl_b_el_id_sec_5 + fl_b_no_el_rows_sec_5   * fl_b_id_row_inc
fl_b_el_id_sec_7       = fl_b_el_id_sec_6 + fl_b_no_el_rows_sec_6   * fl_b_id_row_inc
fl_b_el_id_sec_8       = fl_b_el_id_sec_7 + fl_b_no_el_rows_sec_7   * fl_b_id_row_inc
fl_b_el_id_sec_9       = fl_b_el_id_sec_8 + fl_b_no_el_rows_sec_8   * fl_b_id_row_inc
fl_b_el_id_sec_10      = fl_b_el_id_sec_9 + fl_b_no_el_rows_sec_9   * fl_b_id_row_inc
fl_b_el_id_sec_11      = fl_b_el_id_sec_10 + fl_b_no_el_rows_sec_10 * fl_b_id_row_inc
fl_b_el_id_sec_12      = fl_b_el_id_sec_11 + fl_b_no_el_rows_sec_11 * fl_b_id_row_inc
fl_b_el_id_sec_13      = fl_b_el_id_sec_12 + fl_b_no_el_rows_sec_12 * fl_b_id_row_inc
fl_b_el_id_sec_14      = fl_b_el_id_sec_13 + fl_b_no_el_rows_sec_13 * fl_b_id_row_inc
fl_b_el_id_sec_15      = fl_b_el_id_sec_14 + fl_b_no_el_rows_sec_14 * fl_b_id_row_inc
fl_b_el_id_sec_16      = fl_b_el_id_sec_15 + fl_b_no_el_rows_sec_15 * fl_b_id_row_inc
fl_b_el_id_sec_17      = fl_b_el_id_sec_16 + fl_b_no_el_rows_sec_16 * fl_b_id_row_inc
fl_b_el_id_sec_18      = fl_b_el_id_sec_17 + fl_b_no_el_rows_sec_17 * fl_b_id_row_inc
fl_b_el_id_sec_19      = fl_b_el_id_sec_18 + fl_b_no_el_rows_sec_18 * fl_b_id_row_inc
fl_b_el_id_sec_20      = fl_b_el_id_sec_19 + fl_b_no_el_rows_sec_19 * fl_b_id_row_inc
#
# --- beam elements for liner
#
li_b_el_id_start       = 3000001
li_b_el_id_end		=fl_b_el_id_end+  1000000     
li_b_el_id_mid_left    =  fl_b_el_id_mid_left +1000000  
li_b_el_id_mid_right   =  fl_b_el_id_mid_right +1000000
#			  #
li_b_el_id_sec_1       =  fl_b_el_id_sec_1  +1000000   
li_b_el_id_sec_2       =  fl_b_el_id_sec_2  +1000000  
li_b_el_id_sec_3       =  fl_b_el_id_sec_3  +1000000  
li_b_el_id_sec_4       =  fl_b_el_id_sec_4  +1000000  
li_b_el_id_sec_5       =  fl_b_el_id_sec_5  +1000000  
li_b_el_id_sec_6       =  fl_b_el_id_sec_6  +1000000  
li_b_el_id_sec_7       =  fl_b_el_id_sec_7  +1000000  
li_b_el_id_sec_8       =  fl_b_el_id_sec_8  +1000000   
li_b_el_id_sec_9       =  fl_b_el_id_sec_9  +1000000  
li_b_el_id_sec_10      =  fl_b_el_id_sec_10 +1000000  
li_b_el_id_sec_11      =  fl_b_el_id_sec_11 +1000000  
li_b_el_id_sec_12      =  fl_b_el_id_sec_12 +1000000  
li_b_el_id_sec_13      =  fl_b_el_id_sec_13 +1000000  
li_b_el_id_sec_14      =  fl_b_el_id_sec_14 +1000000  
li_b_el_id_sec_15      =  fl_b_el_id_sec_15 +1000000 
li_b_el_id_sec_16      =  fl_b_el_id_sec_16 +1000000  
li_b_el_id_sec_17      =  fl_b_el_id_sec_17 +1000000  
li_b_el_id_sec_18      =  fl_b_el_id_sec_18 +1000000   
li_b_el_id_sec_19      =  fl_b_el_id_sec_19 +1000000  
li_b_el_id_sec_20      =  fl_b_el_id_sec_20 +1000000  
#
** *******************************
** B - POSITIONS ALONG THE PIPE
** *******************************
**
fl_b_start_x       = cp_b_start_x
**
fl_POS_1    = fl_b_start_x
fl_POS_2    = fl_POS_1      + fl_b_sec_1_len
fl_POS_3    = fl_POS_2      + fl_b_sec_2_len
fl_POS_4    = fl_POS_3      + fl_b_sec_3_len
fl_POS_5    = fl_POS_4      + fl_b_sec_4_len
fl_POS_6    = fl_POS_5      + fl_b_sec_5_len
fl_POS_7    = fl_POS_6      + fl_b_sec_6_len
fl_POS_8    = fl_POS_7      + fl_b_sec_7_len
fl_POS_9    = fl_POS_8      + fl_b_sec_8_len
fl_POS_10   = fl_POS_9      + fl_b_sec_9_len
fl_POS_11   = fl_POS_10     + fl_b_sec_10_len
fl_POS_12   = fl_POS_11     + fl_b_sec_11_len
fl_POS_13   = fl_POS_12     + fl_b_sec_12_len
fl_POS_14   = fl_POS_13     + fl_b_sec_13_len
fl_POS_15   = fl_POS_14     + fl_b_sec_14_len
fl_POS_16   = fl_POS_15     + fl_b_sec_15_len
fl_POS_17   = fl_POS_16     + fl_b_sec_16_len
fl_POS_18   = fl_POS_17     + fl_b_sec_17_len
fl_POS_19   = fl_POS_18     + fl_b_sec_18_len
fl_POS_20   = fl_POS_19     + fl_b_sec_19_len
**
fl_b_end_x       = fl_b_start_x + fl_b_len
**
**
****PE
**
** **********************
** C1 - NODE DEFINITION
** **********************
**
** --- Beam Mesh
**
** Generate nodes at the start of each section
**
*NODE, NSET=fl_b_nds_sec_1
 <fl_b_nd_id_sec_1>,  <fl_POS_1>,    0., <fl_b_z>
*NODE, NSET=fl_b_nds_sec_2
 <fl_b_nd_id_sec_2>,  <fl_POS_2>,    0., <fl_b_z>
*NODE, NSET=fl_b_nds_sec_3
 <fl_b_nd_id_sec_3>,  <fl_POS_3>,    0., <fl_b_z>
*NODE, NSET=fl_b_nds_sec_4
 <fl_b_nd_id_sec_4>,  <fl_POS_4>,    0., <fl_b_z>
*NODE, NSET=fl_b_nds_sec_5
 <fl_b_nd_id_sec_5>,  <fl_POS_5>,    0., <fl_b_z>
*NODE, NSET=fl_b_nds_sec_6
 <fl_b_nd_id_sec_6>,  <fl_POS_6>,    0., <fl_b_z>
*NODE, NSET=fl_b_nds_sec_7
 <fl_b_nd_id_sec_7>,  <fl_POS_7>,    0., <fl_b_z>
*NODE, NSET=fl_b_nds_sec_8
 <fl_b_nd_id_sec_8>,  <fl_POS_8>,    0., <fl_b_z>
*NODE, NSET=fl_b_nds_sec_9
 <fl_b_nd_id_sec_9>,  <fl_POS_9>,    0., <fl_b_z>
*NODE, NSET=fl_b_nds_sec_10
 <fl_b_nd_id_sec_10>, <fl_POS_10>,   0., <fl_b_z>
*NODE, NSET=fl_b_nds_sec_11
 <fl_b_nd_id_sec_11>, <fl_POS_11>,   0., <fl_b_z>
*NODE, NSET=fl_b_nds_sec_12
 <fl_b_nd_id_sec_12>, <fl_POS_12>,   0., <fl_b_z>
*NODE, NSET=fl_b_nds_sec_13
 <fl_b_nd_id_sec_13>, <fl_POS_13>,   0., <fl_b_z>
*NODE, NSET=fl_b_nds_sec_14
 <fl_b_nd_id_sec_14>, <fl_POS_14>,   0., <fl_b_z>
*NODE, NSET=fl_b_nds_sec_15
 <fl_b_nd_id_sec_15>, <fl_POS_15>,   0., <fl_b_z>
*NODE, NSET=fl_b_nds_sec_16
 <fl_b_nd_id_sec_16>, <fl_POS_16>,   0., <fl_b_z>
*NODE, NSET=fl_b_nds_sec_17
 <fl_b_nd_id_sec_17>, <fl_POS_17>,   0., <fl_b_z>
*NODE, NSET=fl_b_nds_sec_18
 <fl_b_nd_id_sec_18>, <fl_POS_18>,   0., <fl_b_z>
*NODE, NSET=fl_b_nds_sec_19
 <fl_b_nd_id_sec_19>, <fl_POS_19>,   0., <fl_b_z>
*NODE, NSET=fl_b_nds_sec_20
 <fl_b_nd_id_sec_20>, <fl_POS_20>,   0., <fl_b_z>
*NODE, NSET=fl_b_nds_end
 <fl_b_nd_id_end>,    <fl_b_end_x>,  0., <fl_b_z>
**
** Fill the nodes in each section
**
*NFILL, NSET=fl_b_nds_sec_1, BIAS=<fl_b_bias_sec_1>
 fl_b_nds_sec_1, fl_b_nds_sec_2, <fl_b_no_el_rows_sec_1>, <fl_b_id_row_inc>
*NFILL, NSET=fl_b_nds_sec_2, BIAS=<fl_b_bias_sec_2>
 fl_b_nds_sec_2, fl_b_nds_sec_3, <fl_b_no_el_rows_sec_2>, <fl_b_id_row_inc>
*NFILL, NSET=fl_b_nds_sec_3, BIAS=<fl_b_bias_sec_3>
 fl_b_nds_sec_3, fl_b_nds_sec_4, <fl_b_no_el_rows_sec_3>, <fl_b_id_row_inc>
*NFILL, NSET=fl_b_nds_sec_4, BIAS=<fl_b_bias_sec_4>
 fl_b_nds_sec_4, fl_b_nds_sec_5, <fl_b_no_el_rows_sec_4>, <fl_b_id_row_inc>
*NFILL, NSET=fl_b_nds_sec_5, BIAS=<fl_b_bias_sec_5>
 fl_b_nds_sec_5, fl_b_nds_sec_6, <fl_b_no_el_rows_sec_5>, <fl_b_id_row_inc>
*NFILL, NSET=fl_b_nds_sec_6, BIAS=<fl_b_bias_sec_6>
 fl_b_nds_sec_6, fl_b_nds_sec_7, <fl_b_no_el_rows_sec_6>, <fl_b_id_row_inc>
*NFILL, NSET=fl_b_nds_sec_7, BIAS=<fl_b_bias_sec_7>
 fl_b_nds_sec_7, fl_b_nds_sec_8, <fl_b_no_el_rows_sec_7>, <fl_b_id_row_inc>
*NFILL, NSET=fl_b_nds_sec_8, BIAS=<fl_b_bias_sec_8>
 fl_b_nds_sec_8, fl_b_nds_sec_9, <fl_b_no_el_rows_sec_8>, <fl_b_id_row_inc>
*NFILL, NSET=fl_b_nds_sec_9, BIAS=<fl_b_bias_sec_9>
 fl_b_nds_sec_9, fl_b_nds_sec_10, <fl_b_no_el_rows_sec_9>, <fl_b_id_row_inc>
*NFILL, NSET=fl_b_nds_sec_10, BIAS=<fl_b_bias_sec_10>
 fl_b_nds_sec_10, fl_b_nds_sec_11, <fl_b_no_el_rows_sec_10>, <fl_b_id_row_inc>
*NFILL, NSET=fl_b_nds_sec_11, BIAS=<fl_b_bias_sec_11>
 fl_b_nds_sec_11, fl_b_nds_sec_12, <fl_b_no_el_rows_sec_11>, <fl_b_id_row_inc>
*NFILL, NSET=fl_b_nds_sec_12, BIAS=<fl_b_bias_sec_12>
 fl_b_nds_sec_12, fl_b_nds_sec_13, <fl_b_no_el_rows_sec_12>, <fl_b_id_row_inc>
*NFILL, NSET=fl_b_nds_sec_13, BIAS=<fl_b_bias_sec_13>
 fl_b_nds_sec_13, fl_b_nds_sec_14, <fl_b_no_el_rows_sec_13>, <fl_b_id_row_inc>
*NFILL, NSET=fl_b_nds_sec_14, BIAS=<fl_b_bias_sec_14>
 fl_b_nds_sec_14, fl_b_nds_sec_15, <fl_b_no_el_rows_sec_14>, <fl_b_id_row_inc>
*NFILL, NSET=fl_b_nds_sec_15, BIAS=<fl_b_bias_sec_15>
 fl_b_nds_sec_15, fl_b_nds_sec_16, <fl_b_no_el_rows_sec_15>, <fl_b_id_row_inc>
*NFILL, NSET=fl_b_nds_sec_16, BIAS=<fl_b_bias_sec_16>
 fl_b_nds_sec_16, fl_b_nds_sec_17, <fl_b_no_el_rows_sec_16>, <fl_b_id_row_inc>
*NFILL, NSET=fl_b_nds_sec_17, BIAS=<fl_b_bias_sec_17>
 fl_b_nds_sec_17, fl_b_nds_sec_18, <fl_b_no_el_rows_sec_17>, <fl_b_id_row_inc>
*NFILL, NSET=fl_b_nds_sec_18, BIAS=<fl_b_bias_sec_18>
 fl_b_nds_sec_18, fl_b_nds_sec_19, <fl_b_no_el_rows_sec_18>, <fl_b_id_row_inc>
*NFILL, NSET=fl_b_nds_sec_19, BIAS=<fl_b_bias_sec_19>
 fl_b_nds_sec_19, fl_b_nds_sec_20, <fl_b_no_el_rows_sec_19>, <fl_b_id_row_inc>
*NFILL, NSET=fl_b_nds_sec_20, BIAS=<fl_b_bias_sec_20>
 fl_b_nds_sec_20, fl_b_nds_end,    <fl_b_no_el_rows_sec_20>, <fl_b_id_row_inc>
**
**
** ***********************
** C2 - CREATE NODE SETS
** ***********************
**
**
** --- all beam nodes
**
*NSET, NSET=fl_b_nds, GENERATE
 <fl_b_nd_id_start>, <fl_b_nd_id_end>, 1
**
** --- al beam nodes except end node
**
*NSET, NSET=fl_b_nds_m1, GENERATE
 <fl_b_nd_id_start>, <fl_b_nd_id_end_m1>, 1
**
**
** --- create sets for 1st and last nodes to use in restarts
**
*NSET, NSET=fl_b_nd_start
 <fl_b_nd_id_start>
**
*NSET, NSET=fl_b_nd_end
 <fl_b_nd_id_end>
**
** --- create buckle and pullover node sets for restarts
**
*NSET, NSET=fl_b_nd_buckle1
 <fl_b_nd_id_buckle1>
**
*NSET, NSET=fl_b_nd_pullover
 <fl_b_nd_id_pullover> 
**
*NSET, NSET=fl_b_nd_id_mid
<fl_b_nd_id_mid>
**
** *************************
** D1 - ELEMENT DEFINITION
** *************************
**
** --- Beam elements
**
*ELEMENT, TYPE=PIPE31H
 <fl_b_el_id_sec_1>,  <fl_b_nd_id_sec_1>,  <fl_b_nd_id_sec_1_p1>
 <fl_b_el_id_sec_2>,  <fl_b_nd_id_sec_2>,  <fl_b_nd_id_sec_2_p1>
 <fl_b_el_id_sec_3>,  <fl_b_nd_id_sec_3>,  <fl_b_nd_id_sec_3_p1>
 <fl_b_el_id_sec_4>,  <fl_b_nd_id_sec_4>,  <fl_b_nd_id_sec_4_p1>
 <fl_b_el_id_sec_5>,  <fl_b_nd_id_sec_5>,  <fl_b_nd_id_sec_5_p1>
 <fl_b_el_id_sec_6>,  <fl_b_nd_id_sec_6>,  <fl_b_nd_id_sec_6_p1>
 <fl_b_el_id_sec_7>,  <fl_b_nd_id_sec_7>,  <fl_b_nd_id_sec_7_p1> 
 <fl_b_el_id_sec_8>,  <fl_b_nd_id_sec_8>,  <fl_b_nd_id_sec_8_p1> 
 <fl_b_el_id_sec_9>,  <fl_b_nd_id_sec_9>,  <fl_b_nd_id_sec_9_p1>
 <fl_b_el_id_sec_10>,  <fl_b_nd_id_sec_10>, <fl_b_nd_id_sec_10_p1>
 <fl_b_el_id_sec_11>,  <fl_b_nd_id_sec_11>, <fl_b_nd_id_sec_11_p1>
 <fl_b_el_id_sec_12>,  <fl_b_nd_id_sec_12>, <fl_b_nd_id_sec_12_p1>
 <fl_b_el_id_sec_13>,  <fl_b_nd_id_sec_13>, <fl_b_nd_id_sec_13_p1>
 <fl_b_el_id_sec_14>,  <fl_b_nd_id_sec_14>, <fl_b_nd_id_sec_14_p1>
 <fl_b_el_id_sec_15>,  <fl_b_nd_id_sec_15>, <fl_b_nd_id_sec_15_p1>
 <fl_b_el_id_sec_16>,  <fl_b_nd_id_sec_16>, <fl_b_nd_id_sec_16_p1>
 <fl_b_el_id_sec_17>,  <fl_b_nd_id_sec_17>, <fl_b_nd_id_sec_17_p1>
 <fl_b_el_id_sec_18>,  <fl_b_nd_id_sec_18>, <fl_b_nd_id_sec_18_p1>
 <fl_b_el_id_sec_19>,  <fl_b_nd_id_sec_19>, <fl_b_nd_id_sec_19_p1>
 <fl_b_el_id_sec_20>,  <fl_b_nd_id_sec_20>, <fl_b_nd_id_sec_20_p1>
**
*ELGEN, ELSET=fl_b_els_sec_1
 <fl_b_el_id_sec_1>,  <fl_b_no_el_rows_sec_1>, <fl_b_id_row_inc>, <fl_b_id_row_inc>
*ELGEN, ELSET=fl_b_els_sec_2
 <fl_b_el_id_sec_2>,  <fl_b_no_el_rows_sec_2>, <fl_b_id_row_inc>, <fl_b_id_row_inc>
*ELGEN, ELSET=fl_b_els_sec_3
 <fl_b_el_id_sec_3>,  <fl_b_no_el_rows_sec_3>, <fl_b_id_row_inc>, <fl_b_id_row_inc>
*ELGEN, ELSET=fl_b_els_sec_4
 <fl_b_el_id_sec_4>,  <fl_b_no_el_rows_sec_4>, <fl_b_id_row_inc>, <fl_b_id_row_inc>
*ELGEN, ELSET=fl_b_els_sec_5
 <fl_b_el_id_sec_5>,  <fl_b_no_el_rows_sec_5>, <fl_b_id_row_inc>, <fl_b_id_row_inc>
*ELGEN, ELSET=fl_b_els_sec_6
 <fl_b_el_id_sec_6>,  <fl_b_no_el_rows_sec_6>, <fl_b_id_row_inc>, <fl_b_id_row_inc>
*ELGEN, ELSET=fl_b_els_sec_7
 <fl_b_el_id_sec_7>,  <fl_b_no_el_rows_sec_7>, <fl_b_id_row_inc>, <fl_b_id_row_inc>
*ELGEN, ELSET=fl_b_els_sec_8
 <fl_b_el_id_sec_8>,  <fl_b_no_el_rows_sec_8>, <fl_b_id_row_inc>, <fl_b_id_row_inc>
*ELGEN, ELSET=fl_b_els_sec_9
 <fl_b_el_id_sec_9>,  <fl_b_no_el_rows_sec_9>, <fl_b_id_row_inc>, <fl_b_id_row_inc>
*ELGEN, ELSET=fl_b_els_sec_10
 <fl_b_el_id_sec_10>,  <fl_b_no_el_rows_sec_10>, <fl_b_id_row_inc>, <fl_b_id_row_inc>
*ELGEN, ELSET=fl_b_els_sec_11
 <fl_b_el_id_sec_11>,  <fl_b_no_el_rows_sec_11>, <fl_b_id_row_inc>, <fl_b_id_row_inc>
*ELGEN, ELSET=fl_b_els_sec_12
 <fl_b_el_id_sec_12>,  <fl_b_no_el_rows_sec_12>, <fl_b_id_row_inc>, <fl_b_id_row_inc>
*ELGEN, ELSET=fl_b_els_sec_13
 <fl_b_el_id_sec_13>,  <fl_b_no_el_rows_sec_13>, <fl_b_id_row_inc>, <fl_b_id_row_inc>
*ELGEN, ELSET=fl_b_els_sec_14
 <fl_b_el_id_sec_14>,  <fl_b_no_el_rows_sec_14>, <fl_b_id_row_inc>, <fl_b_id_row_inc>
*ELGEN, ELSET=fl_b_els_sec_15
 <fl_b_el_id_sec_15>,  <fl_b_no_el_rows_sec_15>, <fl_b_id_row_inc>, <fl_b_id_row_inc>
*ELGEN, ELSET=fl_b_els_sec_16
 <fl_b_el_id_sec_16>,  <fl_b_no_el_rows_sec_16>, <fl_b_id_row_inc>, <fl_b_id_row_inc>
*ELGEN, ELSET=fl_b_els_sec_17
 <fl_b_el_id_sec_17>,  <fl_b_no_el_rows_sec_17>, <fl_b_id_row_inc>, <fl_b_id_row_inc>
*ELGEN, ELSET=fl_b_els_sec_18
 <fl_b_el_id_sec_18>,  <fl_b_no_el_rows_sec_18>, <fl_b_id_row_inc>, <fl_b_id_row_inc>
*ELGEN, ELSET=fl_b_els_sec_19
 <fl_b_el_id_sec_19>,  <fl_b_no_el_rows_sec_19>, <fl_b_id_row_inc>, <fl_b_id_row_inc>
*ELGEN, ELSET=fl_b_els_sec_20
 <fl_b_el_id_sec_20>,  <fl_b_no_el_rows_sec_20>, <fl_b_id_row_inc>, <fl_b_id_row_inc>
**
**
** *************************
** D2 - CREATE ELEMENT SETS
** *************************
**
** --- all pipe beam elements
**
*ELSET, ELSET=fl_b_els, GENERATE
 <fl_b_el_id_start>, <fl_b_el_id_end>, 1
**
*ELSET, ELSET=fl_b_els_buckle, GENERATE
 <fl_b_el_id_sec_7>, <fl_b_el_id_sec_15>, 1
*ELSET, ELSET=fl_els
 fl_b_els
**
*ELSET, ELSET=fl_el_buckle1
 <fl_b_nd_id_buckle1>
**
** ****************************
** E - BEAM SECTION DEFINITION
** ****************************
**
** --- beam section definition of all elements
**
*BEAM SECTION, ELSET=fl_b_els, SECTION=THICK PIPE, POISSON=0.0, MATERIAL=<fl_material_name>, TEMPERATURE=GRADIENTS
 <fl_rad_out>, <fl_b_wt>
 0., 1., 0.
 <fl_b_nint_points_radial>, <fl_b_nint_points_circ>
**
** --- SURFACE DEFINITION
**
** --- beam contact surface
**
*SURFACE, TYPE=NODE, NAME=fl_b_cont
 fl_b_nds, 1.0
**
*SURFACE, TYPE=ELEMENT, NAME=fl_b_el_cont
 fl_b_els
**
** --------------------------------------
** --- END OF FLOWLINE DEFINITION ---
** --------------------------------------
**
** *************************
** D1 - ELEMENT DEFINITION for LINER
** *************************
**
** --- Beam elements
**
*ELEMENT, TYPE=PIPE31H
 <li_b_el_id_sec_1>,  <fl_b_nd_id_sec_1>,  <fl_b_nd_id_sec_1_p1>
 <li_b_el_id_sec_2>,  <fl_b_nd_id_sec_2>,  <fl_b_nd_id_sec_2_p1>
 <li_b_el_id_sec_3>,  <fl_b_nd_id_sec_3>,  <fl_b_nd_id_sec_3_p1>
 <li_b_el_id_sec_4>,  <fl_b_nd_id_sec_4>,  <fl_b_nd_id_sec_4_p1>
 <li_b_el_id_sec_5>,  <fl_b_nd_id_sec_5>,  <fl_b_nd_id_sec_5_p1>
 <li_b_el_id_sec_6>,  <fl_b_nd_id_sec_6>,  <fl_b_nd_id_sec_6_p1>
 <li_b_el_id_sec_7>,  <fl_b_nd_id_sec_7>,  <fl_b_nd_id_sec_7_p1> 
 <li_b_el_id_sec_8>,  <fl_b_nd_id_sec_8>,  <fl_b_nd_id_sec_8_p1> 
 <li_b_el_id_sec_9>,  <fl_b_nd_id_sec_9>,  <fl_b_nd_id_sec_9_p1>
 <li_b_el_id_sec_10>,  <fl_b_nd_id_sec_10>, <fl_b_nd_id_sec_10_p1>
 <li_b_el_id_sec_11>,  <fl_b_nd_id_sec_11>, <fl_b_nd_id_sec_11_p1>
 <li_b_el_id_sec_12>,  <fl_b_nd_id_sec_12>, <fl_b_nd_id_sec_12_p1>
 <li_b_el_id_sec_13>,  <fl_b_nd_id_sec_13>, <fl_b_nd_id_sec_13_p1>
 <li_b_el_id_sec_14>,  <fl_b_nd_id_sec_14>, <fl_b_nd_id_sec_14_p1>
 <li_b_el_id_sec_15>,  <fl_b_nd_id_sec_15>, <fl_b_nd_id_sec_15_p1>
 <li_b_el_id_sec_16>,  <fl_b_nd_id_sec_16>, <fl_b_nd_id_sec_16_p1>
 <li_b_el_id_sec_17>,  <fl_b_nd_id_sec_17>, <fl_b_nd_id_sec_17_p1>
 <li_b_el_id_sec_18>,  <fl_b_nd_id_sec_18>, <fl_b_nd_id_sec_18_p1>
 <li_b_el_id_sec_19>,  <fl_b_nd_id_sec_19>, <fl_b_nd_id_sec_19_p1>
 <li_b_el_id_sec_20>,  <fl_b_nd_id_sec_20>, <fl_b_nd_id_sec_20_p1>
**
*ELGEN, ELSET=li_b_els_sec_1
 <li_b_el_id_sec_1>,  <fl_b_no_el_rows_sec_1>, <fl_b_id_row_inc>, <fl_b_id_row_inc>
*ELGEN, ELSET=li_b_els_sec_2
 <li_b_el_id_sec_2>,  <fl_b_no_el_rows_sec_2>, <fl_b_id_row_inc>, <fl_b_id_row_inc>
*ELGEN, ELSET=li_b_els_sec_3
 <li_b_el_id_sec_3>,  <fl_b_no_el_rows_sec_3>, <fl_b_id_row_inc>, <fl_b_id_row_inc>
*ELGEN, ELSET=li_b_els_sec_4
 <li_b_el_id_sec_4>,  <fl_b_no_el_rows_sec_4>, <fl_b_id_row_inc>, <fl_b_id_row_inc>
*ELGEN, ELSET=li_b_els_sec_5
 <li_b_el_id_sec_5>,  <fl_b_no_el_rows_sec_5>, <fl_b_id_row_inc>, <fl_b_id_row_inc>
*ELGEN, ELSET=li_b_els_sec_6
 <li_b_el_id_sec_6>,  <fl_b_no_el_rows_sec_6>, <fl_b_id_row_inc>, <fl_b_id_row_inc>
*ELGEN, ELSET=li_b_els_sec_7
 <li_b_el_id_sec_7>,  <fl_b_no_el_rows_sec_7>, <fl_b_id_row_inc>, <fl_b_id_row_inc>
*ELGEN, ELSET=li_b_els_sec_8
 <li_b_el_id_sec_8>,  <fl_b_no_el_rows_sec_8>, <fl_b_id_row_inc>, <fl_b_id_row_inc>
*ELGEN, ELSET=li_b_els_sec_9
 <li_b_el_id_sec_9>,  <fl_b_no_el_rows_sec_9>, <fl_b_id_row_inc>, <fl_b_id_row_inc>
*ELGEN, ELSET=li_b_els_sec_10
 <li_b_el_id_sec_10>,  <fl_b_no_el_rows_sec_10>, <fl_b_id_row_inc>, <fl_b_id_row_inc>
*ELGEN, ELSET=li_b_els_sec_11
 <li_b_el_id_sec_11>,  <fl_b_no_el_rows_sec_11>, <fl_b_id_row_inc>, <fl_b_id_row_inc>
*ELGEN, ELSET=li_b_els_sec_12
 <li_b_el_id_sec_12>,  <fl_b_no_el_rows_sec_12>, <fl_b_id_row_inc>, <fl_b_id_row_inc>
*ELGEN, ELSET=li_b_els_sec_13
 <li_b_el_id_sec_13>,  <fl_b_no_el_rows_sec_13>, <fl_b_id_row_inc>, <fl_b_id_row_inc>
*ELGEN, ELSET=li_b_els_sec_14
 <li_b_el_id_sec_14>,  <fl_b_no_el_rows_sec_14>, <fl_b_id_row_inc>, <fl_b_id_row_inc>
*ELGEN, ELSET=li_b_els_sec_15
 <li_b_el_id_sec_15>,  <fl_b_no_el_rows_sec_15>, <fl_b_id_row_inc>, <fl_b_id_row_inc>
*ELGEN, ELSET=li_b_els_sec_16
 <li_b_el_id_sec_16>,  <fl_b_no_el_rows_sec_16>, <fl_b_id_row_inc>, <fl_b_id_row_inc>
*ELGEN, ELSET=li_b_els_sec_17
 <li_b_el_id_sec_17>,  <fl_b_no_el_rows_sec_17>, <fl_b_id_row_inc>, <fl_b_id_row_inc>
*ELGEN, ELSET=li_b_els_sec_18
 <li_b_el_id_sec_18>,  <fl_b_no_el_rows_sec_18>, <fl_b_id_row_inc>, <fl_b_id_row_inc>
*ELGEN, ELSET=li_b_els_sec_19
 <li_b_el_id_sec_19>,  <fl_b_no_el_rows_sec_19>, <fl_b_id_row_inc>, <fl_b_id_row_inc>
*ELGEN, ELSET=li_b_els_sec_20
 <li_b_el_id_sec_20>,  <fl_b_no_el_rows_sec_20>, <fl_b_id_row_inc>, <fl_b_id_row_inc>
**
**
** *************************
** D2 - CREATE ELEMENT SETS
** *************************
**
** --- all pipe beam elements
**
*ELSET, ELSET=li_b_els, GENERATE
 <li_b_el_id_start>, <li_b_el_id_end>, 1
**
*ELSET, ELSET=li_b_els_buckle, GENERATE
 <li_b_el_id_sec_7>, <li_b_el_id_sec_15>, 1
*ELSET, ELSET=li_els
 li_b_els
**
**
** ****************************
** E - BEAM SECTION DEFINITION
** ****************************
**
** --- beam section definition of all elements
**
*BEAM SECTION, ELSET=li_b_els, SECTION=THICK PIPE, POISSON=0.0, MATERIAL=<li_material_name>, TEMPERATURE=GRADIENTS
 <li_rad_out>, <li_b_wt>
 0., 1., 0.
 <fl_b_nint_points_radial>, <fl_b_nint_points_circ>
**
** --------------------------------------
** --- END OF LINER DEFINITION ---
** --------------------------------------
**
**
*ELSET, ELSET=pip_b_els
 cp_b_els,
 fl_b_els,
 li_b_els
**
** Additional download
*Nonstructural mass, elset=cp_b_els, units=mass per length
<cp_addition_weight>
**
** Additional download
*Nonstructural mass, elset=fl_b_els, units=mass per length
<fl_addition_weight>
**
** ----------------------------------------
** --- END OF PIP BEAM MODEL DEFINITION ---
** ----------------------------------------
**