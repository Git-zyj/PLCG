/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7816
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned int) arr_0 [i_0]);
                var_19 += ((/* implicit */_Bool) (+(min((((/* implicit */long long int) ((arr_1 [i_1]) < (((/* implicit */unsigned long long int) var_1))))), (min((((/* implicit */long long int) arr_2 [i_0] [i_1])), (600442298069417169LL)))))));
                var_20 = max((16785168788369828704ULL), (((/* implicit */unsigned long long int) var_6)));
            }
        } 
    } 
    var_21 |= ((/* implicit */unsigned int) ((_Bool) -1827264505));
    var_22 *= ((/* implicit */unsigned long long int) var_2);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_2 = 0; i_2 < 18; i_2 += 2) 
    {
        /* LoopSeq 3 */
        for (int i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            /* LoopSeq 3 */
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    for (unsigned int i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned int) 0LL);
                            var_24 = ((/* implicit */unsigned int) (~(arr_4 [i_2])));
                            var_25 = ((/* implicit */unsigned long long int) (~(var_7)));
                        }
                    } 
                } 
                arr_20 [i_2] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_2])) ? (((/* implicit */int) (_Bool)1)) : (arr_19 [i_2])));
            }
            for (long long int i_7 = 4; i_7 < 17; i_7 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned int i_8 = 1; i_8 < 17; i_8 += 4) 
                {
                    for (int i_9 = 0; i_9 < 18; i_9 += 4) 
                    {
                        {
                            var_26 = ((((/* implicit */_Bool) 489114074U)) ? ((-9223372036854775807LL - 1LL)) : ((-9223372036854775807LL - 1LL)));
                            var_27 = ((/* implicit */int) ((((/* implicit */unsigned int) var_2)) / (arr_27 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 - 1])));
                        }
                    } 
                } 
                var_28 = ((((/* implicit */_Bool) arr_15 [i_7 - 2] [i_7 + 1] [i_7] [i_7] [i_7 + 1] [i_7 + 1])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) arr_15 [i_7 - 1] [i_7 - 3] [i_7 + 1] [i_7 - 3] [i_7 - 4] [i_7])));
                arr_30 [i_3] [i_3] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_3] [i_3] [i_7 - 4] [i_2] [i_7])) ? (((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (var_1) : (((/* implicit */int) var_14)))) : (((/* implicit */int) var_11))));
            }
            for (int i_10 = 0; i_10 < 18; i_10 += 3) 
            {
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 15; i_11 += 3) 
                {
                    for (unsigned int i_12 = 0; i_12 < 18; i_12 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */_Bool) ((var_17) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) > (9223372036854775806LL)))))));
                            arr_40 [i_12] [i_12] [i_3] [i_12] [i_12] [i_12] [i_12] = var_3;
                            arr_41 [i_3] = arr_7 [i_3];
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (unsigned int i_14 = 0; i_14 < 18; i_14 += 4) 
                    {
                        {
                            arr_49 [i_2] [i_3] [i_10] [i_13] [i_14] = ((/* implicit */unsigned int) arr_34 [i_13]);
                            arr_50 [i_3] [i_13] [i_3] = ((/* implicit */unsigned long long int) var_17);
                        }
                    } 
                } 
            }
            /* LoopSeq 3 */
            for (unsigned long long int i_15 = 1; i_15 < 14; i_15 += 2) /* same iter space */
            {
                /* LoopSeq 4 */
                for (int i_16 = 2; i_16 < 16; i_16 += 2) 
                {
                    arr_58 [i_3] [i_3] [i_15 + 2] [i_16] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 1661575285339722902ULL)) ? (14203240278393833219ULL) : (((/* implicit */unsigned long long int) arr_27 [i_2] [i_3] [i_15 + 1] [i_3])))) | (((/* implicit */unsigned long long int) ((int) arr_51 [i_2] [i_3])))));
                    arr_59 [i_3] [i_3] [i_15 + 1] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) 0ULL)) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_16 + 1] [i_15] [i_3]))) / (arr_27 [i_2] [i_3] [i_15 + 2] [i_16]))) : (((/* implicit */unsigned int) arr_15 [i_15 - 1] [i_16] [i_16] [i_16] [i_16] [i_16]))));
                }
                for (unsigned long long int i_17 = 0; i_17 < 18; i_17 += 2) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (int i_18 = 0; i_18 < 18; i_18 += 4) 
                    {
                        arr_65 [i_17] [i_17] [i_17] [i_17] [i_17] [i_3] [i_17] = arr_35 [i_17] [i_15 + 1] [i_15 + 3] [i_15 + 1] [i_15 + 1] [i_15 - 1];
                        arr_66 [i_2] [i_17] [i_15] [i_17] &= ((/* implicit */unsigned long long int) (+(var_16)));
                    }
                    for (unsigned long long int i_19 = 2; i_19 < 16; i_19 += 4) 
                    {
                        arr_70 [i_15] [i_17] [i_3] = ((/* implicit */_Bool) ((unsigned long long int) ((arr_6 [i_3] [i_3]) + (var_2))));
                        var_30 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_12 [i_19 + 1] [i_17] [i_15 + 4] [i_2]))));
                        arr_71 [i_3] [i_19 + 1] = ((/* implicit */unsigned long long int) ((int) (~(var_5))));
                    }
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        var_31 = ((/* implicit */_Bool) ((6771195101755372825LL) << (((837267432840641573ULL) - (837267432840641573ULL)))));
                        var_32 = ((/* implicit */int) ((((arr_56 [i_15] [i_15] [i_15]) + (9223372036854775807LL))) >> (((arr_56 [i_15 + 2] [i_15] [i_15]) + (3102056009653638611LL)))));
                    }
                    for (long long int i_21 = 0; i_21 < 18; i_21 += 3) 
                    {
                        arr_78 [i_3] [i_15] [i_17] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_15 [i_21] [i_3] [i_15] [i_3] [i_2] [i_2])) / (var_10)));
                        arr_79 [i_2] [i_3] [i_15] [i_15 + 1] [i_3] [i_21] = ((/* implicit */int) (((_Bool)0) ? (3906219082U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_15 + 4] [i_3] [i_15])))));
                    }
                    arr_80 [i_2] [i_3] [i_17] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_42 [i_15 + 3] [i_17] [i_15 + 3] [i_15 + 4])) ? (9223372036854775797LL) : (((/* implicit */long long int) (~(3236111562U))))));
                    arr_81 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_46 [i_3] [i_15 - 1] [i_15 + 2] [i_17] [i_17]);
                }
                for (unsigned long long int i_22 = 0; i_22 < 18; i_22 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (long long int i_23 = 2; i_23 < 15; i_23 += 3) 
                    {
                        var_33 ^= ((/* implicit */int) ((((/* implicit */unsigned int) arr_24 [i_23] [i_22] [i_23] [i_23] [i_23] [i_23 + 1])) > (((((/* implicit */_Bool) 0)) ? (3940528339U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_75 [i_15])))))));
                        var_34 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_3] [i_15 + 1] [i_22]))) & (((((/* implicit */_Bool) arr_54 [i_2] [i_3] [i_3] [i_23])) ? (((/* implicit */unsigned int) arr_16 [i_2] [i_3] [i_22] [i_23 - 2])) : (arr_27 [i_3] [i_15 - 1] [i_22] [i_23])))));
                    }
                    arr_87 [i_22] [i_22] [i_22] [i_3] [i_22] [i_22] = ((/* implicit */unsigned int) arr_39 [i_3] [i_15] [i_15 + 3] [i_15] [i_15 + 3] [i_15 + 2] [i_3]);
                    arr_88 [i_22] [i_22] [i_3] [i_3] [i_3] [i_2] = ((/* implicit */long long int) arr_6 [i_3] [i_15 + 4]);
                    var_35 = ((((/* implicit */long long int) arr_73 [i_15 + 1] [i_15] [i_15] [i_15] [i_15] [i_15 + 4])) & (var_0));
                }
                for (unsigned long long int i_24 = 0; i_24 < 18; i_24 += 2) /* same iter space */
                {
                    arr_91 [i_3] = ((/* implicit */unsigned long long int) arr_7 [i_3]);
                    var_36 = ((/* implicit */_Bool) ((int) var_5));
                }
                var_37 = ((/* implicit */unsigned int) ((arr_76 [i_2] [i_15 - 1] [i_15] [i_3] [i_3] [i_3]) - (((/* implicit */int) arr_47 [i_15 + 3] [i_15 - 1] [i_15 + 3]))));
                var_38 = ((/* implicit */unsigned long long int) 2097151U);
            }
            for (unsigned long long int i_25 = 1; i_25 < 14; i_25 += 2) /* same iter space */
            {
                arr_95 [i_3] [i_3] [i_3] [i_2] = ((/* implicit */_Bool) 16785168788369828713ULL);
                arr_96 [i_2] [i_3] [i_2] |= ((/* implicit */unsigned int) ((arr_83 [i_25 + 3] [i_25 + 2] [i_25] [i_25]) ? (arr_69 [i_25 + 3] [i_25 + 2] [i_25 + 2] [i_25 + 3] [i_25 + 4]) : (arr_69 [i_25 + 3] [i_25 + 2] [i_25] [i_25 + 3] [i_25 + 4])));
                var_39 = ((/* implicit */unsigned long long int) ((unsigned int) arr_72 [i_3] [i_3] [i_25 + 3] [i_3] [i_3] [i_25 + 3]));
            }
            for (unsigned long long int i_26 = 1; i_26 < 14; i_26 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (int i_27 = 0; i_27 < 18; i_27 += 2) 
                {
                    arr_103 [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) (~(var_6)));
                    arr_104 [i_27] [i_3] [i_26] [i_3] = 354438985U;
                    /* LoopSeq 1 */
                    for (unsigned int i_28 = 0; i_28 < 18; i_28 += 4) 
                    {
                        arr_107 [i_2] [i_2] [i_2] [i_2] [i_2] [i_3] [i_2] = ((/* implicit */long long int) ((((((/* implicit */unsigned int) arr_86 [i_26] [i_3])) + (var_9))) / (((/* implicit */unsigned int) var_3))));
                        arr_108 [i_3] [i_26 - 1] [i_26 - 1] [i_28] = ((((/* implicit */unsigned long long int) 4U)) / (15053607414606011154ULL));
                    }
                }
                arr_109 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((_Bool) (_Bool)1));
                arr_110 [i_2] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_106 [i_2] [i_2] [i_26 - 1] [i_2] [i_3] [i_2] [i_3])) ? (arr_106 [i_2] [i_3] [i_26 + 3] [i_26 + 1] [i_26] [i_26] [i_2]) : (arr_106 [i_2] [i_3] [i_26 + 2] [i_2] [i_26] [i_3] [i_26])));
            }
            var_40 = ((/* implicit */unsigned long long int) arr_68 [i_3]);
        }
        for (int i_29 = 0; i_29 < 18; i_29 += 4) 
        {
            arr_113 [i_2] [i_29] [i_29] |= 3U;
            arr_114 [i_2] [i_29] [i_2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
        }
        for (long long int i_30 = 0; i_30 < 18; i_30 += 3) 
        {
            /* LoopSeq 4 */
            for (int i_31 = 0; i_31 < 18; i_31 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_32 = 2; i_32 < 17; i_32 += 3) 
                {
                    for (long long int i_33 = 0; i_33 < 18; i_33 += 4) 
                    {
                        {
                            var_41 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_32 - 2])) ? (((/* implicit */unsigned int) arr_19 [i_32 - 2])) : (arr_5 [i_32 + 1])));
                            var_42 = ((/* implicit */int) arr_115 [i_2]);
                            var_43 = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (var_5) : (((((/* implicit */_Bool) 4294967168U)) ? (var_16) : (var_10)))));
                        }
                    } 
                } 
                arr_124 [i_2] [i_30] [i_31] = ((/* implicit */int) ((((/* implicit */_Bool) arr_94 [i_2] [i_2] [i_2] [i_2])) ? (var_9) : (4292870144U)));
            }
            for (int i_34 = 0; i_34 < 18; i_34 += 4) 
            {
                var_44 ^= ((/* implicit */unsigned long long int) ((((long long int) 3940528333U)) * (((/* implicit */long long int) ((/* implicit */int) var_11)))));
                /* LoopNest 2 */
                for (unsigned int i_35 = 1; i_35 < 16; i_35 += 4) 
                {
                    for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) 
                    {
                        {
                            var_45 = ((arr_115 [i_35 + 1]) >> (((arr_64 [i_2] [i_2] [i_34] [i_35 + 1] [i_36]) - (7973177100501901960ULL))));
                            arr_136 [i_36] [i_35] [i_35] [i_30] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((arr_112 [i_2]) + (9223372036854775807LL))) << (((arr_97 [i_2] [i_2] [i_35] [i_36]) - (3391977126U)))))) - (((((/* implicit */_Bool) arr_73 [i_2] [i_30] [i_34] [i_34] [i_35] [i_36])) ? (((/* implicit */unsigned long long int) arr_27 [i_2] [i_30] [i_34] [i_35])) : (arr_64 [i_2] [i_2] [i_34] [i_35] [i_35])))));
                            var_46 = ((/* implicit */int) ((long long int) (!(var_13))));
                        }
                    } 
                } 
            }
            for (long long int i_37 = 0; i_37 < 18; i_37 += 4) 
            {
                var_47 = ((/* implicit */unsigned int) max((var_47), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_42 [i_2] [i_37] [i_2] [i_2])) ? (arr_42 [i_2] [i_37] [i_30] [i_37]) : (arr_42 [i_2] [i_2] [i_30] [i_37]))))));
                var_48 = ((/* implicit */unsigned int) max((var_48), (((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) arr_83 [i_37] [i_30] [i_30] [i_37]))) & (-8878915925981449155LL))) * (((/* implicit */long long int) ((/* implicit */int) ((arr_8 [i_2] [i_2]) == (var_7))))))))));
                var_49 = ((/* implicit */long long int) ((arr_74 [i_37]) == (arr_74 [i_30])));
            }
            for (_Bool i_38 = 0; i_38 < 1; i_38 += 1) 
            {
                arr_141 [i_2] [i_30] [i_30] [i_30] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_128 [i_2] [i_30] [i_38])) ? (arr_128 [i_38] [i_30] [i_38]) : (var_9)));
                arr_142 [i_2] [i_30] [i_38] = ((/* implicit */_Bool) (((-(14661228407332219221ULL))) >> (((/* implicit */int) ((7) == (-2147483637))))));
                arr_143 [i_2] [i_30] [i_38] &= ((((/* implicit */_Bool) arr_16 [i_38] [i_2] [i_2] [i_2])) ? (-2811983264860600942LL) : (((/* implicit */long long int) arr_16 [i_2] [i_2] [i_38] [i_30])));
            }
            arr_144 [i_30] [i_30] [i_2] = arr_7 [i_2];
        }
        var_50 ^= (-(1482452346));
    }
}
