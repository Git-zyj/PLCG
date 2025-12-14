/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71032
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
    var_11 = ((/* implicit */unsigned char) (+(min((var_6), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2)))))))));
    var_12 ^= ((/* implicit */unsigned char) max((((unsigned int) min((5778985183272696330LL), (-5778985183272696331LL)))), (min((((/* implicit */unsigned int) min((var_5), ((unsigned char)166)))), (var_6)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 22; i_2 += 4) 
            {
                {
                    var_13 |= 0U;
                    var_14 = ((/* implicit */long long int) ((4230359115436376398LL) <= (((/* implicit */long long int) 4294967295U))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 2; i_3 < 22; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1)))))));
                        var_16 = ((/* implicit */unsigned char) arr_6 [i_0] [i_3 + 2] [i_2 + 2]);
                    }
                }
            } 
        } 
        arr_10 [i_0] [i_0] = ((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]);
        arr_11 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)166)) ? (1099511627774LL) : (((/* implicit */long long int) 4294967295U))));
    }
}
