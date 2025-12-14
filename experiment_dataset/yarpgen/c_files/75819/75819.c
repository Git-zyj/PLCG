/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_16 = (max(var_16, ((min(((var_0 % ((32767 ? var_11 : (arr_2 [i_0]))))), (((var_13 ? (arr_2 [15]) : 20))))))));
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        var_17 = (((arr_3 [i_3] [i_0] [i_0]) ? (arr_12 [i_1] [4] [1] [i_1]) : var_2));

                        /* vectorizable */
                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            var_18 &= ((-3681535141 ? (!3681535141) : (~var_13)));
                            var_19 ^= var_11;
                        }
                        arr_17 [i_0] [i_1] = ((((var_3 * (!var_1))) == (~53)));
                        arr_18 [i_0] [i_1] [1] [22] = 3681535166;

                        for (int i_5 = 1; i_5 < 22;i_5 += 1)
                        {
                            arr_21 [i_3] [i_3] [1] [i_3] [i_1] = ((var_13 <= (min(var_8, (arr_13 [i_1] [i_5] [i_5 - 1] [i_5 + 1] [i_5 - 1] [i_5 - 1])))));
                            var_20 -= var_5;
                            var_21 = (arr_2 [i_5]);
                            var_22 = (min(var_22, (arr_16 [i_2] [i_3] [6] [i_3] [i_2])));
                        }
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    {
                        arr_34 [i_6] [0] [i_8] [i_9] = (((-101 % (arr_11 [13]))));
                        arr_35 [i_6] [i_7] [i_8] [i_6] = var_14;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 22;i_11 += 1)
                {
                    {
                        var_23 ^= (((arr_16 [i_6] [i_7] [i_11 + 1] [i_11] [i_7]) ? (arr_37 [i_6] [i_7]) : (arr_16 [i_11 - 1] [i_11 - 2] [i_11 - 1] [6] [i_11 - 1])));
                        var_24 = (max(var_24, (arr_39 [i_6])));

                        for (int i_12 = 0; i_12 < 23;i_12 += 1)
                        {
                            var_25 *= 100;
                            var_26 = (~((-(arr_5 [i_7] [i_7] [i_11] [i_12]))));
                            arr_45 [i_6] [i_10] [i_7] [i_12] |= (((!var_13) && -8338660976516476430));
                        }
                        var_27 |= (((~var_14) ? (arr_13 [i_7] [i_11] [20] [i_7] [i_7] [i_7]) : (2147483647 - var_11)));
                    }
                }
            }
            var_28 = ((-var_5 ? ((2147483647 ? var_10 : (arr_11 [i_6]))) : (((32767 ? 45 : (arr_40 [i_6] [i_6] [i_7] [i_7]))))));
        }
        /* vectorizable */
        for (int i_13 = 4; i_13 < 22;i_13 += 1)
        {
            /* LoopNest 2 */
            for (int i_14 = 3; i_14 < 22;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 23;i_15 += 1)
                {
                    {
                        var_29 ^= var_6;
                        var_30 = ((-(((arr_50 [i_14]) ? (arr_40 [i_15] [i_6] [i_6] [i_6]) : var_1))));
                    }
                }
            }
            arr_54 [i_6] = (((12889 & var_9) ? ((16 + (arr_46 [i_6] [i_6] [i_6]))) : 37435));
            var_31 = (arr_3 [i_13 - 2] [i_13 - 4] [i_13 + 1]);
        }
        arr_55 [i_6] = var_11;
    }
    var_32 = var_0;
    #pragma endscop
}
