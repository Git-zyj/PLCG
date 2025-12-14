/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_14 = ((((max(-11210, (~13)))) ? (max((((arr_2 [i_0] [16] [i_0]) ? (arr_0 [i_0]) : (arr_4 [i_1] [9] [9]))), (arr_0 [i_0]))) : (((((~(arr_3 [i_0] [i_0])))) ? (((arr_4 [i_1] [i_1] [i_1]) ? (arr_0 [i_0]) : 0)) : (arr_4 [0] [i_1] [0])))));
                var_15 = (((((((arr_3 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_2 [11] [i_1] [i_0])))) ? 11217 : (max((arr_3 [i_0] [i_0]), 0)))));
            }
        }
    }
    var_16 = (min(((((((var_0 ? var_13 : var_1))) ? ((var_8 ? var_8 : -11232)) : ((min(var_7, var_6)))))), ((((max(var_6, (-2147483647 - 1)))) ? (~var_2) : var_11))));
    var_17 += (var_2 ? ((((max(1580528304, var_7))) ? var_10 : (min(var_9, -962283431)))) : var_1);
    var_18 = ((((-1 ? 49 : ((max(129, 56))))) <= -74));
    var_19 = var_0;
    #pragma endscop
}
