/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76046
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
    var_17 = ((/* implicit */unsigned int) var_12);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned int) arr_1 [i_0]);
                        arr_10 [i_0] [i_1] [i_2 - 1] [i_0] [i_2] [i_3] = ((/* implicit */_Bool) (-(var_5)));
                        var_19 *= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-123)) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_2 - 1] [i_3])) : (((/* implicit */int) (unsigned short)0))))));
                        var_20 = ((/* implicit */signed char) (short)-8192);
                        arr_11 [i_0] [i_0] [i_0] [i_3] [i_0] |= ((/* implicit */long long int) (~(arr_2 [i_2 - 1] [i_1])));
                    }
                    for (long long int i_4 = 0; i_4 < 14; i_4 += 4) /* same iter space */
                    {
                        var_21 = ((/* implicit */signed char) ((long long int) 3234801931U));
                        /* LoopSeq 2 */
                        for (short i_5 = 3; i_5 < 13; i_5 += 4) 
                        {
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((signed char) arr_3 [i_0] [i_5 + 1]))) != (((/* implicit */int) (short)8192))));
                            arr_18 [i_0] [i_0] = ((/* implicit */unsigned int) arr_8 [i_5 + 1] [i_0] [i_4] [i_2] [i_0] [i_0]);
                            arr_19 [i_0] [i_4] [i_5 - 2] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_5 + 1])))));
                        }
                        for (unsigned long long int i_6 = 2; i_6 < 12; i_6 += 1) 
                        {
                            arr_22 [i_0] [i_1] [i_2] [i_0] [i_6 + 2] = ((((/* implicit */_Bool) max(((unsigned short)65535), (((/* implicit */unsigned short) (_Bool)0))))) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_1] [i_0] [i_6 - 1])) && (((/* implicit */_Bool) (short)-8528))))), (arr_2 [i_1] [i_0]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) ((short) var_14)))))));
                            arr_23 [i_0] [i_1] [i_0] [i_4] = ((/* implicit */short) (-(((/* implicit */int) ((unsigned char) ((int) var_6))))));
                            arr_24 [i_0] [i_1] = ((short) 11895298695561997532ULL);
                            arr_25 [i_0] [i_1] [i_2 - 1] [i_4] [i_6 - 1] [i_6 - 1] [i_0] = ((/* implicit */short) min((0U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -7037838361867171395LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)1)))))));
                        }
                    }
                    for (long long int i_7 = 0; i_7 < 14; i_7 += 4) /* same iter space */
                    {
                        var_22 = ((/* implicit */short) (((_Bool)0) ? (((((/* implicit */_Bool) arr_4 [i_1] [i_2 - 1] [i_7])) ? ((+(((/* implicit */int) arr_16 [i_0] [i_0] [i_1] [i_2 - 1] [i_7])))) : (((/* implicit */int) arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1])))) : ((~(-929753391)))));
                        /* LoopSeq 2 */
                        for (signed char i_8 = 3; i_8 < 11; i_8 += 2) 
                        {
                            arr_31 [i_0] [i_1] [i_2 - 1] [i_7] [i_8] = ((/* implicit */int) ((short) arr_14 [i_1] [i_1] [i_1] [i_1] [i_1]));
                            arr_32 [i_0] [i_0] [i_2 - 1] [i_7] [i_8 - 2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_1] [i_0] [i_7] [i_8 - 2])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)24576)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (short)-8189))))) : ((+(1438079962U)))))) ? ((~((~(((/* implicit */int) var_15)))))) : ((-(((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_7] [i_0] [i_8])) ? (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0])) : (0)))))));
                            var_23 = ((/* implicit */short) (_Bool)0);
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned char) (((((-(((/* implicit */int) (unsigned short)2)))) >= ((~(((/* implicit */int) (unsigned short)0)))))) ? (((2594907678U) % (arr_14 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]))) : (((/* implicit */unsigned int) max(((-(5))), (arr_33 [i_0] [i_1] [i_1] [i_0] [i_7] [i_9] [i_9]))))));
                            var_25 = ((/* implicit */signed char) (-(((0) & (((/* implicit */int) (short)11157))))));
                            var_26 = ((/* implicit */unsigned int) max((arr_21 [i_0] [i_1] [i_2 - 1] [i_0] [i_9]), (((/* implicit */signed char) ((((/* implicit */long long int) arr_15 [i_2] [i_1] [i_2 - 1] [i_0] [i_9] [i_2 - 1])) > ((~(-3952075111922960869LL))))))));
                            var_27 -= ((/* implicit */int) ((long long int) min((arr_20 [i_2 - 1] [i_0] [i_2 - 1] [i_7] [i_9] [i_9] [i_2 - 1]), (arr_20 [i_9] [i_9] [i_7] [i_7] [i_1] [i_0] [i_0]))));
                            var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) arr_14 [i_0] [i_1] [i_2 - 1] [i_7] [i_9]))));
                        }
                        arr_35 [i_0] [i_0] [i_7] [i_0] &= max((min((-7037838361867171401LL), (((/* implicit */long long int) -750721584)))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58444))) - (2856887332U)))));
                    }
                    var_29 = arr_4 [i_0] [i_1] [i_2 - 1];
                }
            } 
        } 
    } 
}
