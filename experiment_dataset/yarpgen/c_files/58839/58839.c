/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_17 = (arr_2 [i_0]);
        var_18 = (arr_1 [i_0] [i_0]);
        var_19 = (max(var_19, (arr_2 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_6 [i_1] = (((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_3 [i_1])));
        arr_7 [i_1] = ((var_8 > (arr_3 [i_1])));
    }
    var_20 = ((+((((!156) || ((min(var_6, var_2))))))));
    var_21 = ((var_8 ^ (var_3 | var_7)));
    var_22 = ((!(((max(var_13, var_14))))));
    var_23 = (min(var_23, (((!(((156 ? 156 : var_1))))))));
    #pragma endscop
}
