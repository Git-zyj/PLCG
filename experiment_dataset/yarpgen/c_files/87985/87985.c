/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0 - 1] [2] = ((~(((arr_2 [i_0]) ? 18446744073709551615 : 0))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_11 = (max(var_11, var_9));
                    var_12 = (((arr_4 [i_0 - 1]) ? 4 : var_2));
                    var_13 = (((~(arr_1 [i_0]))));
                }
            }
        }

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_14 = ((arr_5 [i_3] [i_0 + 1]) / var_3);

            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                var_15 = (min(var_15, var_10));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 10;i_6 += 1)
                    {
                        {
                            var_16 *= 18446744073709551611;
                            arr_18 [i_0] [i_4] [i_0] [i_0] [i_6] [i_5] [i_5] = (~var_10);
                            var_17 = (min(var_17, ((((arr_0 [i_0 + 1]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1]))))));
                        }
                    }
                }
            }
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                var_18 += 1;
                arr_21 [i_0] = 1;
                var_19 ^= 1;
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 8;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 9;i_9 += 1)
                    {
                        {
                            arr_28 [i_9] [9] [9] [i_7] [i_8] [i_9 - 1] = (((((arr_2 [i_9]) & var_7))) ? (((!(arr_19 [i_9] [i_8] [i_0 + 1] [i_0 + 1])))) : (arr_12 [i_0 - 1] [2] [i_8] [i_9 + 1]));
                            var_20 ^= var_3;
                            arr_29 [i_0 - 1] [4] [i_9] [i_0] [i_0 - 1] = (((arr_6 [i_0 + 1] [i_8 - 1]) ^ ((var_2 ? var_8 : 21))));
                            var_21 -= var_1;
                        }
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            arr_32 [i_10] [i_10] [i_0 - 1] = var_2;
            var_22 ^= (((arr_1 [i_0 + 1]) * (arr_25 [i_0] [i_0 - 1] [i_0] [i_0])));
            arr_33 [0] |= 4294967293;
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            for (int i_12 = 3; i_12 < 10;i_12 += 1)
            {
                {
                    arr_40 [i_11] [i_0 + 1] [i_11] |= ((((2147483647 ? 58720256 : var_1))) ? -var_8 : var_2);
                    var_23 = ((~(~var_6)));
                    arr_41 [i_12] [i_12] = ((var_2 & var_7) | (~var_9));
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 22;i_13 += 1)
    {
        var_24 = (min(var_24, (((var_8 ? (((arr_42 [i_13]) ? var_9 : 65011712)) : ((((!(arr_44 [i_13]))))))))));

        for (int i_14 = 3; i_14 < 21;i_14 += 1)
        {
            var_25 = -var_9;
            var_26 = (min(var_26, (((((var_2 ? var_5 : var_1)) << (((min(((var_1 << (65011734 - 65011701))), var_7)) - 66)))))));
            /* LoopNest 2 */
            for (int i_15 = 4; i_15 < 20;i_15 += 1)
            {
                for (int i_16 = 2; i_16 < 19;i_16 += 1)
                {
                    {
                        var_27 ^= var_0;
                        var_28 = (min(-1, ((((arr_49 [i_15 + 2] [i_14 - 1]) > (arr_49 [i_15 - 4] [i_14 - 3]))))));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_17 = 0; i_17 < 22;i_17 += 1)
        {
            var_29 = (arr_51 [i_13] [1] [1]);
            var_30 &= var_7;
            arr_57 [1] [1] = ((((-127 - 1) + 2147483647)) << (18014381329612800 - 18014381329612800));
        }
        for (int i_18 = 0; i_18 < 22;i_18 += 1)
        {
            arr_62 [i_13] [i_18] = 4294967280;
            var_31 = 252;
        }
    }
    var_32 &= var_5;
    #pragma endscop
}
