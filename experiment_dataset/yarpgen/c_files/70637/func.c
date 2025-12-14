/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70637
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) var_12))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (int i_4 = 1; i_4 < 13; i_4 += 3) 
                        {
                            arr_15 [(unsigned short)7] [(unsigned short)7] [i_2] [i_0] [i_3] [(unsigned short)7] = (-(((((/* implicit */_Bool) 5659470079267776497ULL)) ? (((/* implicit */int) (signed char)-22)) : (((/* implicit */int) (signed char)-15)))));
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [i_0]))));
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) >> (((/* implicit */int) (signed char)23))))) & (var_15))))));
                            var_21 = ((/* implicit */short) (+((((_Bool)0) ? (((/* implicit */long long int) 917056871)) : (arr_12 [i_0] [i_3] [i_2] [i_1] [i_0])))));
                        }
                        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (short)(-32767 - 1)))));
                    }
                    for (signed char i_5 = 1; i_5 < 14; i_5 += 4) 
                    {
                        arr_19 [i_0] [i_0] [i_2] = ((/* implicit */signed char) max((616346481048649214ULL), (((/* implicit */unsigned long long int) -861275708))));
                        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (+((-(((/* implicit */int) (_Bool)1)))))))));
                        var_24 = ((/* implicit */int) arr_18 [i_0] [i_0] [i_0]);
                    }
                    var_25 = ((((/* implicit */int) (signed char)23)) << ((((~(((((/* implicit */_Bool) arr_17 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)245))) : (arr_14 [i_2]))))) - (18446744073709551344ULL))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */long long int) var_10);
}
