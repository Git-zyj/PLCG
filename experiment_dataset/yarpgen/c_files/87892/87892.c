/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_17 = 198;
        var_18 = ((!((min((var_12 || 71364948), ((-36 ? 1 : (arr_0 [i_0]))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_19 = ((-702751462 ? var_10 : (arr_3 [i_1])));
        var_20 = (max(var_20, var_3));
        var_21 = ((-(8400512864324951739 && var_15)));
    }
    var_22 = 14587516001841876152;
    var_23 = var_10;
    var_24 = (min(var_24, ((max(-55, 16384)))));
    var_25 = (max(var_8, (min(var_7, 4540914427379208926))));
    #pragma endscop
}
