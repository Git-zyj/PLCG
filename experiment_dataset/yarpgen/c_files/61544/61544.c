/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                var_14 += var_0;
                var_15 = (arr_3 [i_0] [6]);
                var_16 ^= (((((17820617146917049609 ? var_6 : (arr_2 [i_0 - 2] [i_1 - 1] [i_1 - 3])))) ? (max((arr_2 [i_0 - 1] [i_1 - 3] [i_1 + 2]), 643362853)) : var_2));
                var_17 = (max(var_5, (arr_0 [4])));
                arr_4 [i_0] [i_0] [i_0] = (var_7 ? (((~((4980283192283363770 ? 24 : var_8))))) : (16399 != var_5));
            }
        }
    }
    #pragma endscop
}
