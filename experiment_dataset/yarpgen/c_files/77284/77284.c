/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((~((max(var_8, var_3)))))) ? var_8 : (((var_4 + var_6) ? var_7 : var_5))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((var_10 ? 1973420879 : (arr_0 [i_0])));
        arr_5 [i_0] = var_1;
        arr_6 [i_0] = ((var_4 ? (arr_1 [i_0]) : (max((min((arr_3 [i_0]), var_9)), var_7))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_12 = var_7;
        var_13 = ((((min(var_3, var_9))) ? var_6 : 112));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_14 *= (!2064384);
        var_15 = min(20377, ((var_4 ? 0 : (arr_12 [i_2]))));
    }
    var_16 = (max((((-2064375 ? 39 : (-2064384 / 15)))), (((var_1 / var_8) ? (4684040531652408511 && var_7) : (max(var_5, 4684040531652408501))))));
    #pragma endscop
}
