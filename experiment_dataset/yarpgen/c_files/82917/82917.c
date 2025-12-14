/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;
    var_11 = (max(var_11, var_8));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_12 -= (((!var_1) ? (arr_1 [i_0 - 1]) : (16257 <= 49273)));
        var_13 = (min(var_1, (arr_1 [i_0])));
        var_14 = (max(var_14, (!4294967295)));
        arr_2 [i_0] = ((!(arr_0 [i_0] [i_0])));
        var_15 = (arr_0 [i_0] [i_0]);
    }
    var_16 -= (min(var_4, ((var_1 ? var_6 : ((max(16263, var_0)))))));
    #pragma endscop
}
