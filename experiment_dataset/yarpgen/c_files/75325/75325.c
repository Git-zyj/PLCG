/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_20 = ((!(1 && 81276997)));
        arr_4 [13] = ((!(arr_0 [i_0 + 1] [i_0 + 1])));
        arr_5 [i_0] = (arr_3 [i_0 + 1] [7]);

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_21 -= (((arr_3 [i_1] [i_0 + 1]) ? (arr_2 [i_0 + 1]) : (arr_1 [i_1])));
            var_22 -= (!((((arr_1 [i_1]) ? (arr_0 [7] [11]) : 576460752303390720))));
        }
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        arr_11 [i_2] [i_2 - 1] = -1;
        arr_12 [9] = ((+((max((arr_9 [i_2 - 1]), (arr_9 [i_2 - 1]))))));
    }
    for (int i_3 = 3; i_3 < 22;i_3 += 1)
    {
        arr_17 [i_3] = (min((((arr_16 [i_3 - 2]) ? 1 : 7551025470058521788)), ((2598002642338552626 ^ ((min(1, 3922011717)))))));
        var_23 = (((!(arr_16 [i_3 - 3]))));
    }
    var_24 = var_4;
    var_25 = (44 & 171);
    #pragma endscop
}
