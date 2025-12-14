/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74563
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
    var_10 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((var_9) >= (var_9))))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_7) : (var_7)))) ? (((var_7) + (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) ((var_3) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6)))))))));
    var_11 = ((var_2) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) max(((_Bool)0), (var_6)))) >> (((((var_7) | (var_7))) - (1948291909614435493LL))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        var_12 = ((/* implicit */long long int) (unsigned short)1764);
                        /* LoopSeq 4 */
                        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) (-(arr_6 [i_4] [i_4]))))));
                            arr_16 [i_2] = ((/* implicit */signed char) arr_9 [i_0] [i_1] [i_3 + 1] [i_4]);
                        }
                        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 3) 
                        {
                            arr_19 [i_0] [i_2] [i_1] [i_2] [i_0] [i_5] [2] = ((/* implicit */unsigned short) arr_9 [i_5] [i_5] [i_1] [i_3]);
                            var_14 *= ((/* implicit */unsigned short) var_8);
                            arr_20 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_3 + 1] [i_1] [i_1] [i_1] [i_5])) ? (arr_13 [i_3 + 1] [i_1] [i_3] [i_3] [i_5]) : (arr_13 [i_3 + 1] [i_1] [i_2] [i_3 - 1] [i_5])));
                        }
                        for (int i_6 = 0; i_6 < 10; i_6 += 2) /* same iter space */
                        {
                            var_15 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_6])))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))) : (arr_21 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 - 1])));
                            arr_24 [i_3] [i_6] [i_6] [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_22 [i_0] [i_1] [i_2] [i_3 + 1] [i_6])) != (((/* implicit */int) arr_1 [i_2])))))) : (((unsigned long long int) arr_13 [i_0] [i_1] [(unsigned short)3] [i_3 - 1] [i_2]))));
                            var_16 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) var_0)) ? (arr_10 [i_0] [i_1] [i_2] [i_3]) : (arr_23 [i_3] [i_6]))));
                        }
                        for (int i_7 = 0; i_7 < 10; i_7 += 2) /* same iter space */
                        {
                            var_17 = ((/* implicit */short) (+(((/* implicit */int) var_3))));
                            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_26 [i_1] [i_1] [i_3 - 1] [i_3 + 1]))));
                            arr_27 [i_0] [i_2] [i_2] [i_3 + 1] = (+(((long long int) var_8)));
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 2; i_8 < 8; i_8 += 1) 
                        {
                            arr_30 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3])) : (((/* implicit */int) var_1))));
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_3 - 1] [i_3] [i_3] [i_3 + 1])) ? (((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_3 - 1] [i_8] [(unsigned short)4])) : (((/* implicit */int) (unsigned short)27847))));
                            arr_31 [i_8] [i_2] [(short)9] [i_2] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) arr_2 [i_3])) : (-5532964288284039084LL)));
                        }
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_34 [i_0] [i_2] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_0 [i_9])) : (((/* implicit */int) var_4)))), ((-(((/* implicit */int) arr_29 [i_9] [i_2] [i_2] [i_1] [i_0] [i_0]))))))) : (((unsigned long long int) arr_7 [4] [i_1] [i_2]))));
                        var_20 = ((/* implicit */unsigned char) (signed char)97);
                        arr_35 [i_2] [(unsigned char)1] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0])) && (((/* implicit */_Bool) var_7)))))) % (arr_18 [i_0] [i_1] [i_2])));
                    }
                    for (unsigned int i_10 = 0; i_10 < 10; i_10 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned char)48)) ? (arr_2 [i_0]) : (((/* implicit */int) var_2))))))) | (((((unsigned int) var_0)) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_10])))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_11 = 0; i_11 < 10; i_11 += 1) 
                        {
                            arr_42 [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)103)) ? (((/* implicit */unsigned long long int) -2213329079024632117LL)) : (12043445223962607600ULL)));
                            var_22 = ((/* implicit */unsigned long long int) arr_3 [i_11]);
                            var_23 = ((/* implicit */int) arr_41 [i_1] [i_2] [i_11]);
                        }
                        var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_0] [(unsigned char)3] [i_2] [i_2] [i_10])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_22 [i_0] [i_1] [i_2] [i_10] [i_2]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_0] [i_1] [i_2] [i_2] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0] [i_1] [i_2] [i_2] [i_10]))) : (var_7)))) : (max((var_9), (((/* implicit */unsigned long long int) arr_22 [i_0] [i_10] [i_1] [i_10] [i_1])))));
                    }
                    var_25 = ((/* implicit */_Bool) var_0);
                    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [i_2] [i_2] [i_1] [i_0] [i_0] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (unsigned short)27847)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)3079))))));
                }
            } 
        } 
    } 
    var_27 -= max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))), (((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))));
    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_0)), (var_7)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_9)))));
}
