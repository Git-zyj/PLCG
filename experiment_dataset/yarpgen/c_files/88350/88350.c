/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_3, ((0 ? var_8 : (((1 ? var_9 : var_7)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [5] [i_0] = 0;
        var_11 = (arr_1 [i_0]);
        var_12 = 1;
    }
    for (int i_1 = 3; i_1 < 16;i_1 += 1)
    {
        arr_6 [i_1 - 2] [i_1 - 2] = ((1365810069 << (1 - 1)));
        var_13 = arr_5 [i_1];
    }
    var_14 = (-var_2 < var_6);
    #pragma endscop
}
