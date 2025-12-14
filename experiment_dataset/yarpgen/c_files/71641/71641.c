/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_17 = (((min(var_8, var_5)) - (((arr_2 [i_0 - 1]) ? var_13 : (arr_2 [i_0 - 2])))));
                var_18 = (((((arr_1 [i_0 - 1]) || var_14)) ? (arr_4 [i_0 + 3]) : (((arr_2 [i_0 + 2]) ? (arr_4 [i_0 + 3]) : var_8))));
                arr_5 [i_1] [i_1] [i_1] = (max(((((var_5 < (arr_2 [i_0]))) ? (((((arr_2 [3]) <= var_16)))) : (arr_4 [i_1 + 1]))), ((max((arr_2 [i_0 + 2]), (arr_2 [i_0 + 3]))))));
            }
        }
    }
    var_19 = (((var_1 ? (var_15 ^ var_7) : var_15)) + ((((var_16 < var_3) ? (((var_2 ? var_16 : var_8))) : (var_6 % var_4)))));
    var_20 = var_2;

    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        var_21 ^= (min((arr_6 [10]), (max((min(var_8, (arr_6 [18]))), (arr_7 [8])))));
        var_22 = (arr_6 [i_2]);
    }
    var_23 = var_2;
    #pragma endscop
}
