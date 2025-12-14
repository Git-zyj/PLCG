/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_2 [17] [i_0] = ((var_10 ? (arr_0 [i_0]) : (30650 && 23)));
        var_16 += ((((((((arr_1 [i_0]) || var_1)) ? var_10 : 35821))) && var_11));
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        var_17 = (arr_4 [17]);
        var_18 = -var_3;
        var_19 = (min(var_0, 0));
        var_20 = (max(var_20, ((((var_13 ? (arr_4 [i_1]) : (((((arr_3 [i_1]) + 9223372036854775807)) << (((((arr_4 [i_1]) + 1824596481)) - 41))))))))));
        var_21 = (arr_4 [i_1]);
    }
    #pragma endscop
}
