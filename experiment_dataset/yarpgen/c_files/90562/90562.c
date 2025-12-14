/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_18 = max((var_1 & var_14), (((arr_0 [i_0] [i_0]) ? 9424589301987521233 : (arr_1 [i_0]))));
        var_19 = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_20 = (min(63, 9815183818344192427));
        arr_4 [i_1] [i_1] = (8631560255365359188 ? (((23956 ? (arr_3 [i_1]) : var_7))) : (((arr_3 [i_1]) ? 4333603705121943433 : (((12249962817575286288 ? 1 : (arr_3 [i_1])))))));
        var_21 = (((arr_3 [i_1]) ? (((arr_2 [i_1] [i_1]) ? (arr_2 [i_1] [i_1]) : 5)) : (arr_2 [14] [i_1])));
    }
    var_22 |= var_14;
    #pragma endscop
}
