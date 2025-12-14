/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((((var_14 - var_7) + 2147483647)) >> ((((6 ? -189908576 : var_0)) - 4105058705))))) ? var_5 : (min(var_3, ((var_10 ? var_3 : var_4))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_16 -= ((((min(((var_4 ? (arr_1 [i_0]) : (arr_0 [i_0] [6]))), (((var_9 ? var_14 : var_13)))))) ? (((29909 ? -838389016 : -189908583))) : ((((((arr_0 [i_0] [1]) ? var_12 : var_13))) & (arr_1 [i_0])))));
        var_17 = ((((((arr_2 [i_0] [i_0]) / (arr_2 [i_0] [i_0])))) ? (max((arr_1 [i_0]), (arr_2 [i_0] [i_0]))) : ((min(189908579, 189908582)))));
    }
    #pragma endscop
}
