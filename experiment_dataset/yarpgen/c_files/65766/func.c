/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65766
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_11 = min(((+(max((var_6), (1980132696))))), (var_0));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                for (int i_3 = 3; i_3 < 10; i_3 += 3) 
                {
                    {
                        var_12 = max((max((arr_5 [i_3] [i_2] [i_1 + 2] [i_0]), (((int) -470539527)))), (min((-1647264965), ((-(arr_5 [i_2] [i_2] [i_2] [i_2]))))));
                        arr_11 [i_0] [i_2] [i_2] [i_2] [i_3] &= (~(var_0));
                        arr_12 [6] [i_1] [i_1] [6] [i_2] = ((((/* implicit */_Bool) (-(max((arr_6 [i_0] [i_1] [8] [i_1]), (845880549)))))) ? (min((max((-1350798683), (arr_0 [i_2] [i_2]))), (((((/* implicit */_Bool) var_5)) ? (var_1) : (arr_8 [i_0] [i_1] [i_2] [i_1] [i_2] [i_3]))))) : (((int) arr_9 [i_0] [i_3 - 3] [i_3] [i_3] [i_3])));
                    }
                } 
            } 
        } 
        var_13 = (~(1696461011));
    }
    for (int i_4 = 4; i_4 < 14; i_4 += 2) 
    {
        arr_16 [i_4] = var_8;
        var_14 = max(((~(-1350798679))), (min((arr_14 [i_4 + 1]), (arr_14 [i_4 + 3]))));
        var_15 = ((/* implicit */int) max((var_15), (min((arr_15 [i_4] [i_4]), (((((/* implicit */_Bool) arr_13 [i_4 - 1])) ? (399959069) : (arr_13 [i_4 + 3])))))));
    }
    for (int i_5 = 0; i_5 < 12; i_5 += 4) 
    {
        arr_19 [i_5] = max((min((-863003458), (1284255060))), (((((/* implicit */_Bool) arr_14 [i_5])) ? (arr_14 [i_5]) : (arr_14 [i_5]))));
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((int) arr_17 [i_5])) == ((~(var_9))))))));
        arr_20 [i_5] = ((int) ((0) & (arr_15 [i_5] [i_5])));
        /* LoopSeq 3 */
        for (int i_6 = 0; i_6 < 12; i_6 += 1) 
        {
            arr_24 [i_6] = ((((/* implicit */_Bool) -300090926)) ? (0) : (-12));
            arr_25 [i_5] [i_5] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) min((((arr_17 [i_6]) & (-657051613))), (arr_18 [i_5]))))));
            /* LoopSeq 4 */
            for (int i_7 = 0; i_7 < 12; i_7 += 3) 
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 12; i_8 += 3) 
                {
                    for (int i_9 = 2; i_9 < 11; i_9 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */int) min((var_17), (min((((((/* implicit */_Bool) arr_27 [i_5] [i_5] [6])) ? (arr_27 [i_5] [i_6] [i_7]) : (var_7))), ((-(-6)))))));
                            var_18 = max((((int) 1107657604)), (arr_30 [i_5]));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (int i_10 = 0; i_10 < 12; i_10 += 2) 
                {
                    arr_36 [i_6] [i_7] [i_7] [i_6] [i_6] = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_26 [i_6] [i_6])) ? (arr_35 [11] [i_6] [i_7] [i_6]) : (0)))))) ? ((+(arr_28 [i_5] [i_6] [i_7]))) : (var_2));
                    arr_37 [i_5] [i_5] [i_5] [i_7] [i_6] = (+(max((arr_29 [i_6]), (max((arr_27 [i_5] [i_6] [i_5]), (var_4))))));
                    var_19 = var_0;
                    arr_38 [i_6] [i_6] = (+(min((arr_15 [i_5] [i_10]), (arr_15 [i_7] [i_7]))));
                    arr_39 [i_6] [i_6] [i_7] [i_10] = (-(-2112259579));
                }
                for (int i_11 = 3; i_11 < 11; i_11 += 4) 
                {
                    arr_43 [i_5] [i_6] [i_6] = max((((((/* implicit */_Bool) max((var_2), (var_9)))) ? (var_5) : (arr_28 [i_5] [i_6] [i_11 + 1]))), (max((((((/* implicit */_Bool) -520503473)) ? (-845880550) : (-422777244))), (arr_34 [i_11 - 2] [i_11] [i_11 + 1] [i_11 + 1]))));
                    arr_44 [i_6] = max((-1940173734), (0));
                    arr_45 [i_6] [i_6] [i_7] [9] = min((var_7), ((+((~(1940173734))))));
                    arr_46 [i_5] [i_5] [i_6] [i_11] = ((((/* implicit */_Bool) 6)) ? (-1696461012) : (-836002758));
                }
                for (int i_12 = 3; i_12 < 11; i_12 += 1) 
                {
                    var_20 = ((int) var_3);
                    arr_49 [i_6] [i_6] = max((arr_48 [i_5] [i_6] [i_7]), (min((arr_33 [i_12] [i_12] [i_12] [i_12 - 3] [i_12] [i_12]), (arr_33 [i_12] [5] [i_12] [i_12 - 2] [5] [i_12]))));
                }
            }
            for (int i_13 = 2; i_13 < 11; i_13 += 1) 
            {
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 12; i_14 += 1) 
                {
                    for (int i_15 = 0; i_15 < 12; i_15 += 4) 
                    {
                        {
                            arr_56 [i_6] = max((max((-1696460994), (845880543))), (((((/* implicit */_Bool) arr_22 [i_6])) ? (((((/* implicit */_Bool) arr_26 [i_6] [i_6])) ? (var_7) : (var_5))) : ((+(arr_51 [i_5] [i_6] [i_13 + 1]))))));
                            var_21 = (~(min((267304056), (1940173733))));
                            var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) ((-1939838260) / (-1389839537))))));
                            var_23 = (-(1939838260));
                        }
                    } 
                } 
                var_24 = ((((/* implicit */_Bool) (-(((((var_0) + (2147483647))) >> (((-1939838260) + (1939838264)))))))) ? (-729006431) : (-1696460986));
                /* LoopSeq 3 */
                for (int i_16 = 0; i_16 < 12; i_16 += 1) 
                {
                    var_25 = ((int) (~(min((-242952981), (arr_14 [i_5])))));
                    arr_60 [i_6] [4] [i_13 - 1] [i_13 - 2] [i_13] = ((((/* implicit */_Bool) 1505523424)) ? (min((min((arr_17 [i_6]), (arr_15 [i_6] [i_13]))), ((~(arr_17 [i_5]))))) : (var_5));
                }
                for (int i_17 = 2; i_17 < 11; i_17 += 1) 
                {
                    var_26 ^= ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_26 [i_5] [i_13 + 1]), (17))))));
                    var_27 = arr_22 [i_6];
                }
                for (int i_18 = 2; i_18 < 9; i_18 += 4) 
                {
                    arr_66 [i_6] [i_5] = ((int) (-(-907912726)));
                    /* LoopSeq 1 */
                    for (int i_19 = 0; i_19 < 12; i_19 += 4) 
                    {
                        arr_69 [i_6] [i_19] [i_13 - 1] [i_5] [i_13] = -73686990;
                        arr_70 [i_6] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) max(((+(arr_34 [i_5] [i_5] [i_5] [i_5]))), (arr_48 [i_13 + 1] [i_18 + 2] [i_18 + 3]))))));
                        arr_71 [i_6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_13 - 1] [i_6] [i_13])) ? (var_7) : (arr_50 [i_13 + 1] [i_6] [i_5])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_50 [i_13 + 1] [i_6] [i_6]))))) : ((-(0))));
                    }
                }
            }
            for (int i_20 = 0; i_20 < 12; i_20 += 3) 
            {
                /* LoopNest 2 */
                for (int i_21 = 1; i_21 < 10; i_21 += 2) 
                {
                    for (int i_22 = 0; i_22 < 12; i_22 += 3) 
                    {
                        {
                            arr_80 [i_5] [i_5] [i_5] [i_6] [i_5] [i_21] [i_22] = ((int) (~(-867272439)));
                            arr_81 [i_5] [i_6] = (~((~(((int) arr_42 [3])))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */int) min((var_28), (((int) (-(-981142308))))));
                var_29 = (-(arr_61 [i_5] [i_5] [11] [i_6] [i_6] [i_20]));
            }
            for (int i_23 = 0; i_23 < 12; i_23 += 1) 
            {
                var_30 = min((max((arr_74 [i_5] [11] [i_6] [i_6] [11]), (var_2))), (arr_68 [i_6] [i_6] [i_6] [i_5] [i_6]));
                var_31 = (-(((/* implicit */int) ((var_10) < ((~(-1696749160)))))));
                /* LoopNest 2 */
                for (int i_24 = 0; i_24 < 12; i_24 += 2) 
                {
                    for (int i_25 = 0; i_25 < 12; i_25 += 4) 
                    {
                        {
                            var_32 = -233162405;
                            arr_90 [i_5] [i_24] [i_6] [i_23] [i_23] [i_5] &= ((((((/* implicit */_Bool) (-(1501286075)))) ? ((+(var_2))) : (arr_61 [i_5] [i_5] [i_5] [i_5] [i_25] [0]))) % (-1696461012));
                            var_33 = ((/* implicit */int) min((var_33), (max((arr_13 [i_5]), (var_0)))));
                            arr_91 [i_5] [i_5] [i_23] [i_6] [8] [i_5] = arr_35 [i_25] [i_24] [i_6] [i_6];
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_26 = 0; i_26 < 12; i_26 += 2) 
                {
                    var_34 = var_6;
                    arr_95 [i_5] [i_6] [i_6] = 1133211101;
                }
            }
        }
        for (int i_27 = 0; i_27 < 12; i_27 += 2) 
        {
            /* LoopNest 3 */
            for (int i_28 = 2; i_28 < 9; i_28 += 4) 
            {
                for (int i_29 = 3; i_29 < 10; i_29 += 4) 
                {
                    for (int i_30 = 0; i_30 < 12; i_30 += 2) 
                    {
                        {
                            var_35 = (~(((int) 867272440)));
                            arr_107 [i_29] [i_30] [i_29] [i_28] [i_29] [i_29] = (-(max((max((arr_87 [i_5] [i_28] [11] [i_29] [i_30] [i_29]), (var_0))), ((+(var_4))))));
                            var_36 = 1350798682;
                            arr_108 [i_29] [i_27] [i_27] [i_28] [i_29] [8] [i_28] = ((((/* implicit */_Bool) min((-1867062860), (-820945178)))) ? ((~(((int) arr_98 [i_5] [0])))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_100 [i_27] [i_30]))))))));
                        }
                    } 
                } 
            } 
            arr_109 [8] [i_27] |= arr_58 [i_5] [i_27] [i_27] [i_5];
        }
        for (int i_31 = 0; i_31 < 12; i_31 += 3) 
        {
            var_37 = arr_78 [i_31] [i_5] [i_31] [i_5] [i_5];
            arr_112 [i_5] = ((((((((/* implicit */_Bool) 1696461009)) ? (-144992997) : (0))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))) ? ((~(arr_59 [i_31]))) : (((/* implicit */int) (!(((/* implicit */_Bool) -867272439))))));
            /* LoopSeq 4 */
            for (int i_32 = 0; i_32 < 12; i_32 += 3) 
            {
                arr_115 [i_5] [i_31] [i_32] [i_5] = (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_78 [i_5] [i_5] [i_5] [i_31] [i_5]))))));
                arr_116 [i_5] [i_31] [i_31] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((-181631843), (0)))) ? (arr_114 [i_5] [i_5]) : (((((/* implicit */_Bool) -411716548)) ? (arr_30 [i_5]) : (var_0)))))) ? (var_6) : ((-(arr_62 [i_5] [i_5] [i_32] [7] [i_32] [3]))));
                /* LoopSeq 2 */
                for (int i_33 = 0; i_33 < 12; i_33 += 2) 
                {
                    arr_119 [i_31] [i_33] = min((0), (0));
                    arr_120 [i_5] [i_31] = max(((+(1449499848))), (((arr_26 [i_5] [i_31]) - (arr_18 [i_5]))));
                }
                /* vectorizable */
                for (int i_34 = 2; i_34 < 10; i_34 += 2) 
                {
                    arr_125 [i_31] = var_9;
                    var_38 = (+(73686989));
                    arr_126 [i_5] [i_32] [i_34] = (-(0));
                }
            }
            for (int i_35 = 0; i_35 < 12; i_35 += 3) 
            {
                /* LoopSeq 3 */
                for (int i_36 = 4; i_36 < 10; i_36 += 1) 
                {
                    arr_134 [i_5] [i_35] = arr_88 [5] [i_31] [i_31] [i_31] [i_31];
                    arr_135 [i_31] [i_35] [i_35] = min((((int) arr_102 [7] [i_31] [i_35])), (((int) 840883832)));
                    /* LoopSeq 2 */
                    for (int i_37 = 0; i_37 < 12; i_37 += 3) 
                    {
                        var_39 = ((/* implicit */int) min((var_39), (max((1603238910), (1275008184)))));
                        var_40 += ((((/* implicit */_Bool) min((-288748928), (min((1275008212), (arr_127 [i_35] [i_36 + 2])))))) ? ((~(-9))) : (max((min((var_8), (var_4))), (((((/* implicit */_Bool) arr_52 [i_5] [i_5])) ? (arr_130 [i_37] [i_35] [i_31]) : (arr_133 [i_5] [i_31] [i_35] [i_36]))))));
                        arr_138 [i_5] [i_5] [i_5] [i_5] [8] [i_5] [i_35] = arr_98 [i_35] [i_35];
                        arr_139 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_35] = (~(var_1));
                    }
                    for (int i_38 = 0; i_38 < 12; i_38 += 2) 
                    {
                        var_41 = (+(var_3));
                        var_42 = ((/* implicit */int) max((var_42), ((((!((!(((/* implicit */_Bool) -966952883)))))) ? (arr_35 [i_5] [i_31] [i_5] [i_36]) : ((~(var_0)))))));
                        var_43 = arr_67 [i_5] [i_5];
                    }
                    var_44 = ((/* implicit */int) max((var_44), (max((min((1275008184), (max((-8), (-1877243547))))), (((((((/* implicit */_Bool) arr_136 [i_5] [i_31] [i_35] [i_36] [i_5] [i_5] [i_36])) ? (343500311) : (-14))) | (arr_50 [8] [i_5] [8])))))));
                }
                for (int i_39 = 0; i_39 < 12; i_39 += 2) 
                {
                    /* LoopSeq 1 */
                    for (int i_40 = 0; i_40 < 12; i_40 += 4) 
                    {
                        arr_146 [i_5] [i_31] [i_35] [i_39] [i_40] = ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_47 [i_5]), (min((arr_47 [i_5]), (arr_15 [i_31] [i_39]))))))));
                        var_45 -= ((/* implicit */int) (!(((/* implicit */_Bool) (((~(arr_96 [i_5] [0]))) & ((-(var_1))))))));
                        var_46 |= (-((-(arr_28 [i_5] [0] [i_5]))));
                    }
                    arr_147 [i_5] [i_5] [i_5] [i_35] [i_5] = (((((~(1586349217))) + (2147483647))) << (((((int) var_7)) - (1843274735))));
                    arr_148 [i_31] [i_5] [i_39] &= ((/* implicit */int) (!(((/* implicit */_Bool) (-(var_3))))));
                }
                for (int i_41 = 0; i_41 < 12; i_41 += 3) 
                {
                    var_47 = max((((int) -2066746677)), (var_4));
                    arr_151 [i_35] [i_31] [i_31] [i_41] [i_41] [i_31] = (+(((arr_129 [i_5] [i_35] [i_35] [i_41]) - (0))));
                    arr_152 [i_5] [i_5] [i_5] [i_35] [i_5] [i_5] = (~(1453752045));
                }
                /* LoopNest 2 */
                for (int i_42 = 0; i_42 < 12; i_42 += 3) 
                {
                    for (int i_43 = 2; i_43 < 11; i_43 += 2) 
                    {
                        {
                            arr_159 [i_5] [i_5] [i_35] [i_5] [i_43] = (((!(((/* implicit */_Bool) arr_85 [i_35])))) ? (((((/* implicit */_Bool) arr_85 [i_35])) ? (arr_61 [i_43] [i_31] [i_43 - 1] [i_35] [i_35] [i_42]) : (arr_61 [i_42] [i_42] [i_43 + 1] [i_42] [i_35] [i_35]))) : (((int) arr_61 [i_5] [6] [i_43 - 2] [i_42] [i_35] [7])));
                            var_48 = ((/* implicit */int) min((var_48), (1437221844)));
                        }
                    } 
                } 
                arr_160 [i_35] = ((int) ((int) 1586349210));
                /* LoopSeq 2 */
                for (int i_44 = 4; i_44 < 10; i_44 += 1) 
                {
                    var_49 += max((-19938116), (-3));
                    var_50 = arr_28 [i_5] [i_31] [i_5];
                }
                for (int i_45 = 3; i_45 < 10; i_45 += 4) 
                {
                    /* LoopSeq 3 */
                    for (int i_46 = 0; i_46 < 12; i_46 += 3) /* same iter space */
                    {
                        arr_167 [i_35] = ((/* implicit */int) (!(((/* implicit */_Bool) 0))));
                        var_51 = arr_98 [0] [9];
                        arr_168 [i_5] [i_31] [i_31] [i_35] [i_45] [i_46] [i_35] = ((((/* implicit */_Bool) max((arr_113 [i_5] [i_45 + 2] [i_35]), (arr_113 [i_5] [i_45 - 2] [i_45 - 2])))) ? (min((var_0), (arr_113 [i_5] [i_45 - 3] [i_46]))) : ((+(-1292988248))));
                        var_52 = ((/* implicit */int) max((var_52), (arr_47 [i_45 - 1])));
                    }
                    for (int i_47 = 0; i_47 < 12; i_47 += 3) /* same iter space */
                    {
                        var_53 = ((/* implicit */int) max((var_53), (arr_124 [i_5] [i_5] [i_35] [i_45])));
                        arr_172 [i_35] = min((arr_121 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]), (max(((+(var_5))), (max((arr_110 [i_5] [i_5] [i_5]), (-636097664))))));
                        arr_173 [i_5] [i_5] [i_35] [1] [i_47] = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_129 [i_5] [i_35] [i_45 + 2] [i_5])))));
                        arr_174 [i_35] [i_31] [i_35] [i_45] [i_47] [i_47] = (-(840883832));
                        var_54 = var_1;
                    }
                    for (int i_48 = 0; i_48 < 12; i_48 += 4) 
                    {
                        arr_178 [i_5] [i_31] [2] [i_45] [i_35] = ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_94 [i_45 - 2] [i_31] [i_35] [i_45]), (0))))));
                        var_55 = ((int) 583255192);
                        var_56 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 54584376)) ? (-1241117654) : (631837583)))) ? (-424394155) : (343500312)))) ? (1586349217) : (-867272439));
                        arr_179 [i_5] [i_31] [i_35] [i_45] [i_35] = (~(arr_143 [i_48] [i_45 - 2] [3] [i_31] [i_5] [i_5]));
                    }
                    arr_180 [i_35] = min((((/* implicit */int) ((var_5) < (-1145934082)))), (var_3));
                    arr_181 [i_35] [i_5] [i_5] [4] [i_5] = (~((~(-1586349217))));
                    var_57 = ((/* implicit */int) max((var_57), (max((arr_164 [i_35] [i_45] [i_45 + 1] [i_45] [i_5]), (var_0)))));
                }
            }
            /* vectorizable */
            for (int i_49 = 1; i_49 < 9; i_49 += 1) 
            {
                /* LoopNest 2 */
                for (int i_50 = 1; i_50 < 11; i_50 += 1) 
                {
                    for (int i_51 = 0; i_51 < 12; i_51 += 1) 
                    {
                        {
                            var_58 = -93591762;
                            var_59 = ((/* implicit */int) max((var_59), (arr_82 [i_5] [i_31] [i_51])));
                        }
                    } 
                } 
                arr_189 [i_5] [i_49] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_111 [i_49] [i_31] [i_5]) : (769021681))))));
            }
            for (int i_52 = 4; i_52 < 10; i_52 += 1) 
            {
                var_60 = max(((+(arr_110 [i_52 + 1] [i_52 - 4] [i_52 - 3]))), (max((arr_110 [i_52 - 1] [i_52 + 1] [i_52 - 2]), (arr_110 [i_52 + 2] [i_52 - 2] [i_52 - 1]))));
                var_61 = min((((int) min((var_9), (arr_50 [i_5] [i_5] [i_31])))), (max(((~(0))), (((int) 1586349217)))));
                var_62 = arr_171 [i_52] [i_52] [i_31] [i_31] [i_5];
            }
        }
    }
    var_63 = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) var_1)))));
}
