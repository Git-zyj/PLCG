/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_11));
    var_21 = (max(var_21, 4088));
    var_22 = var_19;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_23 = (max(var_23, (((((((((arr_3 [i_0]) >> 1)) + var_4))) ? ((var_19 & (arr_3 [i_1 + 3]))) : (~104))))));
                var_24 ^= ((var_7 ? (arr_2 [i_1 + 2] [i_1] [14]) : (var_10 * var_18)));
                arr_4 [1] &= ((min(var_8, (arr_3 [i_0]))));
            }
        }
    }
    #pragma endscop
}
