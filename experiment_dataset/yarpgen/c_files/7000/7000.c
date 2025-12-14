/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_21 += (((arr_2 [i_0] [i_0]) ? 9 : (arr_1 [i_0])));
        var_22 = (((var_17 % var_12) ? var_1 : var_13));
        var_23 = var_16;
        arr_3 [i_0] = ((var_7 ? -0 : (!1)));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 20;i_1 += 1)
    {
        var_24 = (((arr_4 [i_1 - 1]) < (arr_4 [i_1 - 2])));
        var_25 = -277761361;
        arr_7 [8] [i_1] |= ((240 ? (arr_6 [i_1] [i_1]) : (((arr_4 [1]) ? var_2 : var_12))));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_26 = (min(var_26, ((min(var_19, (min(((max(var_16, (arr_2 [i_2] [17])))), (min(var_3, var_19)))))))));
        var_27 = (min(var_27, (arr_9 [i_2])));
        var_28 = ((((min(((min(0, 1))), (~0)))) > (min(var_8, (min(-532140647, var_15))))));
    }
    for (int i_3 = 2; i_3 < 13;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            arr_15 [i_3] = ((var_3 << (((arr_14 [i_3]) - 10607))));
            arr_16 [i_4] [12] [i_3] = (((arr_1 [i_3 - 1]) ? 1 : var_19));
            arr_17 [7] = ((var_0 > var_5) ? (var_9 > var_8) : (!var_8));
        }
        var_29 ^= var_16;
        var_30 = (min(var_30, 15140));
        var_31 = ((~(((arr_5 [i_3 - 2]) ? ((min(var_6, var_14))) : (var_18 > var_9)))));
    }
    #pragma endscop
}
