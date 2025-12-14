/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92367
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((arr_0 [(signed char)0] [(signed char)0]) <= (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_7 [i_2] [(unsigned char)12] [i_0] [i_0])) : (((/* implicit */int) var_16)))))))) : ((-(((/* implicit */int) ((arr_6 [(_Bool)1] [(unsigned char)5] [(unsigned char)8]) < (((/* implicit */unsigned long long int) 9223372036854775804LL)))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 11; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_18 -= ((/* implicit */short) arr_10 [i_0 - 1] [i_0 - 1] [(unsigned char)6] [i_1]);
                                arr_15 [3LL] [i_0] [i_2] [i_2] [i_2] = (~((+(((/* implicit */int) arr_7 [i_0] [i_1 + 1] [i_0] [10ULL])))));
                                arr_16 [i_0] [i_0 - 1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) (-(((arr_13 [(unsigned char)12] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1]) + (arr_13 [i_0] [i_0] [i_0] [i_0 - 1] [i_0])))));
                                arr_17 [i_1] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_1 [i_0] [i_0]))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned char i_5 = 2; i_5 < 11; i_5 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_6 = 1; i_6 < 12; i_6 += 3) 
                    {
                        arr_25 [i_0] [(unsigned short)1] [i_5] [(unsigned char)12] [i_0] = ((/* implicit */_Bool) (signed char)-90);
                        arr_26 [i_6] [(unsigned char)12] [i_0] [i_6] = ((/* implicit */unsigned char) ((arr_0 [i_0] [i_6]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_1 - 2] [i_5] [i_0])))));
                        arr_27 [i_0] [i_1 - 2] [i_1] [i_5] [i_0] = var_9;
                    }
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (int i_8 = 1; i_8 < 9; i_8 += 1) 
                        {
                            {
                                var_19 -= ((/* implicit */long long int) ((signed char) arr_6 [i_0 - 1] [i_1] [i_0 - 1]));
                                arr_35 [i_8] [i_0] [i_0] [i_0 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)89)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)195))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 13; i_9 += 2) 
                    {
                        for (unsigned long long int i_10 = 2; i_10 < 9; i_10 += 3) 
                        {
                            {
                                var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) var_13))) ? (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) : (arr_5 [i_9])));
                                arr_40 [10] [i_1] [(unsigned char)10] [i_9] [i_1] [i_0] [i_1] |= ((/* implicit */unsigned long long int) arr_9 [i_0 - 1] [i_1 - 1] [i_5 + 1]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 0; i_11 < 13; i_11 += 1) 
                    {
                        for (unsigned long long int i_12 = 1; i_12 < 12; i_12 += 3) 
                        {
                            {
                                arr_46 [i_12 - 1] [i_0] [(unsigned char)9] [i_11] [3ULL] = ((/* implicit */_Bool) var_3);
                                var_21 = ((/* implicit */unsigned char) (~(var_3)));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (long long int i_13 = 0; i_13 < 13; i_13 += 2) 
                {
                    for (int i_14 = 1; i_14 < 11; i_14 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                            {
                                arr_58 [i_0] [i_0] [i_0] [i_0 - 1] [5] [i_0] [i_0 - 1] = ((/* implicit */_Bool) ((303714772) & (((/* implicit */int) arr_44 [i_0 - 1] [i_0 - 1] [i_13] [i_0 - 1] [i_15]))));
                                var_22 *= ((/* implicit */_Bool) (-(((((/* implicit */int) (signed char)127)) * (((/* implicit */int) (unsigned short)24))))));
                                var_23 = ((/* implicit */unsigned char) arr_18 [i_0] [i_13] [i_0]);
                                arr_59 [i_15] [(unsigned char)8] [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)9203)) && (((/* implicit */_Bool) (unsigned short)4006))));
                                var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3050752535U)) ? (arr_52 [i_0] [i_1] [i_13] [i_14] [i_15]) : (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_0] [i_0 - 1])))))) ? (arr_36 [(unsigned short)12] [i_1] [i_0] [(unsigned char)2] [i_15]) : (((/* implicit */unsigned long long int) arr_5 [i_0]))));
                            }
                            /* vectorizable */
                            for (unsigned char i_16 = 0; i_16 < 13; i_16 += 1) 
                            {
                                arr_62 [i_0] [i_0] [i_13] = ((/* implicit */long long int) (unsigned short)33240);
                                var_25 ^= ((/* implicit */long long int) ((((/* implicit */int) var_16)) + (arr_51 [i_0 - 1] [i_13] [i_13] [i_14] [i_16])));
                                arr_63 [i_0] [5U] [4ULL] [i_0] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (signed char)127)) : (-1829629250)));
                            }
                            /* LoopSeq 2 */
                            for (int i_17 = 0; i_17 < 13; i_17 += 3) 
                            {
                                var_26 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) (unsigned char)230)) && (((/* implicit */_Bool) 1829629240))))));
                                arr_68 [i_0] [i_13] [1LL] [i_17] = ((/* implicit */int) (unsigned char)252);
                                arr_69 [2ULL] [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_15)) - (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10))))) >= (min((((/* implicit */unsigned long long int) 9223372036854775807LL)), (6187129848112296158ULL))))))));
                                arr_70 [i_0] [0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((arr_4 [i_0] [(unsigned char)2]), (((/* implicit */unsigned char) ((var_14) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)243)))))))))));
                                arr_71 [i_0] [i_0] [i_13] [i_0] = ((/* implicit */int) max((((/* implicit */long long int) (-(((/* implicit */int) arr_31 [i_14 - 1] [i_14 - 1] [i_14 + 1] [i_14 + 2]))))), ((~(var_9)))));
                            }
                            for (signed char i_18 = 1; i_18 < 11; i_18 += 1) 
                            {
                                arr_74 [i_18] [i_0] [5ULL] [i_0] [i_0 - 1] = ((/* implicit */signed char) (~((~(min((arr_33 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0]), (((/* implicit */int) arr_50 [i_18] [i_13]))))))));
                                arr_75 [i_13] [i_13] [i_13] [i_0] [i_13] [(unsigned char)11] = ((/* implicit */unsigned int) arr_30 [i_1] [i_1] [i_0] [i_1]);
                                var_27 = ((/* implicit */unsigned int) min((12514241485146307646ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_18 + 1] [i_18] [i_18 + 1] [i_18])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_31 [i_18 - 1] [i_18 - 1] [i_18 + 2] [i_18])))))));
                                var_28 = (-(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_72 [i_0 - 1] [i_14 + 1] [i_1 + 1])))));
                            }
                            arr_76 [i_0] [i_13] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) min(((short)8420), (((/* implicit */short) (_Bool)0)))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_19 = 0; i_19 < 24; i_19 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_20 = 0; i_20 < 24; i_20 += 3) 
        {
            for (unsigned char i_21 = 4; i_21 < 23; i_21 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_22 = 0; i_22 < 24; i_22 += 3) 
                    {
                        for (unsigned int i_23 = 0; i_23 < 24; i_23 += 3) 
                        {
                            {
                                arr_87 [i_19] [i_20] [i_21] [i_21] [i_23] [i_21] [i_19] = ((/* implicit */unsigned char) var_9);
                                arr_88 [i_19] [i_19] [i_19] [i_22] [(_Bool)1] [i_20] = ((/* implicit */unsigned int) ((arr_82 [i_20] [i_20] [i_21 - 4]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_78 [i_21 + 1]))));
                            }
                        } 
                    } 
                    arr_89 [i_20] [i_20] [i_21] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_84 [i_21 - 3] [(unsigned char)20] [i_21] [12LL] [i_20])) == (((/* implicit */int) arr_86 [i_21 - 3] [i_21 + 1]))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_24 = 0; i_24 < 24; i_24 += 3) 
        {
            arr_93 [i_24] [i_24] [i_24] = ((/* implicit */signed char) arr_85 [i_24]);
            arr_94 [i_19] [i_24] [i_19] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)249))));
        }
    }
}
