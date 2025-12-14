/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_18 = (arr_2 [i_0] [i_0]);
        var_19 = (min(var_19, 0));
        arr_3 [i_0] = arr_1 [6] [i_0];
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_7 [i_1] = 18446744073709551615;
        arr_8 [i_1] [i_1] = (((arr_4 [i_1]) * var_6));
        var_20 = (((-(max((arr_5 [1]), (arr_6 [i_1]))))));
        var_21 = ((arr_4 [i_1]) ? (arr_4 [i_1]) : (arr_4 [i_1]));
    }
    #pragma endscop
}
