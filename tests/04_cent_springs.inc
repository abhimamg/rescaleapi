**   Version: v3c-beam-PIP-LB
**
****PS
**
*PARAMETER
**
** *************************************
** D1 - ID's FOR ITT NODES AND ELEMENTS
** *************************************
**
#
#
#itt_gap                = cent_gap
#itt_friction           = cent_friction
itt_slideline_len_half =   1
itt_el_id_start        = 3000001
#
itt_el_id_sec_inc      = 10000
#
itt_el_id_start_sec_1  = itt_el_id_start + 1 * itt_el_id_sec_inc
itt_el_id_start_sec_2  = itt_el_id_start + 2 * itt_el_id_sec_inc
itt_el_id_start_sec_3  = itt_el_id_start + 3 * itt_el_id_sec_inc
itt_el_id_start_sec_4  = itt_el_id_start + 4 * itt_el_id_sec_inc
itt_el_id_start_sec_5  = itt_el_id_start + 5 * itt_el_id_sec_inc
itt_el_id_start_sec_6  = itt_el_id_start + 6 * itt_el_id_sec_inc
itt_el_id_start_sec_7  = itt_el_id_start + 7 * itt_el_id_sec_inc
itt_el_id_start_sec_8  = itt_el_id_start + 8 * itt_el_id_sec_inc
itt_el_id_start_sec_9  = itt_el_id_start + 9 * itt_el_id_sec_inc
itt_el_id_start_sec_10  = itt_el_id_start + 10 * itt_el_id_sec_inc
itt_el_id_start_sec_11  = itt_el_id_start + 11 * itt_el_id_sec_inc
itt_el_id_start_sec_12  = itt_el_id_start + 12 * itt_el_id_sec_inc
itt_el_id_start_sec_13  = itt_el_id_start + 13 * itt_el_id_sec_inc
itt_el_id_start_sec_14  = itt_el_id_start + 14 * itt_el_id_sec_inc
itt_el_id_start_sec_15  = itt_el_id_start + 15 * itt_el_id_sec_inc
itt_el_id_start_sec_16  = itt_el_id_start + 16 * itt_el_id_sec_inc
itt_el_id_start_sec_17  = itt_el_id_start + 17 * itt_el_id_sec_inc
itt_el_id_start_sec_18  = itt_el_id_start + 18 * itt_el_id_sec_inc
itt_el_id_start_sec_19  = itt_el_id_start + 19 * itt_el_id_sec_inc
itt_el_id_start_sec_20  = itt_el_id_start + 20 * itt_el_id_sec_inc
#
itt_nd_id_start_sec_1  =   fl_b_nd_id_sec_1  + itt_slideline_len_half
itt_nd_id_start_sec_2  =   fl_b_nd_id_sec_2  + itt_slideline_len_half
itt_nd_id_start_sec_3  =   fl_b_nd_id_sec_3  + itt_slideline_len_half
itt_nd_id_start_sec_4  =   fl_b_nd_id_sec_4  + itt_slideline_len_half
itt_nd_id_start_sec_5  =   fl_b_nd_id_sec_5  + itt_slideline_len_half
itt_nd_id_start_sec_6  =   fl_b_nd_id_sec_6  + itt_slideline_len_half
itt_nd_id_start_sec_7  =   fl_b_nd_id_sec_7  + itt_slideline_len_half
itt_nd_id_start_sec_8  =   fl_b_nd_id_sec_8  + itt_slideline_len_half
itt_nd_id_start_sec_9  =   fl_b_nd_id_sec_9  + itt_slideline_len_half
itt_nd_id_start_sec_10  =  fl_b_nd_id_sec_10  + itt_slideline_len_half
itt_nd_id_start_sec_11  =  fl_b_nd_id_sec_11  + itt_slideline_len_half
itt_nd_id_start_sec_12  =  fl_b_nd_id_sec_12  + itt_slideline_len_half
itt_nd_id_start_sec_13  =  fl_b_nd_id_sec_13  + itt_slideline_len_half
itt_nd_id_start_sec_14  =  fl_b_nd_id_sec_14  + itt_slideline_len_half
itt_nd_id_start_sec_15  =  fl_b_nd_id_sec_15  + itt_slideline_len_half
itt_nd_id_start_sec_16  =  fl_b_nd_id_sec_16  + itt_slideline_len_half
itt_nd_id_start_sec_17  =  fl_b_nd_id_sec_17  + itt_slideline_len_half
itt_nd_id_start_sec_18  =  fl_b_nd_id_sec_18  + itt_slideline_len_half
itt_nd_id_start_sec_19  =  fl_b_nd_id_sec_19  + itt_slideline_len_half
itt_nd_id_start_sec_20  =  fl_b_nd_id_sec_20  + itt_slideline_len_half
#
itt_nd_id_inc_sec_1     =  max(1, int(cent_pitch / (cp_b_sec_1_len / cp_b_no_el_rows_sec_1)))
itt_nd_id_inc_sec_2     =  max(1, int(cent_pitch / (cp_b_sec_2_len / cp_b_no_el_rows_sec_2)))
itt_nd_id_inc_sec_3     =  max(1, int(cent_pitch / (cp_b_sec_3_len / cp_b_no_el_rows_sec_3)))
itt_nd_id_inc_sec_4     =  max(1, int(cent_pitch / (cp_b_sec_4_len / cp_b_no_el_rows_sec_4)))
itt_nd_id_inc_sec_5     =  max(1, int(cent_pitch / (cp_b_sec_5_len / cp_b_no_el_rows_sec_5)))
itt_nd_id_inc_sec_6     =  max(1, int(cent_pitch / (cp_b_sec_6_len / cp_b_no_el_rows_sec_6)))
itt_nd_id_inc_sec_7     =  max(1, int(cent_pitch / (cp_b_sec_7_len / cp_b_no_el_rows_sec_7)))
itt_nd_id_inc_sec_8     =  max(1, int(cent_pitch / (cp_b_sec_8_len / cp_b_no_el_rows_sec_8)))
itt_nd_id_inc_sec_9     =  max(1, int(cent_pitch / (cp_b_sec_9_len / cp_b_no_el_rows_sec_9)))
itt_nd_id_inc_sec_10    =  max(1, int(cent_pitch / (cp_b_sec_10_len / cp_b_no_el_rows_sec_10)))
itt_nd_id_inc_sec_11    =  max(1, int(cent_pitch / (cp_b_sec_11_len / cp_b_no_el_rows_sec_11)))
itt_nd_id_inc_sec_12    =  max(1, int(cent_pitch / (cp_b_sec_12_len / cp_b_no_el_rows_sec_12)))
itt_nd_id_inc_sec_13    =  max(1, int(cent_pitch / (cp_b_sec_13_len / cp_b_no_el_rows_sec_13)))
itt_nd_id_inc_sec_14    =  max(1, int(cent_pitch / (cp_b_sec_14_len / cp_b_no_el_rows_sec_14)))
itt_nd_id_inc_sec_15    =  max(1, int(cent_pitch / (cp_b_sec_15_len / cp_b_no_el_rows_sec_15)))
itt_nd_id_inc_sec_16    =  max(1, int(cent_pitch / (cp_b_sec_16_len / cp_b_no_el_rows_sec_16)))
itt_nd_id_inc_sec_17    =  max(1, int(cent_pitch / (cp_b_sec_17_len / cp_b_no_el_rows_sec_17)))
itt_nd_id_inc_sec_18    =  max(1, int(cent_pitch / (cp_b_sec_18_len / cp_b_no_el_rows_sec_18)))
itt_nd_id_inc_sec_19    =  max(1, int(cent_pitch / (cp_b_sec_19_len / cp_b_no_el_rows_sec_19)))
itt_nd_id_inc_sec_20    =  max(1, int(cent_pitch / (cp_b_sec_20_len / cp_b_no_el_rows_sec_20)))
#
itt_no_el_rows_sec_1     = int((fl_b_no_el_rows_sec_1 ) / itt_nd_id_inc_sec_1 )
itt_no_el_rows_sec_2     = int((fl_b_no_el_rows_sec_2 ) / itt_nd_id_inc_sec_2 )
itt_no_el_rows_sec_3     = int((fl_b_no_el_rows_sec_3 ) / itt_nd_id_inc_sec_3 )
itt_no_el_rows_sec_4     = int((fl_b_no_el_rows_sec_4 ) / itt_nd_id_inc_sec_4 )
itt_no_el_rows_sec_5     = int((fl_b_no_el_rows_sec_5 ) / itt_nd_id_inc_sec_5 )
itt_no_el_rows_sec_6     = int((fl_b_no_el_rows_sec_6 ) / itt_nd_id_inc_sec_6 )
itt_no_el_rows_sec_7     = int((fl_b_no_el_rows_sec_7 ) / itt_nd_id_inc_sec_7 )
itt_no_el_rows_sec_8     = int((fl_b_no_el_rows_sec_8 ) / itt_nd_id_inc_sec_8 )
itt_no_el_rows_sec_9     = int((fl_b_no_el_rows_sec_9 ) / itt_nd_id_inc_sec_9 )
itt_no_el_rows_sec_10    = int((fl_b_no_el_rows_sec_10) / itt_nd_id_inc_sec_10)
itt_no_el_rows_sec_11    = int((fl_b_no_el_rows_sec_11) / itt_nd_id_inc_sec_11)
itt_no_el_rows_sec_12    = int((fl_b_no_el_rows_sec_12) / itt_nd_id_inc_sec_12)
itt_no_el_rows_sec_13    = int((fl_b_no_el_rows_sec_13) / itt_nd_id_inc_sec_13)
itt_no_el_rows_sec_14    = int((fl_b_no_el_rows_sec_14) / itt_nd_id_inc_sec_14)
itt_no_el_rows_sec_15    = int((fl_b_no_el_rows_sec_15) / itt_nd_id_inc_sec_15)
itt_no_el_rows_sec_16    = int((fl_b_no_el_rows_sec_16) / itt_nd_id_inc_sec_16)
itt_no_el_rows_sec_17    = int((fl_b_no_el_rows_sec_17) / itt_nd_id_inc_sec_17)
itt_no_el_rows_sec_18    = int((fl_b_no_el_rows_sec_18) / itt_nd_id_inc_sec_18)
itt_no_el_rows_sec_19    = int((fl_b_no_el_rows_sec_19) / itt_nd_id_inc_sec_19)
itt_no_el_rows_sec_20    = int((fl_b_no_el_rows_sec_20 - 1) / itt_nd_id_inc_sec_20)
#
#itt_nd_id_start        = fl_b_nd_id_start + itt_slideline_len_half
#itt_nd_id_end          = fl_b_nd_id_end   - itt_slideline_len_half
#itt_nd_id_inc          =  int(cent_pitch / cp_b_el_len)
#itt_no_el_rows         = ((itt_nd_id_end - itt_nd_id_start) / itt_nd_id_inc) + 1
#itt_no_diff            = abs(fl_b_el_id_start - cp_b_el_id_start)
#
#itt_el_id_start_sec_1  = itt_el_id_start + itt_slideline_len_half
#itt_nd_id_start_sec_1  = fl_b_nd_id_start + itt_slideline_len_half
#
**
** *************************************
** D2 - SLIDELINE NODES
** *************************************
**
##
## --- slide nodes
##
slide_nd_start_sec_1    = cp_b_nd_id_sec_1
slide_nd_end_sec_1      = cp_b_nd_id_sec_2
slide_nd_start_sec_2    = cp_b_nd_id_sec_2
slide_nd_end_sec_2      = cp_b_nd_id_sec_3 
slide_nd_start_sec_3    = cp_b_nd_id_sec_3
slide_nd_end_sec_3      = cp_b_nd_id_sec_4 
slide_nd_start_sec_4    = cp_b_nd_id_sec_4
slide_nd_end_sec_4      = cp_b_nd_id_sec_5 
slide_nd_start_sec_5    = cp_b_nd_id_sec_5
slide_nd_end_sec_5      = cp_b_nd_id_sec_6 
slide_nd_start_sec_6    = cp_b_nd_id_sec_6
slide_nd_end_sec_6      = cp_b_nd_id_sec_7 
slide_nd_start_sec_7    = cp_b_nd_id_sec_7
slide_nd_end_sec_7      = cp_b_nd_id_sec_8 
slide_nd_start_sec_8    = cp_b_nd_id_sec_8
slide_nd_end_sec_8      = cp_b_nd_id_sec_9
slide_nd_start_sec_9    = cp_b_nd_id_sec_9
slide_nd_end_sec_9      = cp_b_nd_id_sec_10 
slide_nd_start_sec_10    = cp_b_nd_id_sec_10
slide_nd_end_sec_10      = cp_b_nd_id_sec_11
slide_nd_start_sec_11    = cp_b_nd_id_sec_11
slide_nd_end_sec_11      = cp_b_nd_id_sec_12
slide_nd_start_sec_12    = cp_b_nd_id_sec_12
slide_nd_end_sec_12      = cp_b_nd_id_sec_13
slide_nd_start_sec_13    = cp_b_nd_id_sec_13
slide_nd_end_sec_13      = cp_b_nd_id_sec_14
slide_nd_start_sec_14    = cp_b_nd_id_sec_14
slide_nd_end_sec_14      = cp_b_nd_id_sec_15
slide_nd_start_sec_15    = cp_b_nd_id_sec_15
slide_nd_end_sec_15      = cp_b_nd_id_sec_16
slide_nd_start_sec_16    = cp_b_nd_id_sec_16
slide_nd_end_sec_16      = cp_b_nd_id_sec_17
slide_nd_start_sec_17    = cp_b_nd_id_sec_17
slide_nd_end_sec_17      = cp_b_nd_id_sec_18
slide_nd_start_sec_18    = cp_b_nd_id_sec_18
slide_nd_end_sec_18      = cp_b_nd_id_sec_19
slide_nd_start_sec_19    = cp_b_nd_id_sec_19
slide_nd_end_sec_19      = cp_b_nd_id_sec_20
slide_nd_start_sec_20    = cp_b_nd_id_sec_20
slide_nd_end_sec_20      = cp_b_nd_id_sec_20 + cp_b_no_el_rows_sec_20
#
#
**
** ****************************
** D3 - ITT ELEMENTS DEFINITION
** ****************************
**
**
**
*ELEMENT, TYPE=ITT31, ELSET=cent_els_sec_1
 <itt_el_id_start_sec_1>, <itt_nd_id_start_sec_1>
*ELEMENT, TYPE=ITT31, ELSET=cent_els_sec_2
 <itt_el_id_start_sec_2>, <itt_nd_id_start_sec_2>
*ELEMENT, TYPE=ITT31, ELSET=cent_els_sec_3
 <itt_el_id_start_sec_3>, <itt_nd_id_start_sec_3>
*ELEMENT, TYPE=ITT31, ELSET=cent_els_sec_4
 <itt_el_id_start_sec_4>, <itt_nd_id_start_sec_4>
*ELEMENT, TYPE=ITT31, ELSET=cent_els_sec_5
 <itt_el_id_start_sec_5>, <itt_nd_id_start_sec_5>
*ELEMENT, TYPE=ITT31, ELSET=cent_els_sec_6
 <itt_el_id_start_sec_6>, <itt_nd_id_start_sec_6>
*ELEMENT, TYPE=ITT31, ELSET=cent_els_sec_7
 <itt_el_id_start_sec_7>, <itt_nd_id_start_sec_7>
*ELEMENT, TYPE=ITT31, ELSET=cent_els_sec_8
 <itt_el_id_start_sec_8>, <itt_nd_id_start_sec_8>
*ELEMENT, TYPE=ITT31, ELSET=cent_els_sec_9
 <itt_el_id_start_sec_9>, <itt_nd_id_start_sec_9>
*ELEMENT, TYPE=ITT31, ELSET=cent_els_sec_10
 <itt_el_id_start_sec_10>, <itt_nd_id_start_sec_10>
*ELEMENT, TYPE=ITT31, ELSET=cent_els_sec_11
 <itt_el_id_start_sec_11>, <itt_nd_id_start_sec_11>
*ELEMENT, TYPE=ITT31, ELSET=cent_els_sec_12
 <itt_el_id_start_sec_12>, <itt_nd_id_start_sec_12>
*ELEMENT, TYPE=ITT31, ELSET=cent_els_sec_13
 <itt_el_id_start_sec_13>, <itt_nd_id_start_sec_13>
*ELEMENT, TYPE=ITT31, ELSET=cent_els_sec_14
 <itt_el_id_start_sec_14>, <itt_nd_id_start_sec_14>
*ELEMENT, TYPE=ITT31, ELSET=cent_els_sec_15
 <itt_el_id_start_sec_15>, <itt_nd_id_start_sec_15>
*ELEMENT, TYPE=ITT31, ELSET=cent_els_sec_16
 <itt_el_id_start_sec_16>, <itt_nd_id_start_sec_16>
*ELEMENT, TYPE=ITT31, ELSET=cent_els_sec_17
 <itt_el_id_start_sec_17>, <itt_nd_id_start_sec_17>
*ELEMENT, TYPE=ITT31, ELSET=cent_els_sec_18
 <itt_el_id_start_sec_18>, <itt_nd_id_start_sec_18>
*ELEMENT, TYPE=ITT31, ELSET=cent_els_sec_19
 <itt_el_id_start_sec_19>, <itt_nd_id_start_sec_19>
*ELEMENT, TYPE=ITT31, ELSET=cent_els_sec_20
 <itt_el_id_start_sec_20>, <itt_nd_id_start_sec_20>
**
**
*ELGEN, ELSET=cent_els_sec_1
** master element number,  number of elements,  increment in node id, increment in element id
 <itt_el_id_start_sec_1>, <itt_no_el_rows_sec_1>, <itt_nd_id_inc_sec_1>, <itt_nd_id_inc_sec_1>
*ELGEN, ELSET=cent_els_sec_2
** master element number,  number of elements,  increment in node id, increment in element id
 <itt_el_id_start_sec_2>, <itt_no_el_rows_sec_2>, <itt_nd_id_inc_sec_2>, <itt_nd_id_inc_sec_2>
*ELGEN, ELSET=cent_els_sec_3
** master element number,  number of elements,  increment in node id, increment in element id
 <itt_el_id_start_sec_3>, <itt_no_el_rows_sec_3>, <itt_nd_id_inc_sec_3>, <itt_nd_id_inc_sec_3>
*ELGEN, ELSET=cent_els_sec_4
** master element number,  number of elements,  increment in node id, increment in element id
 <itt_el_id_start_sec_4>, <itt_no_el_rows_sec_4>, <itt_nd_id_inc_sec_4>, <itt_nd_id_inc_sec_4>
*ELGEN, ELSET=cent_els_sec_5
** master element number,  number of elements,  increment in node id, increment in element id
 <itt_el_id_start_sec_5>, <itt_no_el_rows_sec_5>, <itt_nd_id_inc_sec_5>, <itt_nd_id_inc_sec_5>
*ELGEN, ELSET=cent_els_sec_6
** master element number,  number of elements,  increment in node id, increment in element id
 <itt_el_id_start_sec_6>, <itt_no_el_rows_sec_6>, <itt_nd_id_inc_sec_6>, <itt_nd_id_inc_sec_6>
*ELGEN, ELSET=cent_els_sec_7
** master element number,  number of elements,  increment in node id, increment in element id
 <itt_el_id_start_sec_7>, <itt_no_el_rows_sec_7>, <itt_nd_id_inc_sec_7>, <itt_nd_id_inc_sec_7>
*ELGEN, ELSET=cent_els_sec_8
** master element number,  number of elements,  increment in node id, increment in element id
 <itt_el_id_start_sec_8>, <itt_no_el_rows_sec_8>, <itt_nd_id_inc_sec_8>, <itt_nd_id_inc_sec_8>
*ELGEN, ELSET=cent_els_sec_9
** master element number,  number of elements,  increment in node id, increment in element id
 <itt_el_id_start_sec_9>, <itt_no_el_rows_sec_9>, <itt_nd_id_inc_sec_9>, <itt_nd_id_inc_sec_9>
*ELGEN, ELSET=cent_els_sec_10
** master element number,  number of elements,  increment in node id, increment in element id
 <itt_el_id_start_sec_10>, <itt_no_el_rows_sec_10>, <itt_nd_id_inc_sec_10>, <itt_nd_id_inc_sec_10>
*ELGEN, ELSET=cent_els_sec_11
** master element number,  number of elements,  increment in node id, increment in element id
 <itt_el_id_start_sec_11>, <itt_no_el_rows_sec_11>, <itt_nd_id_inc_sec_11>, <itt_nd_id_inc_sec_11>
*ELGEN, ELSET=cent_els_sec_12
** master element number,  number of elements,  increment in node id, increment in element id
 <itt_el_id_start_sec_12>, <itt_no_el_rows_sec_12>, <itt_nd_id_inc_sec_12>, <itt_nd_id_inc_sec_12>
*ELGEN, ELSET=cent_els_sec_13
** master element number,  number of elements,  increment in node id, increment in element id
 <itt_el_id_start_sec_13>, <itt_no_el_rows_sec_13>, <itt_nd_id_inc_sec_13>, <itt_nd_id_inc_sec_13>
*ELGEN, ELSET=cent_els_sec_14
** master element number,  number of elements,  increment in node id, increment in element id
 <itt_el_id_start_sec_14>, <itt_no_el_rows_sec_14>, <itt_nd_id_inc_sec_14>, <itt_nd_id_inc_sec_14>
*ELGEN, ELSET=cent_els_sec_15
** master element number,  number of elements,  increment in node id, increment in element id
 <itt_el_id_start_sec_15>, <itt_no_el_rows_sec_15>, <itt_nd_id_inc_sec_15>, <itt_nd_id_inc_sec_15>
*ELGEN, ELSET=cent_els_sec_16
** master element number,  number of elements,  increment in node id, increment in element id
 <itt_el_id_start_sec_16>, <itt_no_el_rows_sec_16>, <itt_nd_id_inc_sec_16>, <itt_nd_id_inc_sec_16>
*ELGEN, ELSET=cent_els_sec_17
** master element number,  number of elements,  increment in node id, increment in element id
 <itt_el_id_start_sec_17>, <itt_no_el_rows_sec_17>, <itt_nd_id_inc_sec_17>, <itt_nd_id_inc_sec_17>
*ELGEN, ELSET=cent_els_sec_18
** master element number,  number of elements,  increment in node id, increment in element id
 <itt_el_id_start_sec_18>, <itt_no_el_rows_sec_18>, <itt_nd_id_inc_sec_18>, <itt_nd_id_inc_sec_18>
*ELGEN, ELSET=cent_els_sec_19
** master element number,  number of elements,  increment in node id, increment in element id
 <itt_el_id_start_sec_19>, <itt_no_el_rows_sec_19>, <itt_nd_id_inc_sec_19>, <itt_nd_id_inc_sec_19>
*ELGEN, ELSET=cent_els_sec_20
** master element number,  number of elements,  increment in node id, increment in element id
 <itt_el_id_start_sec_20>, <itt_no_el_rows_sec_20>, <itt_nd_id_inc_sec_20>, <itt_nd_id_inc_sec_20>
**
** *************************
** D4 - CREATE ELEMENT SETS
** *************************
**
** --- all itt elements
**
*ELSET, ELSET=cent_els
 cent_els_sec_1,
 cent_els_sec_2,
 cent_els_sec_3,
 cent_els_sec_4,
 cent_els_sec_5,
 cent_els_sec_6,
 cent_els_sec_7,
 cent_els_sec_8,
 cent_els_sec_9,
 cent_els_sec_10,
 cent_els_sec_11,
 cent_els_sec_12,
 cent_els_sec_13,
 cent_els_sec_14,
 cent_els_sec_15,
 cent_els_sec_16,
 cent_els_sec_17,
 cent_els_sec_18,
 cent_els_sec_19,
 cent_els_sec_20,
**
**
** *************************
** D5 - SLIDELINES DEFINITION
** *************************
**
**
** --- SLIDE LINE
**
*SLIDE LINE, TYPE=LINEAR, ELSET=cent_els_sec_1, GENERATE, SMOOTH=0.1
 <slide_nd_start_sec_1>, <slide_nd_end_sec_1>, 1
*SLIDE LINE, TYPE=LINEAR, ELSET=cent_els_sec_2, GENERATE, SMOOTH=0.1
 <slide_nd_start_sec_2>, <slide_nd_end_sec_2>, 1
*SLIDE LINE, TYPE=LINEAR, ELSET=cent_els_sec_3, GENERATE, SMOOTH=0.1
 <slide_nd_start_sec_3>, <slide_nd_end_sec_3>, 1
*SLIDE LINE, TYPE=LINEAR, ELSET=cent_els_sec_4, GENERATE, SMOOTH=0.1
 <slide_nd_start_sec_4>, <slide_nd_end_sec_4>, 1
*SLIDE LINE, TYPE=LINEAR, ELSET=cent_els_sec_5, GENERATE, SMOOTH=0.1
 <slide_nd_start_sec_5>, <slide_nd_end_sec_5>, 1
*SLIDE LINE, TYPE=LINEAR, ELSET=cent_els_sec_6, GENERATE, SMOOTH=0.1
 <slide_nd_start_sec_6>, <slide_nd_end_sec_6>, 1
*SLIDE LINE, TYPE=LINEAR, ELSET=cent_els_sec_7, GENERATE, SMOOTH=0.1
 <slide_nd_start_sec_7>, <slide_nd_end_sec_7>, 1
*SLIDE LINE, TYPE=LINEAR, ELSET=cent_els_sec_8, GENERATE, SMOOTH=0.1
 <slide_nd_start_sec_8>, <slide_nd_end_sec_8>, 1
*SLIDE LINE, TYPE=LINEAR, ELSET=cent_els_sec_9, GENERATE, SMOOTH=0.1
 <slide_nd_start_sec_9>, <slide_nd_end_sec_9>, 1
*SLIDE LINE, TYPE=LINEAR, ELSET=cent_els_sec_10, GENERATE, SMOOTH=0.1
 <slide_nd_start_sec_10>, <slide_nd_end_sec_10>, 1
*SLIDE LINE, TYPE=LINEAR, ELSET=cent_els_sec_11, GENERATE, SMOOTH=0.1
 <slide_nd_start_sec_11>, <slide_nd_end_sec_11>, 1
*SLIDE LINE, TYPE=LINEAR, ELSET=cent_els_sec_12, GENERATE, SMOOTH=0.1
 <slide_nd_start_sec_12>, <slide_nd_end_sec_12>, 1
*SLIDE LINE, TYPE=LINEAR, ELSET=cent_els_sec_13, GENERATE, SMOOTH=0.1
 <slide_nd_start_sec_13>, <slide_nd_end_sec_13>, 1
*SLIDE LINE, TYPE=LINEAR, ELSET=cent_els_sec_14, GENERATE, SMOOTH=0.1
 <slide_nd_start_sec_14>, <slide_nd_end_sec_14>, 1
*SLIDE LINE, TYPE=LINEAR, ELSET=cent_els_sec_15, GENERATE, SMOOTH=0.1
 <slide_nd_start_sec_15>, <slide_nd_end_sec_15>, 1
*SLIDE LINE, TYPE=LINEAR, ELSET=cent_els_sec_16, GENERATE, SMOOTH=0.1
 <slide_nd_start_sec_16>, <slide_nd_end_sec_16>, 1
*SLIDE LINE, TYPE=LINEAR, ELSET=cent_els_sec_17, GENERATE, SMOOTH=0.1
 <slide_nd_start_sec_17>, <slide_nd_end_sec_17>, 1
*SLIDE LINE, TYPE=LINEAR, ELSET=cent_els_sec_18, GENERATE, SMOOTH=0.1
 <slide_nd_start_sec_18>, <slide_nd_end_sec_18>, 1
*SLIDE LINE, TYPE=LINEAR, ELSET=cent_els_sec_19, GENERATE, SMOOTH=0.1
 <slide_nd_start_sec_19>, <slide_nd_end_sec_19>, 1
*SLIDE LINE, TYPE=LINEAR, ELSET=cent_els_sec_20, GENERATE, SMOOTH=0.1
 <slide_nd_start_sec_20>, <slide_nd_end_sec_20>, 1
**
**
**
** *********************************
** E - SPRING ELEMENTS DEFINITION
** *********************************
**
*PARAMETER
**
** *************************************
** E1 - ID's FOR SPRING NODES AND ELEMENTS
** *************************************
#
#itt_spring_nd_id_start_1     = fl_b_nd_id_start + 1
#itt_spring_nd_id_start_2     = cp_b_nd_id_start + 1
#itt_spring_nd_id_inc         = 1 # int(cent_pitch / cp_b_el_len)
#
itt_spring_fl_nd_id_start_sec_1  =   fl_b_nd_id_sec_1  + itt_slideline_len_half
itt_spring_fl_nd_id_start_sec_2  =   fl_b_nd_id_sec_2  + itt_slideline_len_half
itt_spring_fl_nd_id_start_sec_3  =   fl_b_nd_id_sec_3  + itt_slideline_len_half
itt_spring_fl_nd_id_start_sec_4  =   fl_b_nd_id_sec_4  + itt_slideline_len_half
itt_spring_fl_nd_id_start_sec_5  =   fl_b_nd_id_sec_5  + itt_slideline_len_half
itt_spring_fl_nd_id_start_sec_6  =   fl_b_nd_id_sec_6  + itt_slideline_len_half
itt_spring_fl_nd_id_start_sec_7  =   fl_b_nd_id_sec_7  + itt_slideline_len_half
itt_spring_fl_nd_id_start_sec_8  =   fl_b_nd_id_sec_8  + itt_slideline_len_half
itt_spring_fl_nd_id_start_sec_9  =   fl_b_nd_id_sec_9  + itt_slideline_len_half
itt_spring_fl_nd_id_start_sec_10  =  fl_b_nd_id_sec_10  + itt_slideline_len_half
itt_spring_fl_nd_id_start_sec_11  =  fl_b_nd_id_sec_11  + itt_slideline_len_half
itt_spring_fl_nd_id_start_sec_12  =  fl_b_nd_id_sec_12  + itt_slideline_len_half
itt_spring_fl_nd_id_start_sec_13  =  fl_b_nd_id_sec_13  + itt_slideline_len_half
itt_spring_fl_nd_id_start_sec_14  =  fl_b_nd_id_sec_14  + itt_slideline_len_half
itt_spring_fl_nd_id_start_sec_15  =  fl_b_nd_id_sec_15  + itt_slideline_len_half
itt_spring_fl_nd_id_start_sec_16  =  fl_b_nd_id_sec_16  + itt_slideline_len_half
itt_spring_fl_nd_id_start_sec_17  =  fl_b_nd_id_sec_17  + itt_slideline_len_half
itt_spring_fl_nd_id_start_sec_18  =  fl_b_nd_id_sec_18  + itt_slideline_len_half
itt_spring_fl_nd_id_start_sec_19  =  fl_b_nd_id_sec_19  + itt_slideline_len_half
itt_spring_fl_nd_id_start_sec_20  =  fl_b_nd_id_sec_20  + itt_slideline_len_half
#
itt_spring_cp_nd_id_start_sec_1  =   cp_b_nd_id_sec_1  + itt_slideline_len_half
itt_spring_cp_nd_id_start_sec_2  =   cp_b_nd_id_sec_2  + itt_slideline_len_half
itt_spring_cp_nd_id_start_sec_3  =   cp_b_nd_id_sec_3  + itt_slideline_len_half
itt_spring_cp_nd_id_start_sec_4  =   cp_b_nd_id_sec_4  + itt_slideline_len_half
itt_spring_cp_nd_id_start_sec_5  =   cp_b_nd_id_sec_5  + itt_slideline_len_half
itt_spring_cp_nd_id_start_sec_6  =   cp_b_nd_id_sec_6  + itt_slideline_len_half
itt_spring_cp_nd_id_start_sec_7  =   cp_b_nd_id_sec_7  + itt_slideline_len_half
itt_spring_cp_nd_id_start_sec_8  =   cp_b_nd_id_sec_8  + itt_slideline_len_half
itt_spring_cp_nd_id_start_sec_9  =   cp_b_nd_id_sec_9  + itt_slideline_len_half
itt_spring_cp_nd_id_start_sec_10  =  cp_b_nd_id_sec_10  + itt_slideline_len_half
itt_spring_cp_nd_id_start_sec_11  =  cp_b_nd_id_sec_11  + itt_slideline_len_half
itt_spring_cp_nd_id_start_sec_12  =  cp_b_nd_id_sec_12  + itt_slideline_len_half
itt_spring_cp_nd_id_start_sec_13  =  cp_b_nd_id_sec_13  + itt_slideline_len_half
itt_spring_cp_nd_id_start_sec_14  =  cp_b_nd_id_sec_14  + itt_slideline_len_half
itt_spring_cp_nd_id_start_sec_15  =  cp_b_nd_id_sec_15  + itt_slideline_len_half
itt_spring_cp_nd_id_start_sec_16  =  cp_b_nd_id_sec_16  + itt_slideline_len_half
itt_spring_cp_nd_id_start_sec_17  =  cp_b_nd_id_sec_17  + itt_slideline_len_half
itt_spring_cp_nd_id_start_sec_18  =  cp_b_nd_id_sec_18  + itt_slideline_len_half
itt_spring_cp_nd_id_start_sec_19  =  cp_b_nd_id_sec_19  + itt_slideline_len_half
itt_spring_cp_nd_id_start_sec_20  =  cp_b_nd_id_sec_20  + itt_slideline_len_half
#
itt_spring_el_id_start       = 4000001
itt_spring_el_id_sec_inc     = itt_el_id_sec_inc
#
itt_spring_el_id_start_sec_1  = itt_spring_el_id_start + 1 * itt_spring_el_id_sec_inc
itt_spring_el_id_start_sec_2  = itt_spring_el_id_start + 2 * itt_spring_el_id_sec_inc
itt_spring_el_id_start_sec_3  = itt_spring_el_id_start + 3 * itt_spring_el_id_sec_inc
itt_spring_el_id_start_sec_4  = itt_spring_el_id_start + 4 * itt_spring_el_id_sec_inc
itt_spring_el_id_start_sec_5  = itt_spring_el_id_start + 5 * itt_spring_el_id_sec_inc
itt_spring_el_id_start_sec_6  = itt_spring_el_id_start + 6 * itt_spring_el_id_sec_inc
itt_spring_el_id_start_sec_7  = itt_spring_el_id_start + 7 * itt_spring_el_id_sec_inc
itt_spring_el_id_start_sec_8  = itt_spring_el_id_start + 8 * itt_spring_el_id_sec_inc
itt_spring_el_id_start_sec_9  = itt_spring_el_id_start + 9 * itt_spring_el_id_sec_inc
itt_spring_el_id_start_sec_10  = itt_spring_el_id_start + 10 * itt_spring_el_id_sec_inc
itt_spring_el_id_start_sec_11  = itt_spring_el_id_start + 11 * itt_spring_el_id_sec_inc
itt_spring_el_id_start_sec_12  = itt_spring_el_id_start + 12 * itt_spring_el_id_sec_inc
itt_spring_el_id_start_sec_13  = itt_spring_el_id_start + 13 * itt_spring_el_id_sec_inc
itt_spring_el_id_start_sec_14  = itt_spring_el_id_start + 14 * itt_spring_el_id_sec_inc
itt_spring_el_id_start_sec_15  = itt_spring_el_id_start + 15 * itt_spring_el_id_sec_inc
itt_spring_el_id_start_sec_16  = itt_spring_el_id_start + 16 * itt_spring_el_id_sec_inc
itt_spring_el_id_start_sec_17  = itt_spring_el_id_start + 17 * itt_spring_el_id_sec_inc
itt_spring_el_id_start_sec_18  = itt_spring_el_id_start + 18 * itt_spring_el_id_sec_inc
itt_spring_el_id_start_sec_19  = itt_spring_el_id_start + 19 * itt_spring_el_id_sec_inc
itt_spring_el_id_start_sec_20  = itt_spring_el_id_start + 20 * itt_spring_el_id_sec_inc
#
** ****************************
** E2 - CREATE SPRING ELEMENTS
** ****************************
**
*ELEMENT, TYPE=SPRINGA, ELSET=cent_spring_els_sec_1
 <itt_spring_el_id_start_sec_1>, <itt_spring_fl_nd_id_start_sec_1>, <itt_spring_cp_nd_id_start_sec_1>
*ELEMENT, TYPE=SPRINGA, ELSET=cent_spring_els_sec_2
 <itt_spring_el_id_start_sec_2>, <itt_spring_fl_nd_id_start_sec_2>, <itt_spring_cp_nd_id_start_sec_2>
*ELEMENT, TYPE=SPRINGA, ELSET=cent_spring_els_sec_3
 <itt_spring_el_id_start_sec_3>, <itt_spring_fl_nd_id_start_sec_3>, <itt_spring_cp_nd_id_start_sec_3>
*ELEMENT, TYPE=SPRINGA, ELSET=cent_spring_els_sec_4
 <itt_spring_el_id_start_sec_4>, <itt_spring_fl_nd_id_start_sec_4>, <itt_spring_cp_nd_id_start_sec_4>
*ELEMENT, TYPE=SPRINGA, ELSET=cent_spring_els_sec_5
 <itt_spring_el_id_start_sec_5>, <itt_spring_fl_nd_id_start_sec_5>, <itt_spring_cp_nd_id_start_sec_5>
*ELEMENT, TYPE=SPRINGA, ELSET=cent_spring_els_sec_6
 <itt_spring_el_id_start_sec_6>, <itt_spring_fl_nd_id_start_sec_6>, <itt_spring_cp_nd_id_start_sec_6>
*ELEMENT, TYPE=SPRINGA, ELSET=cent_spring_els_sec_7
 <itt_spring_el_id_start_sec_7>, <itt_spring_fl_nd_id_start_sec_7>, <itt_spring_cp_nd_id_start_sec_7>
*ELEMENT, TYPE=SPRINGA, ELSET=cent_spring_els_sec_8
 <itt_spring_el_id_start_sec_8>, <itt_spring_fl_nd_id_start_sec_8>, <itt_spring_cp_nd_id_start_sec_8>
*ELEMENT, TYPE=SPRINGA, ELSET=cent_spring_els_sec_9
 <itt_spring_el_id_start_sec_9>, <itt_spring_fl_nd_id_start_sec_9>, <itt_spring_cp_nd_id_start_sec_9>
*ELEMENT, TYPE=SPRINGA, ELSET=cent_spring_els_sec_10
 <itt_spring_el_id_start_sec_10>, <itt_spring_fl_nd_id_start_sec_10>, <itt_spring_cp_nd_id_start_sec_10>
*ELEMENT, TYPE=SPRINGA, ELSET=cent_spring_els_sec_11
 <itt_spring_el_id_start_sec_11>, <itt_spring_fl_nd_id_start_sec_11>, <itt_spring_cp_nd_id_start_sec_11>
*ELEMENT, TYPE=SPRINGA, ELSET=cent_spring_els_sec_12
 <itt_spring_el_id_start_sec_12>, <itt_spring_fl_nd_id_start_sec_12>, <itt_spring_cp_nd_id_start_sec_12>
*ELEMENT, TYPE=SPRINGA, ELSET=cent_spring_els_sec_13
 <itt_spring_el_id_start_sec_13>, <itt_spring_fl_nd_id_start_sec_13>, <itt_spring_cp_nd_id_start_sec_13>
*ELEMENT, TYPE=SPRINGA, ELSET=cent_spring_els_sec_14
 <itt_spring_el_id_start_sec_14>, <itt_spring_fl_nd_id_start_sec_14>, <itt_spring_cp_nd_id_start_sec_14>
*ELEMENT, TYPE=SPRINGA, ELSET=cent_spring_els_sec_15
 <itt_spring_el_id_start_sec_15>, <itt_spring_fl_nd_id_start_sec_15>, <itt_spring_cp_nd_id_start_sec_15>
*ELEMENT, TYPE=SPRINGA, ELSET=cent_spring_els_sec_16
 <itt_spring_el_id_start_sec_16>, <itt_spring_fl_nd_id_start_sec_16>, <itt_spring_cp_nd_id_start_sec_16>
*ELEMENT, TYPE=SPRINGA, ELSET=cent_spring_els_sec_17
 <itt_spring_el_id_start_sec_17>, <itt_spring_fl_nd_id_start_sec_17>, <itt_spring_cp_nd_id_start_sec_17>
*ELEMENT, TYPE=SPRINGA, ELSET=cent_spring_els_sec_18
 <itt_spring_el_id_start_sec_18>, <itt_spring_fl_nd_id_start_sec_18>, <itt_spring_cp_nd_id_start_sec_18>
*ELEMENT, TYPE=SPRINGA, ELSET=cent_spring_els_sec_19
 <itt_spring_el_id_start_sec_19>, <itt_spring_fl_nd_id_start_sec_19>, <itt_spring_cp_nd_id_start_sec_19>
*ELEMENT, TYPE=SPRINGA, ELSET=cent_spring_els_sec_20
 <itt_spring_el_id_start_sec_20>, <itt_spring_fl_nd_id_start_sec_20>, <itt_spring_cp_nd_id_start_sec_20>
**
**
*ELGEN, ELSET=cent_spring_els_sec_1
** master element number,  number of elements,  increment in node id, increment in element id
 <itt_spring_el_id_start_sec_1>, <itt_no_el_rows_sec_1>, <itt_nd_id_inc_sec_1>, <itt_nd_id_inc_sec_1>
*ELGEN, ELSET=cent_spring_els_sec_2
** master element number,  number of elements,  increment in node id, increment in element id
 <itt_spring_el_id_start_sec_2>, <itt_no_el_rows_sec_2>, <itt_nd_id_inc_sec_2>, <itt_nd_id_inc_sec_2>
*ELGEN, ELSET=cent_spring_els_sec_3
** master element number,  number of elements,  increment in node id, increment in element id
 <itt_spring_el_id_start_sec_3>, <itt_no_el_rows_sec_3>, <itt_nd_id_inc_sec_3>, <itt_nd_id_inc_sec_3>
*ELGEN, ELSET=cent_spring_els_sec_4
** master element number,  number of elements,  increment in node id, increment in element id
 <itt_spring_el_id_start_sec_4>, <itt_no_el_rows_sec_4>, <itt_nd_id_inc_sec_4>, <itt_nd_id_inc_sec_4>
*ELGEN, ELSET=cent_spring_els_sec_5
** master element number,  number of elements,  increment in node id, increment in element id
 <itt_spring_el_id_start_sec_5>, <itt_no_el_rows_sec_5>, <itt_nd_id_inc_sec_5>, <itt_nd_id_inc_sec_5>
*ELGEN, ELSET=cent_spring_els_sec_6
** master element number,  number of elements,  increment in node id, increment in element id
 <itt_spring_el_id_start_sec_6>, <itt_no_el_rows_sec_6>, <itt_nd_id_inc_sec_6>, <itt_nd_id_inc_sec_6>
*ELGEN, ELSET=cent_spring_els_sec_7
** master element number,  number of elements,  increment in node id, increment in element id
 <itt_spring_el_id_start_sec_7>, <itt_no_el_rows_sec_7>, <itt_nd_id_inc_sec_7>, <itt_nd_id_inc_sec_7>
*ELGEN, ELSET=cent_spring_els_sec_8
** master element number,  number of elements,  increment in node id, increment in element id
 <itt_spring_el_id_start_sec_8>, <itt_no_el_rows_sec_8>, <itt_nd_id_inc_sec_8>, <itt_nd_id_inc_sec_8>
*ELGEN, ELSET=cent_spring_els_sec_9
** master element number,  number of elements,  increment in node id, increment in element id
 <itt_spring_el_id_start_sec_9>, <itt_no_el_rows_sec_9>, <itt_nd_id_inc_sec_9>, <itt_nd_id_inc_sec_9>
*ELGEN, ELSET=cent_spring_els_sec_10
** master element number,  number of elements,  increment in node id, increment in element id
 <itt_spring_el_id_start_sec_10>, <itt_no_el_rows_sec_10>, <itt_nd_id_inc_sec_10>, <itt_nd_id_inc_sec_10>
*ELGEN, ELSET=cent_spring_els_sec_11
** master element number,  number of elements,  increment in node id, increment in element id
 <itt_spring_el_id_start_sec_11>, <itt_no_el_rows_sec_11>, <itt_nd_id_inc_sec_11>, <itt_nd_id_inc_sec_11>
*ELGEN, ELSET=cent_spring_els_sec_12
** master element number,  number of elements,  increment in node id, increment in element id
 <itt_spring_el_id_start_sec_12>, <itt_no_el_rows_sec_12>, <itt_nd_id_inc_sec_12>, <itt_nd_id_inc_sec_12>
*ELGEN, ELSET=cent_spring_els_sec_13
** master element number,  number of elements,  increment in node id, increment in element id
 <itt_spring_el_id_start_sec_13>, <itt_no_el_rows_sec_13>, <itt_nd_id_inc_sec_13>, <itt_nd_id_inc_sec_13>
*ELGEN, ELSET=cent_spring_els_sec_14
** master element number,  number of elements,  increment in node id, increment in element id
 <itt_spring_el_id_start_sec_14>, <itt_no_el_rows_sec_14>, <itt_nd_id_inc_sec_14>, <itt_nd_id_inc_sec_14>
*ELGEN, ELSET=cent_spring_els_sec_15
** master element number,  number of elements,  increment in node id, increment in element id
 <itt_spring_el_id_start_sec_15>, <itt_no_el_rows_sec_15>, <itt_nd_id_inc_sec_15>, <itt_nd_id_inc_sec_15>
*ELGEN, ELSET=cent_spring_els_sec_16
** master element number,  number of elements,  increment in node id, increment in element id
 <itt_spring_el_id_start_sec_16>, <itt_no_el_rows_sec_16>, <itt_nd_id_inc_sec_16>, <itt_nd_id_inc_sec_16>
*ELGEN, ELSET=cent_spring_els_sec_17
** master element number,  number of elements,  increment in node id, increment in element id
 <itt_spring_el_id_start_sec_17>, <itt_no_el_rows_sec_17>, <itt_nd_id_inc_sec_17>, <itt_nd_id_inc_sec_17>
*ELGEN, ELSET=cent_spring_els_sec_18
** master element number,  number of elements,  increment in node id, increment in element id
 <itt_spring_el_id_start_sec_18>, <itt_no_el_rows_sec_18>, <itt_nd_id_inc_sec_18>, <itt_nd_id_inc_sec_18>
*ELGEN, ELSET=cent_spring_els_sec_19
** master element number,  number of elements,  increment in node id, increment in element id
 <itt_spring_el_id_start_sec_19>, <itt_no_el_rows_sec_19>, <itt_nd_id_inc_sec_19>, <itt_nd_id_inc_sec_19>
*ELGEN, ELSET=cent_spring_els_sec_20
** master element number,  number of elements,  increment in node id, increment in element id
 <itt_spring_el_id_start_sec_20>, <itt_no_el_rows_sec_20>, <itt_nd_id_inc_sec_20>, <itt_nd_id_inc_sec_20>
**
** *************************
** E3 - CREATE ELEMENT SETS
** *************************
**
*ELSET, ELSET=cent_spring_els
 cent_spring_els_sec_1, 
 cent_spring_els_sec_2,
 cent_spring_els_sec_3, 
 cent_spring_els_sec_4, 
 cent_spring_els_sec_5, 
 cent_spring_els_sec_6, 
 cent_spring_els_sec_7, 
 cent_spring_els_sec_8, 
 cent_spring_els_sec_9, 
 cent_spring_els_sec_10,
 cent_spring_els_sec_11,
 cent_spring_els_sec_12,
 cent_spring_els_sec_13,
 cent_spring_els_sec_14,
 cent_spring_els_sec_15,
 cent_spring_els_sec_16,
 cent_spring_els_sec_17,
 cent_spring_els_sec_18,
 cent_spring_els_sec_19,
 cent_spring_els_sec_20,
**
** ******************************
** E4 - DEFINE SPRING PROPERTIES
** ******************************
*SPRING, ELSET=cent_spring_els

 1.E3
**
**