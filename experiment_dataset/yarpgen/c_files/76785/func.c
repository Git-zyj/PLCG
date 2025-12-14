/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76785
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) var_9);
        var_16 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) || (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) == (140720308486144LL)))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */short) (!((_Bool)1)))), (arr_0 [i_1])));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_17 -= ((/* implicit */signed char) max((((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_0)))), (((((/* implicit */_Bool) arr_9 [i_1] [i_3])) ? (((/* implicit */int) arr_9 [i_2] [i_3])) : (((/* implicit */int) arr_9 [i_3] [i_3]))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 0; i_5 < 11; i_5 += 4) 
                        {
                            var_18 = (((!((_Bool)1))) ? (((/* implicit */int) arr_10 [i_4] [i_3] [i_2] [i_1])) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_10 [i_1] [i_3] [i_4] [i_5])), (arr_11 [i_3] [i_2])))));
                            var_19 = ((/* implicit */long long int) (~((~((~(((/* implicit */int) (_Bool)1))))))));
                            var_20 = ((/* implicit */long long int) var_3);
                        }
                        var_21 ^= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_14 [i_4] [i_4] [i_3] [(unsigned char)3] [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : ((+(((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)-14421)) : (((/* implicit */int) (signed char)0))))) ? (((((/* implicit */_Bool) arr_11 [i_1] [i_3])) ? (((/* implicit */int) arr_8 [i_1])) : (((/* implicit */int) var_13)))) : (((/* implicit */int) arr_8 [i_1]))))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_20 [i_3] [i_2] [i_3] [i_6] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_2])) ? (((/* implicit */int) var_9)) : (arr_7 [i_2] [i_6] [i_6])));
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_1])) >= (((/* implicit */int) arr_4 [i_1]))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 1) /* same iter space */
                        {
                            arr_23 [i_1] [i_6] [i_2] [i_2] [2U] [i_1] = ((/* implicit */signed char) ((arr_22 [i_1] [i_2] [i_3] [i_2] [i_8]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))) : (arr_15 [i_8] [i_2] [i_2])));
                            arr_24 [0ULL] [i_6] [0] [(unsigned short)0] [i_2] [i_6] [i_1] &= ((/* implicit */_Bool) ((unsigned int) (signed char)0));
                            var_23 = ((/* implicit */int) ((arr_16 [i_1] [i_1] [i_3] [i_6] [i_8]) == (((((/* implicit */_Bool) var_2)) ? (14450590672220694207ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
                            arr_25 [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_2] [2] [i_6] [i_8])) || (((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 1) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (_Bool)0))));
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned int) arr_14 [i_9] [i_2] [i_2] [i_6] [i_9]))))) ? (((unsigned int) (!(((/* implicit */_Bool) arr_1 [i_3] [i_2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_3)))))))));
                            var_26 = ((/* implicit */unsigned int) ((short) 4294967295U));
                        }
                        arr_28 [i_6] |= ((/* implicit */signed char) var_4);
                        var_27 += ((/* implicit */unsigned int) var_2);
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_10 = 0; i_10 < 11; i_10 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_11 = 0; i_11 < 11; i_11 += 4) 
                        {
                            var_28 = ((((/* implicit */_Bool) -2218311369643627970LL)) ? (3143702039U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))));
                            arr_36 [i_2] = ((/* implicit */signed char) ((short) (((_Bool)1) ? (((/* implicit */int) (unsigned char)22)) : (((/* implicit */int) (unsigned char)0)))));
                            arr_37 [i_1] [i_2] [i_3] [3ULL] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) (unsigned char)165))))) >= (((/* implicit */int) var_7))));
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_11])) ? (arr_5 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_14)))));
                        }
                        arr_38 [i_2] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_1] [(_Bool)1] [i_1] [1] [i_1])) && (((/* implicit */_Bool) var_5))));
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_30 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)234)) ? (arr_18 [i_1] [(signed char)1] [i_3] [i_2] [i_1] [i_1]) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(arr_26 [i_12] [i_3] [i_1] [i_1] [i_1])))))))));
                        arr_41 [i_2] [i_1] [i_2] [i_3] [i_12] [i_2] = ((/* implicit */unsigned long long int) (-(var_5)));
                        arr_42 [i_1] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_11 [i_2] [i_2])) ? (((/* implicit */int) arr_11 [i_2] [i_2])) : (((/* implicit */int) var_7))))));
                        var_31 ^= ((/* implicit */short) min((((/* implicit */int) ((short) (-(var_5))))), ((-(((/* implicit */int) var_10))))));
                    }
                    /* vectorizable */
                    for (signed char i_13 = 0; i_13 < 11; i_13 += 1) 
                    {
                        arr_45 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-81)) ? (((/* implicit */int) arr_22 [i_1] [i_2] [i_1] [i_1] [6LL])) : ((-(((/* implicit */int) arr_11 [i_1] [i_2]))))));
                        var_32 = ((/* implicit */unsigned long long int) (!(arr_22 [i_1] [i_2] [i_3] [i_13] [i_13])));
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_33 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_1])))));
                        arr_49 [i_1] [i_2] [i_2] [i_2] [i_14] [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [1ULL] [i_2] [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_17 [i_1] [i_2] [(_Bool)0] [i_3] [i_3] [i_14])) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) var_9))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) ^ (var_2)))));
                        arr_50 [i_2] = ((((/* implicit */int) (short)14404)) << (((((/* implicit */int) (unsigned short)1345)) - (1344))));
                    }
                }
            } 
        } 
    }
    var_34 = ((/* implicit */short) var_14);
    var_35 = ((/* implicit */unsigned short) ((_Bool) min((((/* implicit */long long int) ((var_4) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_9))))), (min((((/* implicit */long long int) var_0)), (var_5))))));
}
