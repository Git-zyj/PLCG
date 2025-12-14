/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((max(var_1, -1709783171))) ? ((~((254 ? 95 : var_13)))) : (max(var_0, (arr_0 [i_0]))));
        arr_3 [i_0] = ((((((var_3 | (arr_1 [i_0]))))) || var_12));
    }
    var_14 |= ((((((((var_8 ? var_10 : var_9))) ? ((var_10 ? var_9 : 95)) : (var_6 * var_7)))) ? var_0 : (min(((var_1 ? var_13 : var_9)), (max(var_11, var_1))))));
    #pragma endscop
}
