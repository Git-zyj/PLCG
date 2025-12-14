/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((5 && var_2), (max((~var_4), var_1))));
    var_20 = (max(-4294967292, (!var_8)));
    var_21 &= (var_17 | (~4294967276));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_22 = (4294967276 ? (arr_0 [i_1]) : (arr_4 [i_0] [i_0]));
                var_23 = (min(var_23, (4294967284 > 1)));
                var_24 ^= ((~(((var_18 | 1) ? ((((arr_3 [4] [4]) ? var_12 : (arr_5 [i_0] [i_0] [16])))) : (min(17, 5))))));
                var_25 = ((!(-4294967275 > 4294967293)));
            }
        }
    }
    #pragma endscop
}
