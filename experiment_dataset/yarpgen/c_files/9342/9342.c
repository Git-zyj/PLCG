/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= ((32760 < ((max(var_5, var_5)))));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = (min((max(0, (arr_1 [i_0]))), (1 < -35)));
        var_12 = (min(var_12, (((-2 * ((var_1 ? ((max(-2879, 86))) : 1)))))));
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        var_13 = ((((8690317245046679527 < (arr_5 [i_1 - 2]))) ? ((min(0, 32776))) : ((((min(56, 11579480125960493742)) >= var_2)))));
        arr_6 [i_1] = ((min(var_3, (arr_5 [i_1 - 2]))));
        arr_7 [i_1] [i_1] = (32760 ? -3755 : (1 < 1));
        arr_8 [i_1] = ((~(((((var_10 ? 0 : (arr_5 [i_1])))) | var_0))));
    }
    var_14 = ((-(max(((var_10 ? 32776 : 4396972769280)), 1))));
    var_15 |= ((-((max(var_4, var_0)))));
    #pragma endscop
}
