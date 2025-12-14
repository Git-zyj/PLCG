/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(28, 192));

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = ((!(((50 ? 0 : 1023)))));
        var_13 = (((((((((arr_1 [i_0] [i_0 + 1]) | 44))) ? -6 : (((arr_1 [i_0] [i_0]) << (((arr_1 [i_0] [i_0]) - 182)))))) + 2147483647)) >> (var_7 - 3105626416));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_14 = (((5314553970383243888 + 2147483647) >> ((((1 ? -47 : -9246)) + 70))));
        var_15 &= (arr_4 [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        arr_10 [i_2] [i_2] = var_10;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    arr_16 [i_2] [i_3] [i_2] = (arr_14 [i_3]);
                    var_16 = (((arr_13 [18] [i_4]) ? var_9 : (((-(arr_1 [i_2] [12]))))));
                    var_17 |= (((arr_9 [i_3]) ? (var_5 + var_7) : (arr_1 [i_4] [i_2])));
                }
            }
        }
        var_18 -= (~var_3);

        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            arr_19 [i_5] [i_5] [i_5] = (arr_9 [i_5]);
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        var_19 = 31;

                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_20 = (max(var_20, (((var_2 + (arr_1 [i_6 - 2] [i_6 - 2]))))));
                            var_21 = (arr_24 [i_2] [i_2] [i_5] [i_2] [i_2] [i_2]);
                            arr_28 [i_2] [i_5] [i_8] = ((2147483647 < (!var_6)));
                            arr_29 [i_2] [i_5] [i_6] [1] [i_7] [5] [i_8] = (((((16707 ? 1 : 78))) % (arr_24 [i_6 + 2] [i_6 + 2] [i_5] [i_6] [i_6 + 2] [i_6 + 2])));
                        }
                        var_22 = (arr_12 [i_2] [i_2]);
                    }
                }
            }
            var_23 = ((202 ? 0 : 3939193936));
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            arr_34 [i_9] [i_2] [i_2] = (((!var_2) + (var_10 != 3939193936)));

            for (int i_10 = 1; i_10 < 1;i_10 += 1) /* same iter space */
            {
                arr_38 [i_2] [i_2] [i_2] [i_2] = (((arr_31 [i_9] [i_10]) <= (arr_24 [i_2] [i_2] [14] [14] [i_9] [i_10 - 1])));
                arr_39 [10] [i_10 - 1] = (((arr_0 [i_9] [16]) ? ((var_9 ? (arr_11 [i_2] [i_2]) : var_1)) : (arr_33 [i_2] [1])));
            }
            for (int i_11 = 1; i_11 < 1;i_11 += 1) /* same iter space */
            {
                arr_43 [i_11] = (!var_7);
                var_24 = (arr_36 [i_11 - 1] [i_11 - 1]);
            }
            for (int i_12 = 1; i_12 < 1;i_12 += 1) /* same iter space */
            {
                var_25 &= (!((((arr_8 [i_9]) << (((arr_23 [i_2] [2] [2] [2]) - 8731134805283267797))))));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 24;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {
                        {
                            var_26 += (arr_44 [16] [i_9] [i_13] [23]);
                            arr_50 [i_9] = ((((((arr_9 [i_2]) ? (arr_45 [i_2] [i_9]) : 63))) || (arr_22 [i_12 - 1] [i_12 - 1] [i_12] [i_12 - 1])));
                        }
                    }
                }
            }
            for (int i_15 = 1; i_15 < 1;i_15 += 1) /* same iter space */
            {
                var_27 -= (-32767 - 1);
                arr_53 [6] [1] [i_15] [1] = (~1);
            }
            var_28 &= (arr_32 [i_2] [i_9]);
            arr_54 [i_2] [i_2] [i_9] = ((~(((arr_49 [i_2] [i_2] [i_2] [i_9] [i_9] [17] [i_9]) ? var_4 : (arr_31 [i_2] [i_2])))));
        }
        for (int i_16 = 0; i_16 < 24;i_16 += 1)
        {
            /* LoopNest 3 */
            for (int i_17 = 3; i_17 < 20;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 24;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 24;i_19 += 1)
                    {
                        {
                            var_29 = 14;
                            arr_65 [i_19] [i_18] [i_17] [i_16] [i_2] = (((arr_44 [i_2] [i_2] [i_2] [1]) - var_2));
                            var_30 = ((0 << (var_6 - 52)));
                        }
                    }
                }
            }

            for (int i_20 = 0; i_20 < 24;i_20 += 1) /* same iter space */
            {
                var_31 = arr_1 [i_2] [i_20];
                var_32 = var_0;
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 24;i_21 += 1)
                {
                    for (int i_22 = 2; i_22 < 23;i_22 += 1)
                    {
                        {
                            var_33 = ((arr_56 [i_2] [i_16] [i_16]) & 63);
                            var_34 = (arr_14 [i_16]);
                            var_35 = var_1;
                            var_36 = (~var_1);
                        }
                    }
                }
                var_37 += (arr_40 [i_2] [i_16] [4] [i_2]);
            }
            for (int i_23 = 0; i_23 < 24;i_23 += 1) /* same iter space */
            {
                arr_77 [i_23] [i_16] [i_2] = ((!((((arr_67 [i_2] [i_2]) & (arr_71 [i_2] [i_16]))))));
                var_38 = (arr_74 [18] [i_16] [i_23]);
            }
            for (int i_24 = 0; i_24 < 24;i_24 += 1) /* same iter space */
            {
                arr_80 [i_24] [i_24] [i_24] = (!(arr_11 [i_16] [i_24]));
                var_39 += (arr_67 [i_2] [i_24]);
            }
            arr_81 [i_2] [i_16] [i_16] = (((((2147483647 ? var_10 : (arr_46 [i_2] [i_16] [i_2] [i_2])))) ? (((arr_57 [i_16]) & (arr_17 [i_2] [i_2] [1]))) : (((arr_62 [i_16] [i_16] [i_16] [i_2] [21] [i_2]) >> 1))));
            arr_82 [i_2] [8] [11] = (((arr_52 [i_16] [i_2] [i_2] [i_2]) ^ (((arr_62 [i_2] [i_16] [i_2] [i_16] [i_2] [i_2]) ? var_7 : var_5))));
            var_40 -= ((!(arr_48 [i_2] [i_16] [6] [i_2] [i_2])));
        }
    }
    #pragma endscop
}
