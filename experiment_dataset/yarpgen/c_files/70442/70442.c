/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (+(max(var_4, ((min((arr_2 [i_0]), var_0))))));
        var_14 = (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        var_15 = 0;
        var_16 = (((!163) << ((((164 ^ ((1 ? 13 : 1073741824)))) - 150))));
        var_17 ^= (min((18921 / 19162), ((((arr_1 [i_1 - 1]) || var_10)))));
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_18 = (((arr_6 [i_2]) != -18979));
        var_19 = ((28321 >> (((arr_6 [i_2]) + 1130084259))));
        arr_8 [i_2] = ((19162 != (arr_0 [i_2] [i_2])));
        var_20 = (arr_0 [i_2] [i_2]);
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        var_21 = (((((arr_0 [i_3] [i_3]) || (((144 / (arr_0 [i_3] [18])))))) ? (min(var_4, 163)) : (((min(var_10, (arr_2 [i_3])))))));
        var_22 = (((arr_0 [9] [i_3]) ? var_13 : ((max((max(1, (arr_9 [i_3] [i_3]))), (var_7 && 1))))));
    }
    #pragma endscop
}
