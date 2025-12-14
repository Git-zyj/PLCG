/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = 1;
        arr_3 [i_0] [i_0] &= var_9;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_7 [i_1] = var_7;
        arr_8 [i_1] = var_10;
        var_12 = (max(var_12, ((((((var_5 ? (var_7 & var_7) : var_7))) ? (arr_6 [i_1]) : ((((var_0 < var_2) == var_9))))))));
        arr_9 [i_1] = var_2;
    }
    var_13 = ((var_7 ^ (((~((var_9 ? var_4 : var_11)))))));
    var_14 = var_11;
    #pragma endscop
}
