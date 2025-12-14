/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69652
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 4; i_0 < 13; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 639327636)) ? (((/* implicit */int) (signed char)-46)) : (1905698762)));
        arr_2 [i_0] = ((/* implicit */unsigned short) (~((-(((/* implicit */int) arr_0 [i_0 + 1]))))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_1 [i_0 + 1] [i_0 - 2]))) ? ((-(((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) arr_1 [i_0] [i_0 - 2]))))))) : (((/* implicit */int) var_0))));
    }
    var_13 = ((/* implicit */unsigned short) (_Bool)0);
    /* LoopSeq 1 */
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        var_14 ^= ((/* implicit */short) min((1991824057), (((/* implicit */int) (unsigned short)0))));
        var_15 = ((((/* implicit */_Bool) (+((-(((/* implicit */int) arr_4 [(_Bool)1]))))))) ? ((-(arr_5 [i_1]))) : (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) arr_4 [i_1])))));
        /* LoopSeq 3 */
        for (unsigned short i_2 = 1; i_2 < 21; i_2 += 1) 
        {
            var_16 = ((/* implicit */int) max((var_16), ((+(max((((((/* implicit */_Bool) var_11)) ? (var_11) : (((/* implicit */int) (unsigned short)6)))), ((~(var_11)))))))));
            var_17 = ((/* implicit */unsigned short) (unsigned char)227);
            var_18 = (i_2 % 2 == zero) ? (((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)64))) : (var_7))))) >> (((((/* implicit */int) max((arr_8 [i_2]), (((/* implicit */unsigned short) (unsigned char)48))))) - (32299)))))) : (((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)64))) : (var_7))))) >> (((((((/* implicit */int) max((arr_8 [i_2]), (((/* implicit */unsigned short) (unsigned char)48))))) - (32299))) + (28394))))));
        }
        /* vectorizable */
        for (int i_3 = 3; i_3 < 21; i_3 += 2) /* same iter space */
        {
            var_19 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)60373))));
            var_20 = var_10;
            /* LoopSeq 2 */
            for (int i_4 = 0; i_4 < 24; i_4 += 2) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_5 = 1; i_5 < 22; i_5 += 2) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (int i_6 = 1; i_6 < 23; i_6 += 1) /* same iter space */
                    {
                        arr_21 [i_1] [(unsigned short)20] [i_3 + 3] [(unsigned short)18] [i_5] [i_4] [i_6] &= ((/* implicit */unsigned short) (unsigned char)227);
                        var_21 = ((/* implicit */int) ((short) var_2));
                        arr_22 [i_1] [i_1] [i_3] [i_3] [i_4] [(_Bool)0] [i_5] = ((/* implicit */int) ((unsigned char) arr_7 [i_5 + 2]));
                        arr_23 [(unsigned short)5] [i_5] [i_3] = ((var_2) ? (((/* implicit */int) arr_11 [i_6 + 1] [i_5 + 2] [i_3 + 2])) : (var_10));
                    }
                    for (int i_7 = 1; i_7 < 23; i_7 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */int) var_8);
                        var_23 = ((/* implicit */unsigned short) 67108863U);
                    }
                    for (short i_8 = 0; i_8 < 24; i_8 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned short) ((arr_24 [i_3] [i_4]) ? (var_11) : (arr_26 [i_5] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5 + 2])));
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)32092)) : (-1228760859)));
                        arr_29 [i_1] [i_1] [i_3 - 1] [i_3 - 2] [i_5] [i_5] [(unsigned short)17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4])) ? (((/* implicit */int) (unsigned short)0)) : (arr_28 [i_1] [i_1] [i_1] [i_5] [(unsigned char)20] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((591941942U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) (+(144143285)))) : (var_9)));
                    }
                    arr_30 [i_1] [i_3] [i_5] [i_4] [i_4] [i_5 - 1] = ((/* implicit */_Bool) (unsigned short)4);
                    arr_31 [i_5] [i_4] [i_3] [i_5] = ((var_2) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) : (((((var_9) + (9223372036854775807LL))) >> (((((/* implicit */int) var_4)) - (8345))))));
                    arr_32 [i_5] [i_4] [i_3 + 2] [i_3] [i_5] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_2)))) & (var_7)));
                    var_27 = ((((/* implicit */_Bool) var_8)) ? (arr_15 [i_5 - 1] [i_5 + 2] [i_3 + 2] [i_3 - 1]) : (var_11));
                }
                for (unsigned short i_9 = 1; i_9 < 22; i_9 += 2) /* same iter space */
                {
                    var_28 = ((/* implicit */unsigned short) ((arr_25 [i_1] [i_9] [i_4] [i_3 - 3] [20]) ? (((/* implicit */int) arr_18 [i_1] [9U] [i_9 + 2] [i_9] [i_9 - 1] [i_9])) : (((/* implicit */int) arr_11 [i_1] [(signed char)3] [i_9]))));
                    arr_36 [i_1] [i_3] [i_4] [i_9] = ((((/* implicit */_Bool) arr_33 [i_9 + 1] [i_4] [i_3] [i_1])) ? (((/* implicit */int) arr_6 [i_9 - 1] [i_9] [i_1])) : (((/* implicit */int) arr_6 [i_3 + 3] [i_9] [i_3 + 2])));
                    var_29 = ((/* implicit */int) arr_18 [(unsigned short)6] [i_9 + 2] [i_9 + 2] [(signed char)9] [i_9] [i_9]);
                    /* LoopSeq 1 */
                    for (short i_10 = 4; i_10 < 23; i_10 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_10 - 2])) ? (((/* implicit */int) arr_4 [i_10 - 2])) : (((/* implicit */int) arr_4 [i_10 - 1]))));
                        var_31 += ((/* implicit */signed char) (unsigned char)41);
                        var_32 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)57)) : (((/* implicit */int) (unsigned char)123))))) ? (((/* implicit */int) arr_18 [(unsigned char)19] [i_1] [i_9] [i_9] [i_10 + 1] [i_10])) : (((/* implicit */int) (unsigned char)214)));
                        var_33 = ((/* implicit */int) ((unsigned short) var_11));
                    }
                }
                for (unsigned short i_11 = 1; i_11 < 22; i_11 += 2) /* same iter space */
                {
                    var_34 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)9)) - (arr_15 [i_11 + 2] [i_3 + 3] [4U] [(unsigned short)5])));
                    var_35 = ((/* implicit */unsigned short) (-(var_9)));
                    arr_41 [i_4] [i_4] [i_4] [(unsigned char)13] [i_4] [(signed char)3] = ((((/* implicit */int) (unsigned short)2899)) * (((/* implicit */int) arr_37 [i_3 - 1] [i_3] [(unsigned short)21] [i_4])));
                }
                /* LoopSeq 2 */
                for (int i_12 = 0; i_12 < 24; i_12 += 3) /* same iter space */
                {
                    var_36 &= ((/* implicit */unsigned short) ((unsigned char) arr_27 [i_3 + 1] [i_3 + 1] [i_4] [i_3] [i_3]));
                    var_37 = ((/* implicit */signed char) arr_28 [i_3] [i_3] [i_3 - 2] [i_4] [i_3] [i_3]);
                    /* LoopSeq 1 */
                    for (int i_13 = 0; i_13 < 24; i_13 += 1) 
                    {
                        arr_47 [i_3] [i_12] [i_12] [i_1] [i_4] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 1228760839)) ? (((/* implicit */int) (unsigned short)65535)) : (-873621265)))));
                        arr_48 [(signed char)22] [i_3] = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) arr_42 [i_12] [i_4] [i_3] [i_1])) ? (arr_12 [23]) : (((/* implicit */int) var_8)))));
                    }
                }
                for (int i_14 = 0; i_14 < 24; i_14 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (short i_15 = 4; i_15 < 21; i_15 += 2) 
                    {
                        arr_53 [i_15 - 2] [(signed char)6] [i_15] [i_1] [i_3] [(unsigned short)15] = ((/* implicit */int) arr_18 [(unsigned short)17] [i_3 + 3] [i_3] [i_3] [i_3 + 2] [i_3]);
                        arr_54 [(short)19] [i_4] [(unsigned char)1] [(_Bool)1] [i_4] [(unsigned short)5] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))));
                    }
                    arr_55 [18] [i_14] [10] [4U] [i_3 + 2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_35 [i_1] [i_3 - 1] [i_1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_16 [i_14] [7] [(_Bool)1] [i_3 - 3]))));
                    var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)50)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_17 [i_14]))));
                    var_39 += ((/* implicit */int) ((unsigned short) var_4));
                }
            }
            for (unsigned char i_16 = 2; i_16 < 21; i_16 += 4) 
            {
                arr_59 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -849671166)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (short i_17 = 0; i_17 < 24; i_17 += 1) 
                {
                    for (int i_18 = 4; i_18 < 23; i_18 += 3) 
                    {
                        {
                            var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 3117228673U)) ? (((var_0) ? (var_11) : (((/* implicit */int) var_4)))) : (((/* implicit */int) (unsigned char)29)))))));
                            var_41 += ((/* implicit */int) arr_33 [i_16 - 1] [i_17] [i_18 + 1] [i_18]);
                        }
                    } 
                } 
                arr_66 [(signed char)15] [i_3 + 1] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_28 [i_3 - 2] [i_16 - 2] [i_16] [i_16] [8] [i_16])) ? (2417503292U) : (((/* implicit */unsigned int) -1))));
                /* LoopNest 2 */
                for (unsigned short i_19 = 0; i_19 < 24; i_19 += 4) 
                {
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        {
                            var_42 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)54938))));
                            var_43 = ((/* implicit */unsigned short) ((unsigned int) arr_65 [i_3 - 1] [i_3] [i_20] [i_20] [i_20] [i_20] [(unsigned short)18]));
                            arr_72 [i_1] [i_3] [(unsigned short)0] [i_19] [6] = ((/* implicit */unsigned short) var_2);
                        }
                    } 
                } 
            }
            /* LoopSeq 4 */
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                arr_76 [i_21] [i_3 - 1] [i_21] = ((/* implicit */unsigned char) var_8);
                /* LoopSeq 3 */
                for (int i_22 = 3; i_22 < 20; i_22 += 2) 
                {
                    var_44 = (~(((/* implicit */int) arr_70 [i_22 - 1] [i_3 - 1] [i_3] [i_1])));
                    var_45 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_3 + 3] [i_3] [i_3 + 3] [i_3 + 2] [i_3 + 3] [i_3 + 2])) ? (((/* implicit */int) (unsigned short)32768)) : (((((/* implicit */_Bool) -144143285)) ? (((/* implicit */int) (signed char)9)) : (-1193702127)))));
                    arr_80 [i_1] [i_3] [0U] [i_22 - 2] [(signed char)14] |= ((/* implicit */unsigned int) ((unsigned short) arr_14 [i_3] [i_3 + 1] [i_3]));
                }
                for (unsigned char i_23 = 2; i_23 < 23; i_23 += 2) 
                {
                    var_46 = ((/* implicit */int) max((var_46), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)8)) << (((2044970948) - (2044970948)))))) ? (arr_28 [i_3 - 1] [i_3] [i_3] [i_23] [i_3] [i_3 - 3]) : (((/* implicit */int) arr_13 [i_3 - 1] [i_3 + 3] [i_3 + 2]))))));
                    var_47 = ((/* implicit */unsigned short) arr_69 [i_3] [i_3] [i_3] [i_3 - 3] [(signed char)10]);
                }
                for (unsigned short i_24 = 0; i_24 < 24; i_24 += 1) 
                {
                    arr_87 [i_21] [i_21] [i_21] [4] = -1269425019;
                    arr_88 [i_21] = ((/* implicit */long long int) arr_58 [i_21] [6] [i_24] [i_24]);
                    /* LoopSeq 3 */
                    for (unsigned short i_25 = 2; i_25 < 20; i_25 += 1) 
                    {
                        var_48 = ((/* implicit */int) min((var_48), ((~(1621817111)))));
                        arr_92 [i_21] [i_24] [i_21] [i_21] = ((((/* implicit */int) arr_50 [i_25 - 1] [i_25] [i_25 + 2] [i_3 - 3])) ^ (((((/* implicit */_Bool) (unsigned short)29247)) ? (30) : (((/* implicit */int) arr_65 [i_25 + 3] [(unsigned short)20] [i_25] [i_25 + 1] [i_25] [15] [(unsigned short)3])))));
                        arr_93 [i_25 + 4] [i_24] [i_21] [i_21] [i_3] [i_1] = ((/* implicit */unsigned short) (((_Bool)1) ? (1911621145654554031LL) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                        arr_94 [i_1] [i_1] [i_1] [i_21] [(unsigned char)8] [i_1] = var_0;
                    }
                    for (unsigned short i_26 = 3; i_26 < 23; i_26 += 3) /* same iter space */
                    {
                        arr_97 [i_21] [i_24] [4] [i_3] [i_21] = ((/* implicit */long long int) ((int) -144143282));
                        arr_98 [i_1] [10] [i_21] [i_21] [i_24] [i_26 - 3] = ((/* implicit */unsigned short) var_6);
                        var_49 = ((/* implicit */_Bool) max((var_49), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3 - 3])) ? (((/* implicit */int) (unsigned short)37224)) : ((+(((/* implicit */int) (unsigned short)64636)))))))));
                    }
                    for (unsigned short i_27 = 3; i_27 < 23; i_27 += 3) /* same iter space */
                    {
                        var_50 = ((/* implicit */_Bool) max((var_50), (((/* implicit */_Bool) arr_82 [i_27 - 2] [(unsigned short)19] [i_24] [i_24]))));
                        var_51 = ((/* implicit */long long int) (unsigned short)65535);
                    }
                }
            }
            for (short i_28 = 0; i_28 < 24; i_28 += 4) 
            {
                /* LoopSeq 1 */
                for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_30 = 0; i_30 < 24; i_30 += 2) 
                    {
                        arr_110 [(unsigned short)11] [i_30] [i_30] [(unsigned short)19] [i_30] [i_30] [i_30] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_52 [i_3 + 1] [i_3 + 3] [i_3 + 2] [(unsigned short)20] [i_3 + 1])))));
                        var_52 = -814355667;
                    }
                    for (int i_31 = 0; i_31 < 24; i_31 += 4) 
                    {
                        arr_113 [(unsigned char)5] = ((((/* implicit */_Bool) (unsigned short)909)) ? (((/* implicit */int) (unsigned char)209)) : (((/* implicit */int) (unsigned short)26)));
                        var_53 = ((/* implicit */short) (+(((/* implicit */int) arr_71 [i_31] [i_3 - 2]))));
                    }
                    arr_114 [(unsigned short)0] [i_3 - 2] [0] [i_29] = ((unsigned short) var_10);
                }
                var_54 = ((/* implicit */unsigned char) (+((+(var_9)))));
                /* LoopNest 2 */
                for (unsigned short i_32 = 0; i_32 < 24; i_32 += 1) 
                {
                    for (unsigned short i_33 = 0; i_33 < 24; i_33 += 2) 
                    {
                        {
                            var_55 = ((/* implicit */unsigned short) var_0);
                            arr_119 [i_1] [(_Bool)1] [i_28] [10] [i_33] = 1073741823;
                            var_56 = ((/* implicit */_Bool) ((((arr_51 [1] [i_3 + 1] [i_28] [i_32] [(_Bool)1]) ? (((/* implicit */unsigned int) 0)) : (var_5))) - (var_5)));
                        }
                    } 
                } 
            }
            for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) /* same iter space */
            {
                var_57 = ((/* implicit */_Bool) max((var_57), (((/* implicit */_Bool) (-(((/* implicit */int) arr_109 [i_3 - 1] [i_3 + 1] [i_34])))))));
                var_58 = ((/* implicit */unsigned short) max((var_58), (((/* implicit */unsigned short) ((short) var_8)))));
            }
            for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) /* same iter space */
            {
                var_59 = ((/* implicit */signed char) arr_78 [i_35] [i_35] [i_35] [i_3 - 2] [i_3 - 1] [i_3 + 2]);
                var_60 = ((/* implicit */short) ((int) var_6));
            }
        }
        /* vectorizable */
        for (int i_36 = 3; i_36 < 21; i_36 += 2) /* same iter space */
        {
            arr_128 [(signed char)14] [i_36] = ((((/* implicit */int) var_2)) & (arr_28 [i_36 + 3] [i_36 - 1] [(unsigned char)0] [(unsigned char)0] [14] [i_36 + 3]));
            var_61 = ((/* implicit */unsigned short) ((646114362U) - (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (signed char)-100))))));
            /* LoopSeq 1 */
            for (unsigned short i_37 = 0; i_37 < 24; i_37 += 4) 
            {
                /* LoopNest 2 */
                for (int i_38 = 4; i_38 < 21; i_38 += 3) 
                {
                    for (long long int i_39 = 0; i_39 < 24; i_39 += 1) 
                    {
                        {
                            arr_135 [i_39] [i_38] [(unsigned short)23] [i_38 - 1] [i_38] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (var_10) : (((/* implicit */int) arr_11 [i_36] [6] [i_38]))));
                            var_62 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -814355667))));
                        }
                    } 
                } 
                var_63 = ((/* implicit */_Bool) ((unsigned short) arr_116 [i_36 - 1] [i_36]));
                var_64 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 746458080)) ? (((/* implicit */int) arr_65 [15] [i_36] [i_36 + 1] [i_36] [i_36 + 2] [i_36] [i_36 + 1])) : (((/* implicit */int) (unsigned short)25675))));
                var_65 = arr_61 [i_37] [i_36 + 3] [i_1];
            }
            arr_136 [1] [i_36] = (_Bool)0;
        }
    }
}
