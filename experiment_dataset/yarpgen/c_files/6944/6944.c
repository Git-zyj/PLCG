/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 1;
        arr_3 [i_0] = ((var_0 ? (((((((var_8 ? var_3 : var_4)) + 2147483647)) >> ((((1 ? 8947514217433799700 : var_9)) - 8947514217433799673))))) : (var_7 ^ var_6)));
        arr_4 [i_0] = ((var_0 ? (max((((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0 - 1]))), ((((arr_1 [i_0]) != var_7))))) : (arr_1 [i_0 - 1])));
    }
    var_10 = (var_7 * var_7);
    var_11 = var_7;
    #pragma endscop
}
