/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_10 = (max((min(var_0, (min(3, -1024)))), (((!(((~(arr_1 [1] [i_0])))))))));
        arr_2 [i_0] = ((max(245, (arr_0 [i_0]))));
        var_11 -= (arr_1 [4] [4]);
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        arr_5 [1] = ((-(((var_4 <= ((min(var_1, var_0))))))));
        arr_6 [i_1] [i_1] = (-5 ? (arr_3 [i_1 + 2] [i_1]) : var_7);
    }
    var_12 = (var_1 ? (((((-1731243672 ? var_1 : var_9))) ? var_3 : var_3)) : var_8);
    #pragma endscop
}
