/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_14 = (((0 ^ (arr_2 [i_2 + 1]))));
                            var_15 = var_2;
                            arr_12 [1] [i_2] [10] [1] = var_13;
                        }
                    }
                }
                var_16 ^= ((var_8 ? var_3 : 4294967295));
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {

            for (int i_6 = 1; i_6 < 8;i_6 += 1) /* same iter space */
            {
                var_17 = ((-((var_7 ? var_1 : (arr_18 [i_4] [i_4])))));
                var_18 = ((!((((arr_5 [i_4]) ? (arr_10 [i_4] [i_5] [i_4] [i_4] [i_5] [i_4]) : var_5)))));
                var_19 = (!var_9);
            }
            for (int i_7 = 1; i_7 < 8;i_7 += 1) /* same iter space */
            {
                arr_23 [i_4] [i_5] = var_11;
                arr_24 [i_4] [i_5] [i_7] = var_13;
                var_20 = ((!(arr_6 [i_5] [i_5] [i_7])));
            }
            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                var_21 = -var_9;
                var_22 = var_12;

                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    var_23 = (((arr_21 [9] [i_4] [i_4]) * (var_6 ^ var_6)));
                    var_24 = ((var_6 ? (arr_22 [i_4] [i_4] [i_8 - 1]) : (arr_22 [i_4] [i_5] [i_8 - 1])));
                    arr_31 [i_4] [i_8] = (((arr_10 [i_8 - 1] [i_8] [i_9] [8] [8] [i_9]) ? (arr_10 [i_8 - 1] [i_8 - 1] [i_8] [i_9] [i_8] [i_9]) : (arr_10 [i_8 - 1] [i_8 - 1] [3] [i_8] [i_8 - 1] [i_8])));
                    var_25 = ((~(arr_15 [i_8 - 1])));
                }
            }
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                var_26 = var_0;
                arr_35 [6] [i_4] [i_4] [i_10] = var_7;
            }
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 11;i_12 += 1)
                {
                    {
                        var_27 = (arr_30 [i_5] [i_11] [i_12 + 1] [i_12 + 1] [i_12] [i_12 - 1]);
                        arr_40 [i_12] [i_12] [2] [9] [i_4] [9] = (((arr_7 [i_4]) ? 2 : (arr_0 [i_4] [i_5])));
                        arr_41 [i_4] [11] [i_4] = var_3;
                    }
                }
            }
        }
        for (int i_13 = 0; i_13 < 12;i_13 += 1) /* same iter space */
        {
            var_28 = (max(var_28, (arr_37 [i_4] [i_13] [i_4])));
            var_29 = (arr_22 [i_4] [i_4] [i_4]);
            var_30 = 1;
            var_31 = (arr_22 [i_4] [i_4] [i_4]);
        }
        for (int i_14 = 0; i_14 < 12;i_14 += 1) /* same iter space */
        {
            var_32 = (((arr_16 [i_4] [i_4] [i_4]) ? (arr_16 [i_4] [i_4] [i_4]) : (arr_16 [i_4] [i_14] [i_4])));
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 12;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 12;i_16 += 1)
                {
                    {
                        var_33 = ((var_6 < (arr_21 [i_4] [i_4] [i_4])));

                        for (int i_17 = 0; i_17 < 12;i_17 += 1)
                        {
                            var_34 ^= (((arr_32 [i_17]) > var_4));
                            var_35 ^= ((arr_25 [i_4] [i_17] [i_17]) ? (arr_48 [i_17]) : var_5);
                            var_36 = 6950874084538710696;
                        }
                        var_37 = var_1;
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_18 = 0; i_18 < 12;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 12;i_19 += 1)
            {
                for (int i_20 = 3; i_20 < 8;i_20 += 1)
                {
                    {
                        arr_64 [i_4] [i_4] [i_19] [i_4] = ((var_3 + (arr_59 [i_4] [i_4] [i_20] [i_20 + 2])));

                        for (int i_21 = 0; i_21 < 12;i_21 += 1)
                        {
                            arr_67 [i_4] [i_4] [i_18] [i_19] [i_4] [i_21] = ((31 >= (arr_62 [i_20] [1] [i_20] [i_20 + 2] [i_20 + 2])));
                            var_38 = ((arr_49 [i_4] [i_20 + 2] [i_20] [i_21]) == (arr_49 [i_4] [i_20 - 1] [i_20] [i_20]));
                        }
                        for (int i_22 = 0; i_22 < 12;i_22 += 1)
                        {
                            var_39 ^= (((arr_9 [i_20 - 1] [i_20] [i_20 - 1] [i_20 + 3] [i_20 + 4] [i_20]) ? (arr_9 [i_20 - 2] [i_20] [i_20 - 1] [i_20 + 3] [i_20 - 1] [i_22]) : (arr_9 [i_20 + 1] [i_20 - 3] [i_20 - 2] [i_20 - 1] [i_20 + 2] [2])));
                            arr_71 [3] [i_18] [i_19] [i_4] [i_22] = (((arr_18 [i_4] [i_4]) != var_5));
                            arr_72 [i_4] [i_20 + 1] [i_4] [i_4] [1] = var_6;
                        }
                    }
                }
            }
        }
    }
    for (int i_23 = 0; i_23 < 12;i_23 += 1) /* same iter space */
    {
        var_40 = (min(var_3, (((-(!var_2))))));
        arr_75 [i_23] = (arr_32 [i_23]);

        /* vectorizable */
        for (int i_24 = 0; i_24 < 12;i_24 += 1)
        {
            arr_80 [i_24] = (12 | var_1);
            var_41 = ((!(arr_46 [i_23] [i_24] [i_24])));

            for (int i_25 = 0; i_25 < 12;i_25 += 1)
            {
                var_42 -= (arr_36 [0] [0] [0] [i_25]);
                var_43 = var_10;
                arr_84 [i_24] [i_24] [i_25] = 2910959456;
            }
        }
        var_44 *= var_12;
    }
    for (int i_26 = 0; i_26 < 12;i_26 += 1) /* same iter space */
    {
        var_45 = (max(var_45, 1));

        for (int i_27 = 4; i_27 < 11;i_27 += 1)
        {
            var_46 = 70;
            var_47 = max((((!(arr_51 [i_26])))), (~-17));
            var_48 = (arr_29 [i_26] [i_27] [i_27] [i_26] [i_26] [3]);
        }
    }
    #pragma endscop
}
