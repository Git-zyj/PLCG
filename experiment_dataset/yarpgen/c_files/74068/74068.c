/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, var_9));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1] [i_0] [i_1] [i_1] [i_3] = var_12;
                        var_20 *= (min(var_4, -var_14));
                    }
                }
            }
            var_21 = (~-var_14);
            arr_11 [i_1] [i_1] = ((((min(var_1, (arr_6 [i_0] [i_0])))) || var_14));
            var_22 = (min(var_22, var_0));
        }
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            var_23 = (max(var_23, (((+(((var_3 + 2147483647) >> (var_17 - 1307))))))));
            var_24 = ((((max(((var_10 ? var_11 : var_3)), (4 != var_14)))) ? (((arr_13 [i_4] [i_4]) ? (arr_2 [i_4]) : 7493)) : ((~(arr_13 [i_4] [i_4])))));
            var_25 &= var_9;
            var_26 = -99;
            var_27 = (((arr_9 [i_0] [8] [i_0] [10]) ? ((max((arr_8 [14] [i_4] [i_4] [i_0]), var_4))) : ((19584 ? 2190433320960 : var_1))));
        }
        /* vectorizable */
        for (int i_5 = 2; i_5 < 16;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 16;i_8 += 1)
                    {
                        {
                            arr_27 [i_7] = var_7;
                            var_28 = -340042029;
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 13;i_10 += 1)
                {
                    {
                        arr_34 [i_10 - 1] [i_10 - 1] [i_9] [i_10 + 4] = var_10;
                        arr_35 [i_5] = ((var_6 ? var_11 : var_17));
                        arr_36 [i_0] [i_5 + 1] [i_9] [i_10] &= (arr_19 [i_0]);
                    }
                }
            }
            arr_37 [i_0] [i_0] = (arr_24 [i_5 - 1] [i_5 - 2] [i_5 - 2] [i_5 - 1] [i_5 + 1]);
        }

        /* vectorizable */
        for (int i_11 = 2; i_11 < 15;i_11 += 1)
        {
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 17;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 14;i_13 += 1)
                {
                    {
                        var_29 = ((-(!112)));
                        arr_45 [i_0] [i_11] [i_12] [i_13 + 3] = (((!1475592307) ? (arr_28 [i_0] [i_12] [i_11] [i_0]) : 123));
                        var_30 = (max(var_30, var_16));
                        arr_46 [i_12] [i_13] [i_12] [i_13 + 3] = ((var_17 ? var_4 : var_4));
                        arr_47 [i_12] [7] [i_12] [i_12] = var_16;
                    }
                }
            }
            arr_48 [i_0] = (arr_33 [i_0] [i_0] [i_0] [i_11] [i_11 + 1]);
            arr_49 [i_11] = ((105 ? var_6 : 17));
        }
    }
    for (int i_14 = 0; i_14 < 24;i_14 += 1)
    {
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 24;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 24;i_16 += 1)
            {
                {
                    var_31 = (min(var_2, ((max(11967, (arr_56 [i_14] [i_15] [i_16]))))));
                    var_32 *= 31792;
                }
            }
        }

        for (int i_17 = 1; i_17 < 23;i_17 += 1)
        {
            var_33 = (30 ? 9 : 14686);
            var_34 = ((var_14 ? var_4 : ((max(9, 65520)))));
            arr_61 [i_17] [i_14] = ((max(var_4, (arr_60 [i_17 + 1] [i_17 + 1] [i_17 - 1]))));
            arr_62 [i_14] [i_17] [i_17] = ((((!(arr_58 [i_17 + 1] [i_17 - 1] [i_17 - 1]))) ? (var_7 == 14) : var_10));
        }
        var_35 = (min(var_35, (~var_5)));
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 20;i_18 += 1)
    {
        var_36 = ((var_6 ? (arr_56 [i_18] [i_18] [21]) : var_3));
        var_37 = (max(var_37, var_14));
        var_38 += ((var_17 ? -114 : (var_12 && 5103)));
    }
    #pragma endscop
}
