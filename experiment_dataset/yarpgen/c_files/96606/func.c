/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96606
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) ((((-3809037734887412476LL) + (9223372036854775807LL))) >> (((-3809037734887412472LL) + (3809037734887412483LL))))))));
        var_19 += ((/* implicit */signed char) ((long long int) arr_1 [(unsigned char)9]));
    }
    for (short i_1 = 0; i_1 < 15; i_1 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_2 = 2; i_2 < 14; i_2 += 1) 
        {
            for (unsigned int i_3 = 4; i_3 < 11; i_3 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        for (long long int i_5 = 0; i_5 < 15; i_5 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) ((-3809037734887412472LL) / (((/* implicit */long long int) ((/* implicit */int) var_14)))));
                                var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_3 - 3] [i_3 - 3])) ? (var_9) : (((/* implicit */unsigned long long int) arr_4 [i_3] [i_3 + 3]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_4 [(short)0] [i_3 + 4]) < (arr_4 [(unsigned short)9] [i_3 + 1]))))) : (arr_4 [8ULL] [i_3 + 3]));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (int i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        var_22 *= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 3809037734887412472LL)) ? (0LL) : (((/* implicit */long long int) arr_0 [i_2 - 2]))))));
                        arr_20 [i_2] [i_2] [i_2] [1U] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2 + 1] [i_2 + 1])) ? (arr_13 [i_2] [i_2] [i_3 - 3] [i_3] [i_6] [13] [i_6]) : (((/* implicit */unsigned long long int) arr_3 [i_1]))))) ? (arr_0 [i_3 + 4]) : (((/* implicit */unsigned int) (((_Bool)1) ? (((((/* implicit */_Bool) var_0)) ? (-1345134940) : (((/* implicit */int) var_6)))) : (arr_3 [i_1]))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_7 = 0; i_7 < 15; i_7 += 1) 
                    {
                        arr_24 [i_1] [i_2] [i_2 - 2] [i_3] [i_7] = ((/* implicit */short) (~(arr_11 [i_2] [i_2 - 1] [i_3 + 2] [i_3])));
                        /* LoopSeq 3 */
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            var_23 -= ((/* implicit */int) ((long long int) (!(((/* implicit */_Bool) var_2)))));
                            var_24 -= ((/* implicit */unsigned short) ((((var_11) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) % (((/* implicit */long long int) var_3))));
                        }
                        for (long long int i_9 = 2; i_9 < 12; i_9 += 2) 
                        {
                            var_25 = ((/* implicit */_Bool) min((var_25), ((_Bool)1)));
                            var_26 = ((/* implicit */long long int) arr_4 [i_3 + 1] [i_2]);
                        }
                        for (unsigned int i_10 = 0; i_10 < 15; i_10 += 1) 
                        {
                            arr_32 [i_3] [i_2] [i_2] [i_3 - 4] [i_3] [2ULL] [(signed char)0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_22 [i_2] [i_2] [10ULL] [i_2] [i_3 + 1] [i_10]))));
                            var_27 -= ((/* implicit */short) (-(((((/* implicit */_Bool) arr_25 [2] [i_7] [i_2] [i_2] [2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_16))))));
                            var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((unsigned long long int) arr_22 [i_3 + 2] [6ULL] [i_3] [i_2 - 2] [6ULL] [i_2])))));
                        }
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_1] [i_2] [i_2] [i_3] [i_1])))))) ? (((/* implicit */unsigned long long int) arr_10 [i_2] [i_2])) : (((((/* implicit */_Bool) var_0)) ? (6445364604814809501ULL) : (((/* implicit */unsigned long long int) var_13))))));
                        var_30 = ((((/* implicit */int) arr_5 [i_2 - 1])) * (((/* implicit */int) var_16)));
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_11 = 0; i_11 < 15; i_11 += 2) 
                    {
                        arr_35 [(signed char)9] [i_2] [i_3 - 3] [6U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_11] [i_3 - 2] [i_2 + 1] [i_2 - 2] [i_1])) ? (((/* implicit */int) arr_23 [i_1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_23 [i_1] [i_1] [i_2 - 1] [i_3 - 1] [i_11]))));
                        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) ((unsigned int) ((262143U) >> (((((/* implicit */int) (short)(-32767 - 1))) + (32799)))))))));
                        var_32 = ((/* implicit */_Bool) -3809037734887412485LL);
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_38 [4] [i_3] [i_2] [i_12] [i_12] = ((/* implicit */unsigned short) 3809037734887412469LL);
                        var_33 = ((/* implicit */unsigned long long int) ((unsigned short) var_9));
                    }
                    for (int i_13 = 1; i_13 < 14; i_13 += 1) 
                    {
                        arr_42 [i_1] [8ULL] [i_1] [12U] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) (!(var_15)))), (((int) (-2147483647 - 1)))))) ? ((((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (arr_39 [i_1] [(short)1] [i_3 + 3] [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_31 [i_1] [(_Bool)1] [9U] [i_1] [i_1] [i_1])) : (var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)28288))))))));
                        var_34 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37240))) : (var_9)))) ? (arr_15 [i_13] [i_3 + 4] [i_1]) : (((/* implicit */unsigned long long int) arr_28 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_3 + 2] [i_13 - 1])))) >> (((((arr_26 [i_13 + 1] [i_3 + 4] [i_3 + 2] [i_2 - 2] [i_2 + 1]) | (arr_26 [i_13 + 1] [i_3 - 2] [i_3 - 1] [i_2 - 2] [i_2 - 1]))) - (12986914664606580258ULL)))));
                    }
                    var_35 = ((/* implicit */unsigned char) ((unsigned int) ((min((((/* implicit */long long int) -140514298)), (-127466033697259483LL))) <= (min((((/* implicit */long long int) (_Bool)0)), (arr_21 [i_1] [(signed char)3] [i_1] [(_Bool)1]))))));
                }
            } 
        } 
        var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) ((unsigned int) min((arr_33 [i_1] [4ULL] [i_1] [i_1]), (((/* implicit */unsigned int) arr_36 [2U] [2U] [(unsigned char)8] [i_1]))))))));
        var_37 -= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_17 [i_1] [i_1] [i_1] [i_1] [i_1])), (var_11)))) && (((/* implicit */_Bool) (~(-708674426))))));
        arr_43 [i_1] = ((/* implicit */_Bool) (-(min((-1733166360), (((/* implicit */int) (_Bool)1))))));
    }
    var_38 = ((/* implicit */unsigned short) var_1);
}
