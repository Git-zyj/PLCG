/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_12 = (min(var_12, (arr_2 [5])));
        var_13 = max((((75 >= ((var_4 | (arr_1 [i_0] [i_0])))))), (((var_4 ? var_0 : var_6))));
        arr_3 [i_0] = (arr_0 [1] [4]);
    }
    for (int i_1 = 3; i_1 < 20;i_1 += 1)
    {
        var_14 = (var_10 > 12288);
        var_15 = (var_7 ? ((min((arr_4 [i_1 + 4]), ((4789 ? 574398690 : 5319))))) : (arr_5 [i_1]));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        arr_10 [i_2] = (15266713732918107123 * 15266713732918107123);
        var_16 = (((~var_0) | var_6));
    }
    var_17 = var_6;
    #pragma endscop
}
