/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((var_4 > var_9), var_5));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_12 = (min(var_12, 24648));
        var_13 = (((arr_2 [i_0]) - ((var_10 ? -24648 : (arr_2 [i_0])))));
        var_14 -= (arr_2 [i_0]);
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_15 = (min(((((arr_1 [i_1]) ? var_9 : 1427038913))), (((-24620 ^ (arr_0 [i_1]))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {
                    var_16 -= ((27331 >> (24620 - 24604)));
                    var_17 -= (-(!24630));
                }
            }
        }
        var_18 -= -24620;

        for (int i_4 = 3; i_4 < 11;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    {
                        var_19 -= (arr_3 [i_1]);
                        var_20 -= (min(24658, (~var_6)));
                        arr_18 [i_1] = (max((~343575412171578144), ((min((arr_17 [i_1] [i_4 + 1]), 1)))));
                    }
                }
            }
            arr_19 [i_1] = (((((201 ? 24630 : 1242502034))) ? (~var_10) : (arr_16 [i_1] [i_1] [i_1] [i_1])));
        }
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            var_21 = (arr_20 [i_1] [i_7]);
            var_22 -= (max(((~(arr_22 [i_1] [i_1] [i_7]))), 0));
            arr_24 [i_1] [i_1] = (!var_0);
        }
        for (int i_8 = 3; i_8 < 11;i_8 += 1)
        {
            var_23 -= var_5;
            arr_29 [i_1] = (-((~(arr_8 [i_8 - 1] [i_8 - 2] [i_8 - 3]))));
            arr_30 [i_1] [i_8] = (((((arr_7 [i_1] [i_8 - 3] [i_1]) | 2315448896)) + (var_9 && var_1)));
            var_24 = (((max(8725724278030336, 1)) / ((((arr_21 [i_8 - 1] [i_8 - 3] [5]) ? (arr_15 [i_1] [i_1]) : (arr_28 [i_8] [i_1]))))));
        }
    }
    var_25 = (max((((((var_7 - 1) + 2147483647)) >> (var_7 + 253917762))), (var_7 <= var_5)));
    #pragma endscop
}
