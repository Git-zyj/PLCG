/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((var_3 ? var_6 : var_4))) ? (~4197639271759288413) : (((((-19427 ? 18446744073709551615 : var_0))) ? var_0 : var_1)));
    var_11 = ((((4197639271759288416 - var_5) - (max(var_8, var_9)))));
    var_12 = (max(var_12, var_4));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = -4197639271759288414;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {

                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            var_13 ^= arr_7 [i_0] [i_1] [i_0];
                            var_14 ^= (((arr_7 [i_4] [i_1] [i_0]) ? (arr_2 [i_0]) : (arr_14 [i_4 + 3] [i_4] [i_3] [i_2 - 1] [i_1 - 1] [i_1])));
                            arr_15 [i_1] &= (((-32748 % -32762) ? (arr_10 [i_2] [i_2] [i_2 - 1] [i_2 + 1]) : (((var_8 ? 2147483647 : var_8)))));
                            arr_16 [i_2] [i_3] [i_1] [i_2] = (~1);
                        }
                        for (int i_5 = 1; i_5 < 18;i_5 += 1)
                        {
                            arr_21 [i_0] [i_0] [i_0] [i_3] [i_0] [i_0] [i_2] = (!912);
                            var_15 = 7;
                            arr_22 [i_2] = ((arr_11 [i_3] [i_3] [i_1 + 1] [i_0]) * (~18446744073709551601));
                        }
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            var_16 -= (var_3 & -4197639271759288417);
                            arr_26 [i_2] = (!var_2);
                            arr_27 [19] [i_3] [i_3] [i_3] [i_2] [i_3] [i_2 - 1] = (((arr_10 [i_2] [i_2] [i_0] [i_0]) ? (arr_14 [i_0] [i_1 - 1] [i_0] [i_3] [i_6] [i_2 + 1]) : (var_9 / 65535)));
                        }

                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            arr_30 [i_0] [i_0] [i_2] = (!0);
                            arr_31 [i_2] [10] [10] [i_7] = ((39 ? -2147483618 : -4197639271759288414));
                        }
                    }
                    for (int i_8 = 3; i_8 < 17;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            var_17 = (min(var_17, (arr_29 [i_1] [i_1] [i_1] [i_1 - 2] [i_1])));
                            var_18 = (!var_5);
                            arr_38 [i_2] = (arr_8 [i_0] [i_0] [i_0] [i_0]);
                        }
                        for (int i_10 = 3; i_10 < 17;i_10 += 1)
                        {
                            arr_42 [i_1] [i_8] [i_1] [i_1] [i_1] &= var_0;
                            arr_43 [i_8] [i_2] [i_2] = (arr_39 [i_0] [i_1 + 1] [i_1 + 1]);
                        }
                        for (int i_11 = 3; i_11 < 20;i_11 += 1) /* same iter space */
                        {
                            var_19 = (max(var_19, (arr_14 [i_0] [i_1 + 1] [i_2] [i_8] [i_0] [i_0])));
                            var_20 = (arr_1 [i_0] [i_1]);
                            var_21 &= 4018862212;
                            arr_46 [i_0] [i_2] [i_2] [i_8] [i_11] = (!4197639271759288438);
                        }
                        for (int i_12 = 3; i_12 < 20;i_12 += 1) /* same iter space */
                        {
                            arr_51 [i_0] [i_0] [i_2] = var_5;
                            var_22 ^= (~var_3);
                            var_23 *= ((0 * (~255)));
                            arr_52 [i_12 - 1] [i_2] [i_2] [i_2] [i_0] = (((arr_36 [i_0] [i_12 - 2]) ? (arr_25 [i_2] [i_2 - 1] [i_2 - 1] [i_2] [13]) : (28 % 1714913746)));
                            arr_53 [i_2] [i_8 + 4] [i_0] [i_1] [i_2] = (arr_8 [i_2 - 1] [i_8 + 2] [3] [i_2 - 1]);
                        }
                        var_24 &= (~var_9);
                    }
                    var_25 = (((arr_28 [i_2] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_1 - 1]) ? (arr_49 [i_2 + 1] [i_2] [i_1 - 1] [i_2 + 1] [i_2 + 1] [i_1 - 1]) : (arr_29 [i_2 + 1] [i_2 + 1] [i_1 + 1] [i_2 + 1] [i_1 + 1])));
                }
            }
        }
        arr_54 [i_0] |= ((38795 != (arr_40 [i_0] [i_0] [2] [i_0] [1])));
    }
    #pragma endscop
}
