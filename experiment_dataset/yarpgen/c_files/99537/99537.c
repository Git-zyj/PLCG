/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_18 |= (((max((min(var_17, -7901681321748495275)), (arr_0 [i_0 - 3]))) << ((((~(min(var_12, var_15)))) - 744688822))));
        arr_2 [i_0] = ((((((min(var_8, var_6)) <= ((min(var_4, var_0)))))) <= (!7402492971602431855)));
        var_19 -= (((~(~-1))));
        arr_3 [i_0] |= (min((max(12710081364286525470, var_14)), ((min((arr_0 [i_0 + 1]), 6253969909164961926)))));
        var_20 = max(((((!5736662709423026146) || ((min((arr_1 [i_0] [i_0]), 12710081364286525471)))))), (min(((min(var_14, var_14))), (max(var_15, 5736662709423026161)))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        var_21 -= (!0);
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    {
                        var_22 = ((~(17026 <= 230)));
                        var_23 = (~12710081364286525483);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        var_24 = (((arr_6 [i_5] [i_5]) >= 18446744073709551603));
        arr_17 [i_5] = ((-(!2485)));
    }
    var_25 = (min((min((min(5736662709423026162, var_14)), (40374 && var_8))), (max((min(14, 12710081364286525469)), (min(var_13, 2251799813423104))))));

    /* vectorizable */
    for (int i_6 = 3; i_6 < 13;i_6 += 1)
    {
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 13;i_9 += 1)
                {
                    {
                        arr_34 [i_6] [i_6] [i_6] [i_6] [i_6] = -0;
                        var_26 += (!(arr_18 [i_6 - 2]));
                        arr_35 [i_8] [i_7] [i_6] = ((-(~1023)));
                    }
                }
            }
        }
        arr_36 [i_6] = (-31 <= 18446744073709551615);

        for (int i_10 = 3; i_10 < 13;i_10 += 1)
        {
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    {
                        arr_44 [i_6] [i_6] [9] = (~(~896));
                        var_27 = (((arr_4 [i_6 - 2]) && var_2));
                        var_28 = (!47);
                    }
                }
            }
            var_29 = (max(var_29, ((((arr_15 [i_6 - 3]) >= var_11)))));
        }
    }
    var_30 = (((min((max(5736662709423026138, -122)), ((max(var_5, var_5))))) <= ((min(var_16, (min(164, var_15)))))));
    #pragma endscop
}
