/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_14 = (arr_0 [i_0 - 2]);
        var_15 = ((((((var_9 ? var_5 : var_6)) ? 64 : (arr_0 [i_0])))));
        var_16 = (((arr_1 [i_0 - 2]) ^ (((arr_0 [i_0 - 1]) ? var_4 : (arr_0 [i_0 - 2])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_17 ^= ((9220224122486780224 ? (arr_3 [i_1]) : (arr_2 [i_1])));

        for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
        {
            var_18 = (arr_2 [i_2]);
            var_19 = var_2;

            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                var_20 -= -2526966932633332115;
                arr_9 [i_2] = (arr_6 [i_1] [i_1] [i_2] [i_3]);
            }
        }
        for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
        {
            var_21 = var_11;
            var_22 = (~var_9);
        }
    }
    var_23 = (min(var_2, var_8));

    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        arr_15 [11] [i_5] = ((-(((arr_12 [i_5] [i_5]) ? (arr_10 [12] [i_5] [i_5]) : var_3))));

        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            arr_18 [i_5] [i_6] [i_6] = (49477 + 192);
            arr_19 [7] [i_5] [8] = (~((140737486258176 ? 524307371 : 68)));
            var_24 += (min((min(22, (arr_11 [i_6] [i_5]))), ((var_1 ? 60 : 192))));
            arr_20 [i_5] [i_5] [i_6] = (max(18278594412512128554, -8654620203448529393));
        }
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    {

                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            arr_30 [3] [i_9] [i_9] [i_5] [i_7] [i_5] [i_5] = (max(((var_0 - (arr_29 [i_5] [i_7] [i_8 + 3] [i_9] [7]))), var_1));
                            arr_31 [i_5] [i_5] [i_5] [i_9] [10] = var_12;
                            var_25 = ((!((var_12 >= (arr_4 [i_8 + 3] [i_8 + 4])))));
                            var_26 -= ((((~((403444189 ? 9223372036854775807 : var_2)))) > (var_12 > 22)));
                        }
                        var_27 = (arr_24 [2]);
                        arr_32 [i_9] [i_5] [i_8 + 3] [0] [i_5] [i_5] = (((var_5 > var_6) ? (~4876295398668012478) : (((max(5059190683823102856, -2526966932633332121))))));
                    }
                }
            }
            arr_33 [i_5] = ((((max(var_8, 191)))));
            var_28 = 4218241440019879237;
            arr_34 [i_5] [i_7] [i_5] = (arr_29 [i_5] [i_5] [i_5] [5] [i_7]);
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 20;i_11 += 1)
    {
        var_29 = ((arr_35 [i_11]) ? (arr_35 [i_11]) : (arr_35 [i_11]));
        arr_37 [i_11] = (~var_10);
    }
    for (int i_12 = 2; i_12 < 12;i_12 += 1)
    {
        var_30 = var_10;
        arr_41 [i_12] = (+-74);
    }
    /* LoopNest 3 */
    for (int i_13 = 0; i_13 < 14;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 14;i_14 += 1)
        {
            for (int i_15 = 1; i_15 < 11;i_15 += 1)
            {
                {
                    arr_51 [i_13] [i_13] [i_14] [i_15 - 1] = 2526966932633332092;
                    arr_52 [i_14] = ((1402877360035083397 ? ((((-(arr_45 [i_13] [i_13]))))) : ((var_9 ? (arr_28 [i_15 + 1] [i_15 + 2]) : (arr_36 [i_15 + 1] [i_13])))));
                }
            }
        }
    }
    #pragma endscop
}
