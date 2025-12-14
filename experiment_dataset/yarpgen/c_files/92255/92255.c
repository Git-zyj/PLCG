/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((10 ? var_10 : (var_3 <= var_4)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_12 += (arr_0 [i_0]);
        var_13 = (9 < (arr_0 [i_0]));
        arr_2 [i_0] [i_0] = (((arr_0 [i_0]) ? ((-16 + (arr_0 [i_0]))) : 1));
        var_14 = (max(var_14, (!-101)));
        var_15 = (5 ? (arr_1 [i_0]) : (3444104001656920096 / 9));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_16 = (arr_0 [i_1]);
        var_17 = ((!(((-5440 ? (arr_5 [i_1]) : (arr_5 [i_1]))))));
    }
    var_18 = ((~((var_1 ? var_7 : 9223372036854775807))));
    #pragma endscop
}
