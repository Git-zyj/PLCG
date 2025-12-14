/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min((((~(arr_1 [3])))), (arr_0 [i_0])));
        arr_3 [i_0] = var_9;
        arr_4 [i_0] [i_0] = ((-((var_10 ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        arr_5 [i_0] |= -55;
    }
    var_14 &= ((((max(var_12, var_7))) ? (((~var_3) ? ((var_10 ? var_11 : var_9)) : var_9)) : (((~((max(var_1, var_3))))))));
    var_15 = var_1;
    #pragma endscop
}
