/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_18 = (arr_0 [i_0]);
        arr_2 [i_0] [i_0] = (!1);
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        arr_6 [i_1] = (((!614833732) ? (-1215108521536921284 == 1) : (arr_3 [i_1] [i_1 + 1])));
        arr_7 [i_1] = ((-((((max(0, (arr_4 [i_1])))) - ((611603524 ? 3683363782 : var_11))))));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_19 = (~var_9);
        arr_10 [i_2] = (arr_9 [i_2]);
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        var_20 = 11;
        var_21 = ((var_11 ? ((((max(var_15, (arr_9 [i_3])))) ? (((var_15 ? 1 : (arr_8 [i_3] [i_3])))) : ((2842228341 ? 38 : 9)))) : ((min(5, -var_1)))));
        arr_13 [11] = ((31591 != (((8556835469957473704 ? 9223372036854775807 : -614833733)))));
        var_22 = (~-8191);
        arr_14 [i_3] = (((arr_11 [i_3]) >= 9223372036854775807));
    }
    var_23 = (min(var_23, var_6));
    #pragma endscop
}
