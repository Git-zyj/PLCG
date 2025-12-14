/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62273
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
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */int) var_3)) << (((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) << ((((+(((/* implicit */int) var_0)))) + (24122))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 4; i_0 < 11; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [4] |= ((/* implicit */unsigned long long int) var_2);
                    arr_9 [8] |= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) != (arr_7 [i_0] [i_1] [i_2]))))) | (((((/* implicit */_Bool) 3264138107761200552ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (3264138107761200552ULL)))));
                    /* LoopSeq 4 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_0] [i_2] [i_0] &= ((var_1) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) arr_1 [(signed char)2])));
                        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */unsigned int) var_5)) >= (((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0 - 1] [0] [i_0 - 1]))) + (var_14))))))));
                    }
                    for (unsigned char i_4 = 2; i_4 < 11; i_4 += 4) 
                    {
                        arr_15 [i_4] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */short) ((unsigned int) var_16));
                        arr_16 [(short)4] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) var_13);
                        var_20 = ((/* implicit */unsigned short) arr_2 [i_4]);
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_1])) ? (((/* implicit */int) var_1)) : (var_17)));
                        var_22 = ((/* implicit */unsigned char) arr_11 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 2]);
                    }
                    for (short i_5 = 0; i_5 < 12; i_5 += 2) /* same iter space */
                    {
                        arr_19 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((arr_17 [i_0 + 1] [i_1]) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0)))))));
                        arr_20 [i_0] [(short)7] [(short)7] [(short)7] = ((((/* implicit */int) (unsigned short)65518)) + (((/* implicit */int) (_Bool)1)));
                        var_23 = ((/* implicit */unsigned int) var_15);
                        arr_21 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 3] [(_Bool)1] = var_3;
                        /* LoopSeq 1 */
                        for (long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_17)) * (var_15))))));
                            arr_24 [10] [3U] [3U] [10] [i_5] [3U] &= ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12)));
                        }
                    }
                    for (short i_7 = 0; i_7 < 12; i_7 += 2) /* same iter space */
                    {
                        arr_28 [(unsigned char)7] [i_0] [i_0] [i_0] [(short)10] [i_7] = ((/* implicit */int) ((short) arr_17 [i_2] [i_2]));
                        arr_29 [i_0] [i_7] [6ULL] [i_1] [i_0] [i_0] = ((var_10) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_1)))));
                        var_25 *= ((/* implicit */unsigned int) var_17);
                        var_26 = ((/* implicit */long long int) var_3);
                        var_27 = ((/* implicit */short) ((var_8) & (var_5)));
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_8 = 0; i_8 < 12; i_8 += 4) 
        {
            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((arr_14 [i_0] [i_0] [i_0 + 1] [i_8]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
            arr_32 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_27 [2])) >= (var_10)))) : (((/* implicit */int) var_2))));
        }
    }
}
