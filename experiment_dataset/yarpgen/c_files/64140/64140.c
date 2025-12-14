/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 243775410590445249;
    var_14 ^= var_12;
    var_15 = var_7;
    var_16 = (min(var_16, var_8));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = ((var_10 + (arr_0 [i_0])));
        arr_2 [i_0] = (arr_1 [i_0]);
        var_18 = (((arr_0 [i_0]) ^ (arr_0 [i_0])));

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_19 -= ((((var_1 ? (arr_3 [15] [9]) : (arr_0 [i_0]))) - (((0 ? 1 : 1)))));
            var_20 = (arr_4 [18] [18]);
        }
    }
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        var_21 = (arr_6 [i_2 - 1]);
        var_22 = ((1 ? (0 / 4294967295) : (min(-994836567720270362, (arr_5 [i_2 - 1])))));
        var_23 = ((((28197 ? var_8 : (max(-1, 14)))) | ((((min(243775410590445249, (arr_5 [i_2]))) <= (arr_5 [i_2 + 1]))))));
        var_24 -= 255;
    }
    #pragma endscop
}
