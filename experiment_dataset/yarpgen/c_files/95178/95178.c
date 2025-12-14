/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 |= ((1 ? var_3 : (var_0 + -849553539)));
                var_15 ^= ((+((((arr_3 [i_0] [i_0] [i_1]) || (arr_3 [i_0] [i_0] [i_1]))))));
                var_16 = (max(var_16, (((var_13 ? ((-849553539 ? var_4 : (arr_2 [1]))) : (min(var_0, (arr_2 [1]))))))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 4; i_2 < 20;i_2 += 1)
    {
        arr_7 [i_2] = 849553548;
        var_17 = (((~var_6) ^ (~var_7)));
    }
    var_18 = (var_7 % 7221703732419155073);
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                var_19 = (min(var_19, (((((((arr_11 [i_3] [i_3] [1]) ? var_8 : -849553544))) ? var_12 : (((arr_14 [1] [i_4] [1]) + var_10)))))));
                var_20 = (min(var_20, (((((-(var_12 * var_3))) >= var_2)))));
                var_21 = (min(var_21, ((min((((var_1 % var_0) - (~var_6))), -21)))));
            }
        }
    }
    #pragma endscop
}
