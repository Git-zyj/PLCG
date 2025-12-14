/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max((var_5 > 51972), var_14));
    var_19 = ((var_13 / ((-(max(var_7, 4294967295))))));
    var_20 = var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = (var_13 && (1730739734364078194 || 1));
        var_22 |= (arr_0 [1]);
        var_23 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_6 [i_1] = (arr_5 [i_1] [i_1]);
        var_24 += 7235228711752537739;
    }
    #pragma endscop
}
