/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (arr_0 [i_0]);
        var_17 = (arr_1 [15]);
        arr_2 [i_0] [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 3; i_1 < 12;i_1 += 1)
    {
        var_18 = (min(var_18, (((-((~(arr_3 [i_1 - 1]))))))));
        var_19 = ((!(arr_5 [i_1])));
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_10 [i_2] [i_2] = ((!(arr_7 [i_2])));
        arr_11 [2] [i_2] = (min((((~(max((arr_5 [1]), (arr_8 [i_2])))))), ((+(min((arr_0 [i_2]), (arr_7 [i_2])))))));
    }
    for (int i_3 = 4; i_3 < 15;i_3 += 1)
    {
        var_20 = ((-(arr_13 [i_3] [i_3 - 4])));
        arr_14 [i_3] &= (arr_0 [i_3 - 1]);
        arr_15 [i_3 + 1] = (arr_12 [i_3] [10]);

        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            arr_19 [i_3] = (max((arr_0 [i_3 - 2]), (min((arr_17 [i_3 - 3] [i_3]), (min((arr_13 [i_4] [i_4]), (arr_16 [i_4] [i_3 - 3])))))));
            var_21 *= -646921889;
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 12;i_6 += 1)
                {
                    {
                        var_22 = ((!(((-(arr_20 [i_5 - 1] [i_3 - 2] [i_3 - 1] [i_3 - 3]))))));
                        var_23 |= (arr_20 [i_3] [i_4] [0] [i_6]);
                    }
                }
            }
        }
        for (int i_7 = 3; i_7 < 14;i_7 += 1)
        {
            arr_27 [i_3] [i_7] [i_3] = (-((-(arr_16 [i_3 - 3] [i_3 - 3]))));
            var_24 = (arr_18 [i_3] [i_7] [i_7]);
        }
        for (int i_8 = 2; i_8 < 15;i_8 += 1)
        {
            var_25 *= (arr_22 [i_3] [i_3] [i_3]);
            var_26 += (+((max((arr_17 [i_8 + 1] [i_3 - 1]), (arr_1 [i_8])))));
        }
    }
    var_27 = var_7;
    var_28 = var_4;
    var_29 = var_6;
    #pragma endscop
}
