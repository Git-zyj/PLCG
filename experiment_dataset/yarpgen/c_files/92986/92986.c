/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-2422 ? var_8 : 1104875519));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_15 = 2434;
                    var_16 = var_5;
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_17 -= var_4;
                            var_18 = 97;
                            arr_16 [i_0] [i_0] [13] [i_3] = (-1359220673 & var_1);
                        }
                        var_19 = var_1;
                        arr_17 [i_3] [i_3] = (~58);
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    {
                        arr_25 [i_0] [i_0] [i_7] [i_8] [i_7] [i_9] = 0;
                        arr_26 [i_0] [i_0] [i_0] [i_0] &= (((~var_4) ? var_9 : 1));
                        arr_27 [i_7] [i_7] = (((arr_4 [i_0] [i_7] [i_8] [i_9]) ? var_0 : 148));
                        var_20 &= 1359220672;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                {
                    arr_33 [i_11] [i_11] |= (((~var_11) | 15575727533659207658));
                    var_21 = (((var_3 ? 4829080464738499135 : -170468783)));
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 14;i_12 += 1)
    {
        var_22 *= ((var_10 ? ((var_4 ? (~var_0) : -4829080464738499135)) : var_5));
        arr_37 [i_12] [i_12] |= ((var_3 <= (((170468783 || 3175483369) ? (((arr_36 [8]) ? 120 : -7878818)) : var_7))));
        var_23 &= (~-170468783);
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 22;i_13 += 1)
    {

        for (int i_14 = 0; i_14 < 22;i_14 += 1)
        {
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                for (int i_16 = 1; i_16 < 1;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 22;i_17 += 1)
                    {
                        {
                            arr_51 [19] [i_15] [i_15] = (((arr_48 [12] [i_16 - 1]) | (arr_46 [i_16 - 1] [i_16 - 1] [i_16 - 1])));
                            arr_52 [i_13] [15] [i_13] [i_13] [i_15] = 1;
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_18 = 0; i_18 < 22;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 22;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 22;i_20 += 1)
                    {
                        {
                            var_24 *= ((var_8 && (arr_59 [17] [i_14] [i_14] [i_14] [i_14])));
                            var_25 = 105;
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_21 = 0; i_21 < 22;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 22;i_22 += 1)
                {
                    {
                        arr_69 [i_22] [i_22] [i_22] [i_13] |= ((121 ? (~6074800362580997403) : (((var_11 ? var_1 : var_9)))));
                        var_26 = (var_10 || 4194303);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_23 = 0; i_23 < 22;i_23 += 1)
            {
                for (int i_24 = 0; i_24 < 22;i_24 += 1)
                {
                    {

                        for (int i_25 = 1; i_25 < 21;i_25 += 1)
                        {
                            var_27 = (var_11 <= 65521);
                            var_28 = (((((-170468797 ? var_1 : 536870904))) ? (var_3 && var_9) : var_8));
                        }
                        for (int i_26 = 0; i_26 < 22;i_26 += 1)
                        {
                            var_29 = (max(var_29, (((-19 ? 120 : ((((arr_72 [5] [i_24] [i_23] [i_14]) && var_3))))))));
                            var_30 += 10905488152380307960;
                            arr_81 [i_24] [10] = (((arr_43 [18] [i_24] [8] [8]) ? -4829080464738499135 : 128));
                        }
                        for (int i_27 = 0; i_27 < 22;i_27 += 1)
                        {
                            var_31 = (max(var_31, (~var_4)));
                            var_32 *= ((var_7 ? var_9 : (arr_41 [i_27])));
                            var_33 |= var_8;
                            var_34 = 59748;
                            arr_86 [i_13] [i_14] [i_14] [i_24] [i_27] = ((128 ? var_4 : -2936098842037341914));
                        }
                        arr_87 [i_13] [i_14] [7] [i_24] |= 4194303;
                        var_35 = (((arr_55 [17]) ? 4194303 : var_13));

                        for (int i_28 = 0; i_28 < 1;i_28 += 1)
                        {
                            arr_90 [i_23] = var_0;
                            arr_91 [i_13] = 98;
                        }
                    }
                }
            }
            var_36 = (max(var_36, 1));
        }
        for (int i_29 = 0; i_29 < 22;i_29 += 1)
        {
            var_37 &= (-4829080464738499129 == (arr_83 [i_13] [i_13] [i_13] [i_29] [i_29] [i_29]));
            var_38 &= -8101880928626307378;
            var_39 |= var_11;
            arr_94 [i_13] [i_13] = ((1024 * (var_9 * 1359220673)));
        }
        var_40 *= 119;
    }
    for (int i_30 = 0; i_30 < 1;i_30 += 1)
    {
        var_41 = (max(var_41, 2301339409586323456));
        var_42 &= max(41305, (~224));
    }
    var_43 *= ((~(~120)));
    #pragma endscop
}
