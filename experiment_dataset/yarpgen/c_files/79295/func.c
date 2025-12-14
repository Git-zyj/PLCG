/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79295
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_5 [i_0] [10U] &= ((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-11)) && (((/* implicit */_Bool) var_6))))) >= (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (var_9) : (((/* implicit */int) var_8)))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_1] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-30)) < (((/* implicit */int) (signed char)-30))));
                                arr_14 [i_0] [i_3] [i_2] [i_3] [i_4] [i_1] = ((/* implicit */unsigned int) min(((+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) / (arr_9 [i_0] [(_Bool)1] [i_2] [i_1] [i_3] [i_4]))))), (((/* implicit */unsigned long long int) ((4266512265U) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_2)))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned char i_6 = 0; i_6 < 11; i_6 += 2) 
                    {
                        {
                            var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) (~((~((~(var_3))))))))));
                            arr_20 [i_0] [(unsigned short)0] [i_6] [i_6] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_9 [i_0] [i_1] [i_1] [i_6] [i_6] [i_0])))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                            arr_21 [i_0] [3U] [i_1] [(short)0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_17 [i_5] [i_1])))) != (4266512265U)));
                            arr_22 [i_1] [i_0] [i_5] [i_1] = ((/* implicit */signed char) min((arr_2 [i_0]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -9125390796407687102LL)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_1] [i_0])))))) ? (((/* implicit */int) ((-1019139696) < (((/* implicit */int) (signed char)-6))))) : (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_5])) < (((/* implicit */int) var_5))))))))));
                            arr_23 [i_1] = ((/* implicit */int) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_9)) : (min((8792970956494350326LL), (((/* implicit */long long int) arr_8 [i_1] [i_1] [2LL] [i_6] [i_1] [i_0])))))), (((/* implicit */long long int) 28455048U))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_7 = 2; i_7 < 13; i_7 += 4) 
    {
        arr_26 [i_7] = (-(((/* implicit */int) arr_24 [i_7 - 2])));
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 2) 
        {
            for (long long int i_9 = 2; i_9 < 13; i_9 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 0; i_10 < 14; i_10 += 1) 
                    {
                        for (unsigned long long int i_11 = 2; i_11 < 11; i_11 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */long long int) arr_24 [i_7]);
                                var_13 *= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)57206)) != (((/* implicit */int) (signed char)30))))), (((unsigned char) arr_28 [i_7 - 1]))));
                                arr_39 [i_7] [i_8] [i_9] [i_7] [i_11] = ((/* implicit */short) -8975699474411837323LL);
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (signed char i_12 = 0; i_12 < 14; i_12 += 3) 
                    {
                        var_14 *= ((/* implicit */signed char) (-(arr_30 [i_7 - 2] [i_7 - 2])));
                        arr_42 [1LL] [i_8] [i_9] [(signed char)13] = ((/* implicit */long long int) (signed char)-53);
                        var_15 -= ((/* implicit */signed char) ((unsigned int) ((arr_35 [i_9 - 1]) < (arr_35 [i_7]))));
                        /* LoopSeq 1 */
                        for (signed char i_13 = 0; i_13 < 14; i_13 += 4) 
                        {
                            arr_45 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7 - 1] = ((/* implicit */unsigned char) ((((/* implicit */int) (!((_Bool)1)))) << (((min((arr_41 [i_9 - 2] [i_9] [i_8] [i_8]), (arr_41 [i_9 + 1] [i_9] [i_9] [i_9]))) + (8213671114573425706LL)))));
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_25 [i_7 + 1]), (arr_25 [i_7 - 2])))) ? (((/* implicit */long long int) 4266512257U)) : ((~(min((var_3), (((/* implicit */long long int) var_8))))))));
                            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) -4289772916496907911LL))));
                            var_18 = ((/* implicit */long long int) var_4);
                        }
                    }
                    for (int i_14 = 0; i_14 < 14; i_14 += 4) 
                    {
                        var_19 &= ((/* implicit */unsigned short) -8792970956494350326LL);
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (-(-8792970956494350326LL))))));
                        var_21 = ((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_43 [i_9] [i_8] [i_9] [i_14] [i_9])))) == (((-8792970956494350311LL) - (arr_32 [i_7] [i_8] [i_9]))));
                        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) 15359435472517321938ULL))));
                    }
                    for (unsigned int i_15 = 0; i_15 < 14; i_15 += 1) 
                    {
                        var_23 *= ((/* implicit */unsigned char) min((((/* implicit */long long int) (!(arr_46 [i_9 - 1] [i_7 + 1] [i_7 - 2])))), ((~(-4841054345441517142LL)))));
                        /* LoopSeq 3 */
                        for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                        {
                            arr_52 [i_15] [i_16] [i_16] [6LL] = ((/* implicit */unsigned char) (((-(arr_38 [i_9] [i_9] [i_9] [i_9] [i_9 - 1] [(signed char)13] [i_16 + 1]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) min((((/* implicit */long long int) arr_28 [(signed char)10])), (var_3))))))));
                            arr_53 [i_7 + 1] [i_8] [i_9] [i_8] [i_16] = ((/* implicit */unsigned short) ((signed char) (-(((/* implicit */int) arr_50 [9LL] [9LL] [i_9] [i_7] [i_7])))));
                            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((arr_24 [i_7 - 2]) ? (var_9) : (((/* implicit */int) arr_24 [i_7 - 2])))) < (((/* implicit */int) min((((/* implicit */short) arr_24 [i_7 + 1])), ((short)6062)))))))));
                            arr_54 [i_16] [i_8] [i_7] = ((/* implicit */int) min((var_3), (min((((((-8792970956494350326LL) + (9223372036854775807LL))) >> (((var_6) + (1986554178))))), (((((/* implicit */_Bool) (signed char)-106)) ? (-8975699474411837323LL) : (-8975699474411837319LL)))))));
                            var_25 = ((/* implicit */signed char) 2651665108U);
                        }
                        for (unsigned short i_17 = 1; i_17 < 12; i_17 += 1) 
                        {
                            arr_58 [i_17] [i_17] [i_17] [i_17] [i_15] = ((/* implicit */unsigned long long int) (unsigned char)75);
                            arr_59 [i_7] [i_7] [10LL] [i_8] [i_9] [i_17] [i_17] = ((/* implicit */short) arr_34 [i_17 + 1]);
                        }
                        for (unsigned short i_18 = 0; i_18 < 14; i_18 += 4) 
                        {
                            arr_63 [i_7] [i_8] [i_8] [i_9] [i_15] [i_15] [i_18] = ((/* implicit */signed char) var_3);
                            var_26 = ((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) var_5)) ? (-8792970956494350321LL) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))), (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) (unsigned char)192))));
                            var_27 ^= var_7;
                            arr_64 [i_18] [i_15] [i_15] [i_9] [i_8] [i_8] [i_7] = ((/* implicit */short) (+(((/* implicit */int) (signed char)29))));
                            arr_65 [i_7] [i_8] [i_15] = ((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) min((var_3), (arr_35 [i_18])))))));
                        }
                        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)84)) && ((!(((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_57 [i_7] [i_8] [i_8] [i_7] [i_8]))))))));
                        var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) arr_25 [i_9 + 1]))));
                        var_30 = min((((((/* implicit */_Bool) ((((arr_35 [i_8]) + (9223372036854775807LL))) << (((((((/* implicit */int) var_5)) + (13183))) - (54)))))) ? (((((/* implicit */int) (signed char)-87)) ^ (((/* implicit */int) (short)-32749)))) : (var_6))), (((/* implicit */int) ((((/* implicit */unsigned long long int) 28455042U)) == (5729231101164432982ULL)))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_19 = 0; i_19 < 14; i_19 += 1) 
                    {
                        for (short i_20 = 0; i_20 < 14; i_20 += 1) 
                        {
                            {
                                var_31 |= ((/* implicit */int) min((((((/* implicit */_Bool) (unsigned char)95)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (4659201365515842688LL))), (((/* implicit */long long int) ((var_10) <= (((/* implicit */long long int) ((/* implicit */int) arr_60 [i_7] [i_9 + 1] [i_7 - 2]))))))));
                                var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) 497887726)) ? (12LL) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_6))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_21 = 0; i_21 < 25; i_21 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_22 = 2; i_22 < 24; i_22 += 2) 
        {
            for (signed char i_23 = 0; i_23 < 25; i_23 += 3) 
            {
                {
                    arr_76 [i_23] [i_22] [i_23] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1643302204U)) && (((/* implicit */_Bool) arr_73 [i_22] [i_22 - 2] [i_22 - 2]))));
                    arr_77 [i_23] [i_22 - 2] [10] [i_22] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)16)) ? (arr_75 [i_22 + 1] [i_22 + 1] [i_23] [i_22 - 2]) : (arr_75 [i_22 + 1] [i_22 - 1] [i_23] [i_22 + 1])));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_24 = 2; i_24 < 24; i_24 += 1) 
        {
            for (signed char i_25 = 4; i_25 < 22; i_25 += 2) 
            {
                for (int i_26 = 0; i_26 < 25; i_26 += 3) 
                {
                    {
                        var_33 = ((/* implicit */long long int) arr_78 [i_25 - 4]);
                        var_34 *= ((/* implicit */unsigned long long int) arr_75 [i_21] [i_21] [i_25] [i_26]);
                        var_35 |= ((/* implicit */long long int) (~(((/* implicit */int) var_0))));
                    }
                } 
            } 
        } 
    }
}
