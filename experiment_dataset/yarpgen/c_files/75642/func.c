/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75642
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
    var_20 = ((/* implicit */short) max((((((unsigned long long int) 18446744073709551615ULL)) - (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12456272183458154432ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)22))) : (759451515U)))) ? (((/* implicit */long long int) 4294967295U)) : (var_0))))));
    var_21 = ((/* implicit */long long int) 4294967295U);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) (-(((((/* implicit */long long int) ((/* implicit */int) arr_1 [(unsigned short)4] [6U]))) & (arr_5 [i_0])))));
                        arr_10 [i_1] = ((/* implicit */unsigned short) 3535515780U);
                        var_23 &= ((/* implicit */unsigned int) (~(((/* implicit */int) (short)18706))));
                    }
                    var_24 *= ((/* implicit */short) (-(max((arr_5 [i_2 - 1]), (((/* implicit */long long int) var_9))))));
                }
            } 
        } 
    } 
    var_25 ^= ((/* implicit */unsigned long long int) var_15);
}
