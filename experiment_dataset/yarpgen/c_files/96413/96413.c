/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -4377;
    var_16 = (max(var_16, (((((max(19032, 89))) ^ (~0))))));
    var_17 = (((((((max(var_6, -5838381688525422259))) ? ((max(var_10, -19032))) : ((116 >> (var_3 + 6979)))))) ? 23 : ((var_9 ? ((-6584222209674596118 ? 160 : 78)) : 19032))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_18 = (max(var_18, (((!(((((max((arr_0 [8]), var_0)))) >= -19028)))))));
        var_19 = ((((((43284 * 140) ? 140 : 106))) ? ((-(arr_1 [i_0]))) : ((min((arr_0 [i_0]), var_8)))));
        arr_2 [i_0] [i_0] = (((arr_0 [i_0]) ? ((((!((max((arr_0 [i_0]), 95))))))) : ((((!(arr_1 [i_0]))) ? (arr_1 [i_0]) : var_6))));
    }
    for (int i_1 = 4; i_1 < 15;i_1 += 1)
    {
        arr_6 [i_1 - 3] = (arr_5 [i_1] [9]);

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_20 += -2108480693453306181;
            var_21 = 20291;
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            var_22 &= (2125209511691855438 - var_8);
            arr_11 [i_1 - 2] [i_1 - 2] = 3;
        }
        arr_12 [i_1] = (arr_5 [i_1 - 1] [i_1 - 1]);

        /* vectorizable */
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            arr_15 [i_4] = -1;
            arr_16 [i_4] = (arr_7 [i_1 - 3] [i_1 - 2]);
            arr_17 [i_4] = (arr_8 [i_1 - 2]);
        }
        var_23 = var_9;
    }
    #pragma endscop
}
