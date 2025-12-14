/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 1;
    var_12 = var_0;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 5668809415662930513;
        var_13 ^= ((-(arr_1 [i_0 - 2])));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_14 |= var_7;
        arr_8 [i_1] = (min((((!(arr_4 [i_1])))), (min(12777934658046621103, (arr_0 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_15 += 12777934658046621089;
        var_16 = (!((min(var_2, (81 > var_7)))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_17 = (arr_11 [i_3]);
        arr_13 [i_3] = (((arr_10 [i_3] [i_3]) ? 1 : -17));
    }
    var_18 = var_5;
    #pragma endscop
}
