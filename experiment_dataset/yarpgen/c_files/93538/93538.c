/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((var_7 ? var_4 : var_4)) << (((~-5340540101404492878) - 5340540101404492869))));
    var_11 = var_1;
    var_12 |= (((-19255 ? (max(-6777765693455665119, var_7)) : var_1)));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (max(((-125 ? var_5 : var_0)), var_9));

        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            var_13 = (arr_5 [i_0] [i_0] [i_1]);
            var_14 = (((arr_3 [i_1 + 1] [i_1 + 2] [i_1 + 1]) & ((((min(var_5, var_9))) & 64551))));
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_15 = (min(var_15, var_0));
            arr_9 [i_0] = ((!(~-1086534384)));
            var_16 = ((min((arr_4 [i_0] [i_0] [i_0]), 1)));
        }
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_17 &= (min((!127), var_2));
        var_18 = var_4;

        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            var_19 = ((((!(arr_12 [i_3] [i_4]))) ? var_1 : ((min(var_9, (var_6 != -104))))));

            /* vectorizable */
            for (int i_5 = 1; i_5 < 13;i_5 += 1)
            {
                arr_16 [i_3] [4] [i_5 - 1] &= var_3;
                var_20 = (((arr_14 [8] [i_3] [i_5 - 1] [i_5 - 1]) ? (arr_12 [i_5 - 1] [i_5 + 1]) : var_2));
            }
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        var_21 = (((!var_5) ? (((!(!var_8)))) : (var_5 & var_0)));
                        var_22 |= ((-(!var_6)));
                    }
                }
            }
            arr_21 [i_3] = (((min((((-116 >= (arr_15 [i_3] [i_4] [i_4] [i_4])))), -26762)) == (((var_8 == (var_9 && var_1))))));
            arr_22 [i_3] [i_4] = ((~(arr_20 [i_3] [i_3] [i_3])));
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        var_23 = 50421;
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                {
                    arr_30 [6] [i_9] [i_8] [i_9] = (~-512);
                    arr_31 [i_9] [i_9] = (-114 || var_8);
                }
            }
        }
        var_24 = -4;

        for (int i_11 = 1; i_11 < 10;i_11 += 1)
        {
            var_25 = arr_32 [i_8] [i_11] [i_8];
            var_26 = (~-var_8);
        }
    }
    #pragma endscop
}
