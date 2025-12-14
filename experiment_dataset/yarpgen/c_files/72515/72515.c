/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-301173806647763671 ? (((min(-24491, var_2)))) : (max(((var_8 ? var_8 : 75)), (((var_2 ? var_6 : var_6)))))));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = 0;
        var_16 = -1;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_17 = var_4;
        var_18 = ((var_6 ? 5378 : (((arr_7 [i_1]) ? 181 : var_2))));
        var_19 = ((var_8 > (arr_6 [i_1] [23])));
        var_20 = ((!(1117605832 - -22849)));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_10 [i_2] [i_2] = ((-(arr_9 [i_2])));
        arr_11 [i_2] &= (arr_6 [i_2] [i_2]);
        var_21 = (min(var_21, (~var_0)));
    }
    #pragma endscop
}
