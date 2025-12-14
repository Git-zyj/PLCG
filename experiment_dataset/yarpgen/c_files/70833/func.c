/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70833
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)22763)) ? (((/* implicit */int) ((signed char) var_9))) : (((/* implicit */int) max((min((((/* implicit */short) var_9)), ((short)24576))), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)16322)) || (((/* implicit */_Bool) (short)22765))))))))));
    var_18 ^= ((/* implicit */short) var_15);
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)6987)) != (((/* implicit */int) (unsigned short)7000))));
            arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)58534))) - (-6005343652853088579LL)))) ? (6005343652853088579LL) : (((/* implicit */long long int) ((/* implicit */int) (short)19600)))));
        }
        for (short i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_4 [i_0]);
            arr_10 [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) (signed char)104)))) == (((/* implicit */int) arr_0 [i_0]))));
        }
        arr_11 [i_0] [(signed char)2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (6965983885265186035LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))))) ? (((/* implicit */int) var_1)) : (((int) (_Bool)1))));
        /* LoopSeq 2 */
        for (short i_3 = 0; i_3 < 11; i_3 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_5 = 2; i_5 < 8; i_5 += 4) 
                {
                    for (signed char i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((-1) > (((/* implicit */int) (unsigned char)90)))))));
                            arr_22 [i_6] [i_0] [i_0] [i_0] [i_0] = ((short) (short)22763);
                        }
                    } 
                } 
                var_21 = ((/* implicit */int) ((unsigned char) (short)-18427));
                arr_23 [i_0] [5U] [10U] [i_0] = ((/* implicit */unsigned short) ((long long int) arr_12 [i_4]));
            }
            /* LoopSeq 4 */
            for (short i_7 = 0; i_7 < 11; i_7 += 2) 
            {
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 11; i_8 += 2) 
                {
                    for (short i_9 = 0; i_9 < 11; i_9 += 1) 
                    {
                        {
                            arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_9] [i_7]))));
                            arr_32 [i_0] [i_3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_30 [i_0] [i_3] [10LL] [i_8] [i_9])) - (((/* implicit */int) (unsigned char)131))));
                        }
                    } 
                } 
                arr_33 [i_0] [i_7] [i_7] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_7])) ? (((0) + (((/* implicit */int) (signed char)-117)))) : (((/* implicit */int) ((short) (-9223372036854775807LL - 1LL))))));
                var_22 = ((/* implicit */short) arr_17 [i_0] [i_0] [i_0]);
                arr_34 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (unsigned short)58562);
                arr_35 [i_0] = ((/* implicit */long long int) ((((unsigned int) -6965983885265186036LL)) - (((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_7])))))));
            }
            for (long long int i_10 = 2; i_10 < 10; i_10 += 1) 
            {
                arr_39 [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_20 [i_10 - 1])) * (((/* implicit */int) ((((/* implicit */int) var_14)) >= (((/* implicit */int) var_15)))))));
                /* LoopSeq 3 */
                for (short i_11 = 0; i_11 < 11; i_11 += 4) 
                {
                    arr_42 [i_0] [(_Bool)1] [i_0] = ((/* implicit */long long int) ((-1) + (((/* implicit */int) (short)6144))));
                    var_23 = ((/* implicit */unsigned char) ((((long long int) (short)13630)) / (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (_Bool)1))))));
                    arr_43 [i_0] [i_0] [i_3] [i_10] [i_11] = ((/* implicit */signed char) ((((/* implicit */int) arr_36 [4U] [i_10 + 1] [i_10 - 1])) <= (((/* implicit */int) (unsigned short)65535))));
                }
                for (long long int i_12 = 1; i_12 < 9; i_12 += 1) /* same iter space */
                {
                    arr_47 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((signed char) -6965983885265186047LL));
                    var_24 = ((/* implicit */short) ((arr_24 [i_10 + 1] [i_10 + 1] [i_10 - 2] [i_10 - 1]) - (arr_24 [i_10 + 1] [i_10 + 1] [i_10 - 2] [i_10 - 1])));
                    var_25 += ((/* implicit */short) ((((/* implicit */_Bool) arr_46 [i_0])) ? (6965983885265186035LL) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_0] [i_10 - 2] [i_12 + 1] [i_12] [i_12 + 1] [i_12 - 1])))));
                }
                for (long long int i_13 = 1; i_13 < 9; i_13 += 1) /* same iter space */
                {
                    arr_51 [i_0] [i_3] [i_0] = ((/* implicit */unsigned short) arr_17 [i_10] [(_Bool)1] [i_0]);
                    arr_52 [i_0] [i_0] = ((/* implicit */_Bool) ((signed char) arr_3 [i_10 + 1] [i_3] [i_3]));
                    arr_53 [i_13] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_28 [i_10 - 2] [i_10 - 1] [i_13 - 1] [i_13 + 2] [i_13] [i_13])) ? (((/* implicit */int) arr_28 [i_10 - 1] [i_10 - 2] [i_13 - 1] [i_13 + 2] [i_13] [i_13])) : (((/* implicit */int) arr_28 [i_10 + 1] [i_10 - 2] [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_13]))));
                }
            }
            for (int i_14 = 0; i_14 < 11; i_14 += 2) 
            {
                arr_57 [i_0] [i_3] [i_0] = ((/* implicit */short) ((var_1) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) 3552453042U)) || (((/* implicit */_Bool) arr_19 [i_3] [i_3] [i_3] [(unsigned char)9])))))));
                arr_58 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((var_11) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0])))));
                var_26 = ((/* implicit */unsigned short) ((_Bool) arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]));
            }
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                arr_61 [i_15] [i_0] [10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_46 [i_15])) && (((/* implicit */_Bool) arr_46 [i_0]))));
                /* LoopSeq 3 */
                for (short i_16 = 0; i_16 < 11; i_16 += 2) 
                {
                    /* LoopSeq 1 */
                    for (int i_17 = 0; i_17 < 11; i_17 += 1) 
                    {
                        arr_66 [i_0] [i_0] [i_0] [(unsigned short)3] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_65 [i_16]))) - (arr_54 [i_0] [i_0])));
                        arr_67 [i_0] = ((/* implicit */signed char) 6005343652853088579LL);
                    }
                    arr_68 [i_15] [(short)1] [i_15] [i_0] [i_15] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)22)) & (((14) / (((/* implicit */int) (short)32767))))));
                    arr_69 [i_0] [i_3] [i_3] [3LL] = ((/* implicit */signed char) arr_56 [i_0] [i_3] [i_15] [i_16]);
                    var_27 |= var_15;
                    arr_70 [i_0] [i_0] [i_0] [i_16] = ((/* implicit */short) ((arr_26 [i_15] [i_3]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_3] [i_3] [i_3] [i_3])))));
                }
                for (unsigned char i_18 = 0; i_18 < 11; i_18 += 3) 
                {
                    arr_73 [i_0] [i_0] [i_0] = ((/* implicit */short) ((unsigned char) 1981289302U));
                    arr_74 [(unsigned char)4] [i_0] [i_0] [(unsigned char)4] = ((/* implicit */int) ((short) ((((/* implicit */int) (unsigned short)65535)) / (((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                    arr_75 [i_0] [i_0] [(short)2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_20 [i_0])) : (((/* implicit */int) arr_20 [i_15]))));
                    /* LoopSeq 4 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
                    {
                        var_28 &= ((/* implicit */_Bool) 13);
                        arr_78 [i_0] [i_3] [i_0] [i_0] [i_0] [(unsigned short)1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_13 [(short)6])) : (((/* implicit */int) arr_19 [i_0] [i_3] [(unsigned short)5] [(short)5]))))) ? (((/* implicit */int) arr_18 [i_18] [i_15] [i_3] [i_0])) : (((/* implicit */int) arr_4 [i_18]))));
                        var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_4 [i_15])) : (((/* implicit */int) arr_4 [i_15])))))));
                    }
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
                    {
                        arr_82 [i_20] [i_0] [(unsigned char)7] [i_15] [i_0] [4LL] = ((/* implicit */unsigned short) ((((unsigned int) (signed char)-34)) << (((9223372036854775807LL) - (9223372036854775780LL)))));
                        var_30 = ((/* implicit */int) arr_76 [i_0] [i_0] [i_0] [4U] [i_18] [7]);
                        arr_83 [i_0] [i_0] [i_15] [i_0] [i_0] = ((/* implicit */unsigned int) ((short) 8116499662216187958LL));
                        arr_84 [i_20] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (_Bool)1);
                    }
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) /* same iter space */
                    {
                        arr_87 [i_0] [2LL] [(signed char)2] [(unsigned short)0] [i_18] [i_21] |= ((/* implicit */signed char) ((unsigned short) arr_24 [3] [i_3] [3] [i_18]));
                        arr_88 [i_0] [i_3] [i_15] [i_18] [i_3] = ((/* implicit */_Bool) ((short) 20));
                    }
                    for (unsigned short i_22 = 0; i_22 < 11; i_22 += 4) 
                    {
                        arr_91 [i_22] [i_0] [i_15] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 173193508)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) (signed char)-23))));
                        var_31 = ((/* implicit */long long int) ((signed char) arr_90 [i_0]));
                        arr_92 [i_0] [i_0] [i_0] [i_18] [i_22] = ((unsigned short) arr_36 [i_0] [i_0] [i_0]);
                    }
                }
                for (signed char i_23 = 3; i_23 < 8; i_23 += 3) 
                {
                    arr_95 [i_0] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((((_Bool) 4U)) ? (var_2) : ((~(((/* implicit */int) (short)5070))))));
                    /* LoopSeq 1 */
                    for (short i_24 = 2; i_24 < 9; i_24 += 4) 
                    {
                        var_32 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_23 + 1] [i_23 + 1] [i_23 + 1] [i_23])) || (((/* implicit */_Bool) (short)-1894))));
                        arr_99 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)9)) ? (arr_77 [i_24] [i_24 + 1] [i_24 - 1] [i_24 - 2] [i_24 + 2]) : (arr_77 [i_24 - 2] [i_24 + 1] [i_24 - 1] [i_24 - 1] [i_24 + 2])));
                    }
                    var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3873202024U)) ? (((/* implicit */int) (short)1889)) : (((/* implicit */int) (signed char)64))));
                }
            }
            var_34 += ((/* implicit */unsigned char) ((unsigned short) (short)-1));
        }
        for (short i_25 = 0; i_25 < 11; i_25 += 3) /* same iter space */
        {
            arr_102 [(short)8] [(_Bool)0] [i_0] &= (+(((/* implicit */int) arr_29 [i_0] [i_25] [i_0] [i_25])));
            arr_103 [i_0] [2U] [9U] = ((/* implicit */unsigned short) ((arr_72 [i_0] [i_25] [i_25] [i_25]) ? (((/* implicit */int) arr_72 [i_0] [i_25] [i_25] [i_25])) : (((/* implicit */int) arr_72 [i_0] [i_0] [i_0] [i_0]))));
            var_35 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) arr_25 [i_0] [i_0] [i_0]))));
            var_36 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_45 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [(short)7]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_25] [i_0]))) : (var_4)));
            arr_104 [i_0] [i_0] = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (short)-1711)) ? (3238865634U) : (1073737728U))));
        }
    }
    /* vectorizable */
    for (int i_26 = 0; i_26 < 11; i_26 += 4) 
    {
        var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((((/* implicit */_Bool) (short)-1)) ? (989708942) : (var_5))) : (((/* implicit */int) arr_8 [i_26] [i_26])))))));
        /* LoopNest 2 */
        for (short i_27 = 0; i_27 < 11; i_27 += 1) 
        {
            for (short i_28 = 3; i_28 < 9; i_28 += 2) 
            {
                {
                    arr_113 [i_28] [i_27] [i_27] [i_26] = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) (unsigned char)210))) - (((/* implicit */int) arr_59 [i_28] [i_28] [i_28] [i_28 - 1]))));
                    var_38 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-20))))) >> (((((/* implicit */int) arr_100 [i_28] [i_28] [i_28 + 2])) - (4922)))));
                }
            } 
        } 
        var_39 = ((/* implicit */long long int) (~(4002482111U)));
        var_40 = ((short) arr_45 [i_26] [i_26] [i_26] [i_26] [i_26] [i_26]);
        arr_114 [i_26] = ((/* implicit */unsigned short) ((short) arr_100 [(_Bool)1] [(_Bool)1] [i_26]));
    }
    /* vectorizable */
    for (long long int i_29 = 0; i_29 < 12; i_29 += 3) 
    {
        arr_117 [i_29] [i_29] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_8))) | (4194300LL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)48011)) ? (arr_116 [i_29] [i_29]) : (arr_116 [i_29] [i_29]))))));
        arr_118 [i_29] = ((/* implicit */short) arr_116 [i_29] [1U]);
    }
}
