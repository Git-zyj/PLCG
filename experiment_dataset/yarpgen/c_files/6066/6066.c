/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_19 = var_11;

        for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            arr_17 [i_0] [i_2] [i_2] [i_3] [i_2] = arr_4 [4];
                            arr_18 [i_3] [i_2] [i_2] [i_3] [15] = 1459673572;
                        }
                    }
                }
            }
            arr_19 [i_1] = (arr_12 [i_0] [1] [i_0] [i_0] [i_0] [i_0]);
            var_20 = (min(var_20, -24301));
        }
        for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_6 = 1; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        {
                            var_21 = ((~(arr_25 [i_6 + 2] [i_5])));
                            var_22 = (arr_8 [i_6] [i_6 + 3] [i_6]);
                        }
                    }
                }
            }
            var_23 = (min(var_23, (((1 << (-4856120268953412441 + 4856120268953412459))))));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    {
                        arr_35 [i_0] [i_0] [i_5] [1] = 1071644672;
                        var_24 = (-428980253 | 63050);
                        var_25 = (arr_3 [i_0] [i_0]);
                    }
                }
            }
        }
        for (int i_11 = 0; i_11 < 20;i_11 += 1) /* same iter space */
        {
            arr_40 [i_0] [i_0] [i_0] = (var_11 < 67);

            for (int i_12 = 0; i_12 < 20;i_12 += 1)
            {
                var_26 = var_7;
                /* LoopNest 2 */
                for (int i_13 = 3; i_13 < 19;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        {
                            var_27 = ((1023 && (!1)));
                            var_28 |= var_14;
                            var_29 -= (arr_1 [i_0] [i_0]);
                        }
                    }
                }
                arr_49 [i_0] [i_0] [i_0] = (!2885327659429596597);
                arr_50 [i_0] [4] = (arr_12 [i_12] [i_11] [i_11] [i_11] [i_11] [i_0]);
                arr_51 [i_0] [i_0] [i_0] [1] = (18034 && var_8);
            }
            for (int i_15 = 0; i_15 < 20;i_15 += 1)
            {
                var_30 = (428980269 < (arr_46 [i_0]));
                var_31 ^= arr_41 [i_0];
            }
            for (int i_16 = 0; i_16 < 20;i_16 += 1)
            {

                for (int i_17 = 0; i_17 < 1;i_17 += 1)
                {
                    arr_63 [i_16] [16] [i_17] &= (((arr_32 [i_0] [i_11] [i_16] [i_17]) ? 1569121813537668819 : (arr_39 [i_11])));
                    arr_64 [i_0] [i_17] [i_17] [8] = (11 | 4192);

                    for (int i_18 = 3; i_18 < 18;i_18 += 1)
                    {
                        var_32 = (min(var_32, (arr_52 [i_0] [i_11] [i_11] [i_0])));
                        arr_67 [i_17] [i_11] [i_16] [i_18] = (arr_55 [i_18 - 1]);
                    }
                    for (int i_19 = 0; i_19 < 20;i_19 += 1)
                    {
                        arr_70 [i_17] [3] [i_16] [i_17] [i_16] = (((arr_44 [i_0] [18] [i_16] [i_17] [i_19]) && (103 * 49309)));
                        var_33 = var_8;
                    }
                    for (int i_20 = 3; i_20 < 19;i_20 += 1)
                    {
                        var_34 = ((arr_62 [i_20 - 2] [1] [i_20 - 1] [i_20 - 1] [i_16]) | -9231865001174210167);
                        arr_75 [i_17] [i_17] [i_16] [i_11] [i_17] = -1824837378;
                    }
                }
                arr_76 [i_0] [i_0] [i_11] [i_16] = (arr_57 [i_0] [i_11] [i_0]);
                var_35 = var_15;
            }
            /* LoopNest 3 */
            for (int i_21 = 0; i_21 < 20;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 1;i_22 += 1)
                {
                    for (int i_23 = 1; i_23 < 19;i_23 += 1)
                    {
                        {
                            arr_83 [1] [i_11] [1] [i_11] [i_21] [i_11] = (arr_31 [i_21] [i_22] [i_21]);
                            var_36 = -104;
                        }
                    }
                }
            }
            arr_84 [i_0] [i_0] [i_0] = (55452 && 4294967295);
            arr_85 [i_11] |= (!var_14);
        }
        for (int i_24 = 0; i_24 < 20;i_24 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_25 = 0; i_25 < 20;i_25 += 1)
            {
                for (int i_26 = 1; i_26 < 18;i_26 += 1)
                {
                    {
                        arr_92 [i_24] &= (arr_37 [i_26 - 1] [i_26 - 1]);
                        arr_93 [i_0] [i_0] [i_25] [i_25] [i_26] [i_0] = -68;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_27 = 0; i_27 < 20;i_27 += 1)
            {
                for (int i_28 = 0; i_28 < 20;i_28 += 1)
                {
                    {
                        var_37 = (((arr_1 [i_28] [i_0]) ^ (arr_1 [i_0] [i_0])));
                        arr_99 [i_28] [i_27] [i_24] [i_0] = var_11;
                        arr_100 [i_24] [i_0] = var_16;
                    }
                }
            }
            arr_101 [i_0] [i_0] = (~0);
            var_38 = ((70 ? 1825462938 : 4100848895));
        }
        var_39 = (min(var_39, (arr_98 [i_0] [i_0])));
        var_40 = ((((arr_65 [i_0] [i_0] [i_0] [i_0] [i_0]) + 59)) ^ (-8294807494721169201 >= 7637418833680150662));
        var_41 = (min(var_41, (((~(arr_44 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
    }
    #pragma endscop
}
