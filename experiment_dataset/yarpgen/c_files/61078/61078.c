/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;
    var_11 = 28379;

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_12 *= (-(((arr_1 [i_0] [2]) ? (1 != 2081340416) : 103)));
        arr_3 [i_0] = (arr_2 [6] [i_0]);
        var_13 = (max(var_13, -109));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = ((max((arr_0 [i_1] [i_1 - 1]), (arr_0 [i_1] [i_1 + 3]))));
        var_14 = (max((min(var_0, (arr_2 [i_1] [i_1 + 2]))), (!115)));
        arr_7 [i_1] [i_1] |= var_8;

        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            var_15 += ((-(arr_5 [i_1] [i_2])));
            var_16 = (max(var_16, (max((~var_0), ((~(~-1357376155)))))));
            var_17 = (min(var_17, (~5)));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {

            for (int i_4 = 1; i_4 < 13;i_4 += 1)
            {
                arr_17 [i_3] = (((arr_9 [i_4]) ? ((184265329 ? (arr_16 [i_1] [i_1] [i_1] [i_3]) : 3621770504)) : (arr_4 [i_1])));
                var_18 = ((28555 ? -8 : -17));

                for (int i_5 = 2; i_5 < 14;i_5 += 1)
                {
                    arr_20 [i_3] [i_3] [1] [i_5] = (arr_19 [i_1] [i_3] [i_4] [i_5] [7] [14]);
                    var_19 = (((arr_15 [i_1] [i_3] [12] [i_1 + 1]) ? (arr_10 [i_5 - 1] [i_4 + 1]) : (arr_10 [i_5 - 1] [i_4 + 2])));
                    arr_21 [i_3] = (65504 ^ 96);
                    arr_22 [i_1] [i_3] [i_4] [i_5] = -31;
                }
                var_20 -= (((-10686 & -7283254319161040923) | var_6));
            }
            arr_23 [i_3] [9] [9] = (((arr_15 [i_1 - 1] [i_1 + 1] [0] [i_1]) && (~-42)));
            var_21 &= var_5;
        }
        var_22 = var_1;
    }
    for (int i_6 = 2; i_6 < 9;i_6 += 1)
    {
        var_23 = (max(var_23, ((((arr_19 [i_6] [i_6] [i_6 - 1] [i_6] [i_6 - 1] [i_6]) / (((((arr_19 [i_6] [10] [i_6 - 1] [8] [i_6] [i_6]) + 2147483647)) << (((arr_0 [3] [3]) - 2642)))))))));
        var_24 ^= ((((arr_1 [i_6 + 1] [i_6 - 1]) ? var_0 : (arr_1 [i_6 - 2] [i_6 - 2]))));
    }
    var_25 = -var_8;
    #pragma endscop
}
