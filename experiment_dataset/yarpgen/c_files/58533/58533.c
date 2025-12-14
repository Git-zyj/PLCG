/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (((-(var_9 && var_15))))));

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_21 = ((arr_1 [i_0] [i_0 - 1]) ? (((((195 ? (arr_1 [i_0] [i_0]) : 536870848))) ? (((max((arr_1 [7] [i_0]), (arr_1 [12] [12]))))) : (arr_0 [i_0]))) : (((((((arr_1 [i_0] [i_0]) > 1818307069))) >> (((arr_1 [i_0 + 1] [i_0]) - 28))))));
        arr_2 [i_0] = 524160;
    }
    var_22 = (min(var_22, ((max((((((223 ? var_0 : 536870848))) ? (min(var_9, 68)) : (!var_1))), (((!255) ? 167 : (((max(24, 33)))))))))));
    var_23 = (((((var_17 ? (var_7 - var_8) : ((39 ? 1492147666 : 166))))) ? ((var_16 ? (((min(75, var_0)))) : ((var_17 ? var_18 : var_1)))) : ((((((var_13 ? 255 : var_4))) ? var_15 : ((var_18 ? 30 : 24)))))));
    #pragma endscop
}
