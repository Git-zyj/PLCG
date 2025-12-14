/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58575
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
    var_15 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_5)))) || (((/* implicit */_Bool) min((var_3), (((/* implicit */long long int) (unsigned char)0))))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((3772843308U) != (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) : (((/* implicit */int) (signed char)-29)))) : (((/* implicit */int) var_5))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            arr_5 [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_0 + 2]))));
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 1740788155)) ? (12876769485421591165ULL) : (((/* implicit */unsigned long long int) arr_1 [i_1])))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12876769485421591165ULL)) ? (17996806323437568LL) : (-17996806323437568LL))))));
            arr_7 [i_0] [i_1] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned short) (((~(-17996806323437600LL))) * (((/* implicit */long long int) ((((((/* implicit */int) arr_0 [i_0])) + (2147483647))) >> (((arr_2 [i_1] [i_1]) - (37954636U))))))))) : (((/* implicit */unsigned short) (((~(-17996806323437600LL))) * (((/* implicit */long long int) ((((((((/* implicit */int) arr_0 [i_0])) - (2147483647))) + (2147483647))) >> (((arr_2 [i_1] [i_1]) - (37954636U)))))))));
        }
        for (short i_2 = 4; i_2 < 8; i_2 += 1) 
        {
            arr_10 [2] [i_2] [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (unsigned short)10670))))), (((((/* implicit */_Bool) var_11)) ? (arr_2 [i_2 - 1] [i_0]) : (((/* implicit */unsigned int) -777476349))))));
            arr_11 [0] &= ((/* implicit */unsigned char) arr_4 [i_0 - 1]);
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopSeq 2 */
            for (long long int i_4 = 3; i_4 < 8; i_4 += 2) 
            {
                arr_17 [i_0] [i_3] [8] = ((/* implicit */unsigned char) var_3);
                arr_18 [(signed char)8] [(signed char)4] [(signed char)4] [(signed char)8] = ((/* implicit */unsigned short) (-(5569974588287960433ULL)));
            }
            for (long long int i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                /* LoopSeq 2 */
                for (signed char i_6 = 1; i_6 < 9; i_6 += 4) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_7 = 1; i_7 < 9; i_7 += 1) 
                    {
                        arr_25 [(signed char)4] [i_3] [i_5] [i_0] [i_7 - 1] = ((/* implicit */unsigned long long int) ((max((arr_20 [i_6] [i_6] [i_6 + 1] [i_6 + 1]), (((/* implicit */long long int) arr_24 [i_0] [i_7 - 1] [i_6] [i_6] [i_6] [i_6 + 1] [i_0])))) != (((/* implicit */long long int) max((((/* implicit */int) (unsigned char)162)), (arr_24 [i_0] [0LL] [i_7] [i_7] [i_7] [i_7] [i_0]))))));
                        arr_26 [i_7] [i_5] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((var_3) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)3)))))) ^ (((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) var_2)))))))) || (((/* implicit */_Bool) ((unsigned short) max((arr_24 [i_5] [(signed char)4] [(short)6] [(short)6] [i_5] [i_3] [i_5]), (((/* implicit */int) (unsigned char)145))))))));
                        arr_27 [i_0] [i_5] [(short)8] [i_0] = ((/* implicit */signed char) arr_23 [0] [i_0 + 2] [i_5] [i_6] [i_6] [6ULL]);
                        arr_28 [i_0] [i_3] [8LL] [3ULL] [i_3] [i_3] [i_0] = ((/* implicit */short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [i_0 - 2]))))), (((var_14) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_19 [i_6] [i_6] [i_6] [i_0]))))) : (min((var_6), (((/* implicit */long long int) var_0))))))));
                        arr_29 [i_0] [i_0] [i_6] [i_6] [i_7] [i_3] [i_6] = ((/* implicit */short) var_9);
                    }
                    for (unsigned char i_8 = 1; i_8 < 8; i_8 += 1) 
                    {
                        arr_32 [(signed char)8] [i_0] [i_5] [i_0 + 2] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)53)) << (((arr_23 [(unsigned char)3] [2LL] [i_0 + 2] [i_0] [i_0 - 2] [i_8]) + (174748105))))) | ((~(((/* implicit */int) var_5))))));
                        arr_33 [i_0] [i_0] [i_5] [i_6 - 1] [i_8 + 1] = ((/* implicit */short) max(((!(((/* implicit */_Bool) ((signed char) arr_30 [i_0] [i_0]))))), (((((/* implicit */_Bool) arr_14 [i_0])) || (((/* implicit */_Bool) ((short) var_3)))))));
                        arr_34 [i_0] [i_8] [i_5] [(unsigned short)7] [(unsigned char)1] = ((/* implicit */int) -17996806323437568LL);
                        arr_35 [i_0] [i_0] [i_5] [i_5] [i_0 + 2] [i_3] [i_5] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) | (((/* implicit */int) var_5))))) ? (((/* implicit */int) ((signed char) min((arr_8 [i_3]), (((/* implicit */long long int) arr_16 [i_5] [i_0])))))) : (((((/* implicit */int) (unsigned char)86)) / (((/* implicit */int) (unsigned short)63075))))));
                    }
                    for (long long int i_9 = 1; i_9 < 9; i_9 += 1) 
                    {
                        arr_39 [i_5] [i_5] [i_3] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_5] [6LL])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_3)))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_12))))));
                        arr_40 [i_0] [i_3] [i_3] [i_5] [i_6] [i_9] [i_0] = ((/* implicit */signed char) (~(((((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0] [i_0] [i_5] [i_0] [8U] [i_6 - 1]))) & (arr_20 [(signed char)5] [(signed char)5] [i_5] [i_9 + 1])))));
                    }
                    arr_41 [i_5] [i_3] [i_5] [(unsigned short)2] |= ((/* implicit */long long int) arr_13 [i_3]);
                }
                for (unsigned char i_10 = 3; i_10 < 7; i_10 += 4) 
                {
                    arr_44 [i_3] [i_0] [i_3] [i_3] [i_0] [(signed char)0] = ((/* implicit */unsigned int) arr_0 [i_0]);
                    arr_45 [i_0] [i_3] [i_10] = ((/* implicit */unsigned int) ((unsigned long long int) 4954517925682536327ULL));
                    arr_46 [i_10] [i_0] [i_5] [i_3] [i_0] [i_0 + 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) 12876769485421591150ULL))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned short)63075)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)118))))))) : (((unsigned long long int) (_Bool)1))));
                }
                arr_47 [i_0] [i_0] = var_13;
                arr_48 [i_0] [i_5] [i_5] [i_5] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_10))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned short)8188)))) : (((((/* implicit */_Bool) arr_31 [i_0] [i_0 - 2] [i_0] [i_5] [i_0])) ? (((/* implicit */long long int) (-(((/* implicit */int) var_2))))) : (min((((/* implicit */long long int) (unsigned short)28633)), (var_10)))))));
            }
            arr_49 [8LL] = ((/* implicit */int) (_Bool)1);
            /* LoopNest 3 */
            for (signed char i_11 = 2; i_11 < 6; i_11 += 4) 
            {
                for (long long int i_12 = 2; i_12 < 9; i_12 += 4) 
                {
                    for (unsigned short i_13 = 1; i_13 < 8; i_13 += 1) 
                    {
                        {
                            arr_58 [i_0] [i_0] [i_3] [i_3] [i_11] [i_12 - 2] [i_0] = ((/* implicit */_Bool) (~(var_3)));
                            arr_59 [6LL] [i_0] [i_3] [3ULL] [i_12] [i_0] = ((/* implicit */_Bool) (-((-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_31 [i_11 - 1] [i_11] [i_11] [i_0] [i_11]))) >= (arr_38 [i_0] [i_3] [i_12 - 1] [(unsigned char)1] [i_11]))))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_15 = 1; i_15 < 6; i_15 += 1) 
            {
                arr_65 [i_0] [4] [i_14] [i_15] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((arr_62 [i_0] [(signed char)0]) & (((/* implicit */long long int) ((/* implicit */int) var_7)))))) - (((((/* implicit */_Bool) var_11)) ? (arr_63 [(signed char)0] [(signed char)0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15)))))));
                arr_66 [3LL] [3LL] [i_0] [3LL] = ((/* implicit */unsigned int) ((((/* implicit */int) var_9)) < (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)0))))));
            }
            for (long long int i_16 = 1; i_16 < 8; i_16 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned char i_17 = 0; i_17 < 10; i_17 += 2) 
                {
                    arr_73 [i_0] [i_17] [i_0] [i_17] = ((/* implicit */int) 1013350260U);
                    arr_74 [i_0] [(_Bool)1] [i_16 + 1] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)16256))));
                    arr_75 [(signed char)0] [i_0] [i_14] [i_14] [i_0] [(signed char)0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 0))));
                }
                for (unsigned char i_18 = 0; i_18 < 10; i_18 += 1) 
                {
                    arr_78 [5] [i_0] [i_16] [(short)3] = var_0;
                    arr_79 [i_0] [i_14] [i_0] [i_18] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)0)) && (((/* implicit */_Bool) arr_20 [i_18] [i_16] [i_14] [i_0 - 1]))));
                    arr_80 [i_14] [i_0] [i_0] [i_18] = ((((/* implicit */_Bool) var_0)) ? ((-(((/* implicit */int) var_2)))) : (((/* implicit */int) ((((/* implicit */int) var_13)) != (var_8)))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_19 = 1; i_19 < 9; i_19 += 2) 
                    {
                        arr_83 [(signed char)4] [i_0] [i_16 - 1] [i_14] [i_0] [i_0] = (~(((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */int) (unsigned char)139)) : (((/* implicit */int) arr_31 [i_0] [i_14] [i_16] [i_0] [i_16])))));
                        arr_84 [i_0] [i_0] [i_16] [3] [i_0] [i_14] [i_14] = ((/* implicit */long long int) var_7);
                    }
                    for (signed char i_20 = 2; i_20 < 9; i_20 += 4) 
                    {
                        arr_89 [i_0] [i_20] [i_16 + 1] [i_20] [i_20 - 1] = ((/* implicit */unsigned char) 1369200726);
                        arr_90 [i_0] [i_0] [i_16] [i_0] [i_20] [i_14] [(unsigned short)8] = var_1;
                        arr_91 [i_18] [i_18] [i_20] [(signed char)2] [i_0] &= ((/* implicit */unsigned short) ((unsigned char) arr_69 [i_0] [i_0] [i_20] [i_0] [i_0] [i_0]));
                        arr_92 [i_0] [i_0] [i_20] [i_18] = ((/* implicit */int) (unsigned short)16256);
                    }
                }
                for (unsigned short i_21 = 1; i_21 < 9; i_21 += 3) 
                {
                    arr_95 [i_0] [i_0 + 2] [i_0] [i_0] = var_6;
                    /* LoopSeq 1 */
                    for (int i_22 = 3; i_22 < 7; i_22 += 2) 
                    {
                        arr_98 [i_0] [i_16 - 1] = ((/* implicit */short) -1369200732);
                        arr_99 [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)508))));
                    }
                    arr_100 [(unsigned char)4] [i_16] [(unsigned char)4] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_88 [i_0 - 1] [(short)6] [6LL] [i_0 - 2] [i_0]))));
                }
                arr_101 [i_16] [9U] [9U] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
            }
            arr_102 [i_0] [i_14] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_0] [(short)5]))) | (12876769485421591165ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) >= (arr_62 [i_0] [i_0]))))) : (((-2584340056803881615LL) % (-8502394690476758710LL)))));
        }
        arr_103 [i_0] = 1692255812U;
    }
    var_16 = ((/* implicit */_Bool) ((max((((/* implicit */int) var_5)), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12)))))) ^ ((-(((/* implicit */int) var_12))))));
    var_17 = ((/* implicit */_Bool) max((((/* implicit */int) ((signed char) (signed char)-71))), ((-((((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7))))))));
    var_18 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((var_11) != (((/* implicit */int) (signed char)-51))))) : (((((/* implicit */int) var_9)) | (((/* implicit */int) var_12)))))), (((/* implicit */int) (_Bool)1))));
}
