/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_5 ? var_15 : (((var_2 ? ((1 << (var_15 - 1968169726))) : 1))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_20 *= var_6;
        var_21 *= (min(1, 2739933253));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                arr_8 [i_2] [i_2] = 2739933253;
                arr_9 [i_2] [i_1] [i_0] = 1;
            }
            for (int i_3 = 0; i_3 < 0;i_3 += 1)
            {

                for (int i_4 = 1; i_4 < 18;i_4 += 1)
                {
                    var_22 = ((~(arr_13 [i_4] [i_4] [i_4 - 1] [i_4] [i_4 + 1])));
                    arr_16 [1] [i_1] [11] = 1;
                }

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_23 += (arr_19 [i_0] [i_1] [i_3] [i_5]);
                    var_24 = 1209982088;
                    var_25 ^= ((arr_4 [i_3 + 1]) - var_12);
                    arr_20 [i_5] [i_1] [i_3] [i_5] = (~(arr_14 [i_3 + 1] [i_3 + 1] [i_5]));
                }
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {

                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        arr_26 [i_6] [i_1] [i_1] [i_1] [i_1] = (((arr_21 [i_3] [i_3 + 1] [i_3 + 1] [i_7] [i_7]) && (arr_25 [i_0] [i_3 + 1] [i_3 + 1] [i_6] [i_6] [i_7 - 1])));
                        var_26 = (max(var_26, 95976613));
                        arr_27 [i_0] [i_1] [i_6] [i_6] [i_7 - 1] = var_8;
                    }
                    var_27 = (((arr_3 [i_0]) ? var_10 : var_12));
                    arr_28 [i_0] [i_6] [i_0] [1] = arr_18 [i_6] [i_0] [i_3 + 1] [i_6];
                }

                for (int i_8 = 3; i_8 < 20;i_8 += 1) /* same iter space */
                {
                    arr_31 [i_0] [1] [1] [i_0] [i_0] [i_0] |= 1;
                    var_28 = (min(var_28, (((!(arr_19 [i_8 - 3] [i_8 - 2] [i_3 + 1] [i_3 + 1]))))));
                    arr_32 [i_0] [i_0] [i_1] [i_3] [i_8 - 3] = (((arr_19 [i_3 + 1] [i_8 + 1] [i_3 + 1] [i_8 - 2]) && (arr_19 [i_3 + 1] [i_8 + 1] [i_3] [i_3])));
                }
                for (int i_9 = 3; i_9 < 20;i_9 += 1) /* same iter space */
                {
                    arr_36 [i_9] [i_1] [i_1] [i_3] [i_3] [i_9] = (var_1 & 1);
                    var_29 = var_6;
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 19;i_11 += 1)
                    {
                        {
                            var_30 = 1;
                            arr_42 [i_0] [i_1] [i_3] [i_10] [i_10] = ((arr_0 [i_11]) ^ 3090854389);
                        }
                    }
                }
            }
            for (int i_12 = 1; i_12 < 1;i_12 += 1)
            {
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        {
                            arr_52 [i_0] &= arr_29 [i_0] [i_1] [i_12] [i_12 - 1] [i_14] [19];
                            var_31 = ((arr_46 [i_12] [i_12 - 1] [i_12] [i_12 - 1]) ? var_8 : (arr_30 [i_0] [i_1] [i_14]));
                            arr_53 [i_0] [i_0] [i_0] [i_0] [i_0] [i_13] [i_0] = 4198990682;
                            var_32 = (!1689114329);
                        }
                    }
                }
                var_33 = (max(var_33, (((4198990683 & (1 | 1))))));
            }
            arr_54 [i_1] [i_0] = (((((-(arr_29 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1])))) ? ((2993789838 ? var_16 : var_3)) : (((arr_46 [i_0] [i_0] [i_0] [i_1]) ? 1 : 1776490626))));
            arr_55 [i_0] [i_0] &= (((arr_41 [i_0] [i_0] [i_1] [i_1] [1]) ? (1 < 1555034042) : (arr_39 [i_0] [i_0] [i_1])));
            var_34 = (max(var_34, var_4));
        }
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            var_35 = (max(var_35, 2739933253));
            arr_59 [i_15] [i_0] [i_0] |= var_17;
        }
    }
    for (int i_16 = 1; i_16 < 1;i_16 += 1)
    {
        arr_62 [i_16 - 1] = arr_3 [i_16];
        arr_63 [i_16 - 1] = (65535 >= (1 + 65535));
    }
    for (int i_17 = 0; i_17 < 21;i_17 += 1)
    {
        var_36 = (min(var_36, (arr_47 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17])));
        var_37 ^= arr_65 [i_17];
    }
    var_38 = 95976613;
    #pragma endscop
}
