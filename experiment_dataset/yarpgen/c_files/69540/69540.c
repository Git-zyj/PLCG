/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_18, (((-2147483642 == var_0) * ((65533 ? 2147483642 : var_17))))));

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_20 *= (max((~var_14), (((arr_1 [i_0 + 1] [0]) ? (((min((arr_0 [18]), (arr_1 [2] [4]))))) : ((var_7 + (arr_0 [18])))))));

        for (int i_1 = 4; i_1 < 24;i_1 += 1)
        {
            var_21 *= (var_11 | -var_18);
            var_22 = (min(var_22, (1799 && var_16)));
            var_23 *= ((((((-8 & var_16) ? -18446744073709551596 : (arr_0 [i_1])))) ? ((var_9 - (arr_1 [i_1] [i_1]))) : (arr_1 [i_1] [i_1])));
            var_24 = (max(var_7, (((var_5 << (((~var_1) + 244)))))));
            var_25 = (arr_0 [i_0]);
        }
        for (int i_2 = 1; i_2 < 23;i_2 += 1)
        {
            var_26 = (max(1012597535, 9));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            var_27 *= var_11;
                            arr_15 [i_0] [i_2] [i_0] = ((1799 >> (var_9 - 38587)));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 22;i_8 += 1)
                    {
                        {
                            var_28 = -2147483622;
                            var_29 *= ((((arr_14 [i_0 + 1] [i_2 + 2] [i_8 + 2] [i_8] [i_8] [i_8 + 1]) ? (arr_14 [i_0 - 1] [i_0 - 1] [i_8 + 3] [i_8] [i_8] [i_8]) : 16)));
                            var_30 = (min(var_10, ((var_10 - (arr_8 [i_2 + 2])))));
                        }
                    }
                }
            }

            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {

                /* vectorizable */
                for (int i_10 = 2; i_10 < 22;i_10 += 1)
                {
                    var_31 = (max(var_31, var_17));
                    var_32 = (min(var_32, 29));
                    var_33 = ((14587 ? 1 : 15));
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
                {
                    var_34 = (min(var_34, (arr_28 [i_0] [i_11] [i_11])));
                    var_35 *= (((arr_2 [i_0 + 1]) << (arr_2 [i_0 + 1])));
                }
                for (int i_12 = 0; i_12 < 25;i_12 += 1) /* same iter space */
                {
                    arr_37 [i_0] [i_2] [i_0] [i_9] [i_12] = (!9);
                    var_36 = 20;
                }
                var_37 = var_17;
            }
            /* vectorizable */
            for (int i_13 = 2; i_13 < 24;i_13 += 1)
            {
                var_38 = (2122162507607721774 + 0);
                var_39 *= var_18;

                for (int i_14 = 1; i_14 < 23;i_14 += 1)
                {
                    var_40 *= 139;
                    var_41 = (max(var_41, ((((arr_29 [i_0 - 1] [0] [6]) ? var_17 : (arr_29 [i_0 - 1] [22] [i_2]))))));
                    arr_42 [i_0] = (((((1 >> (2147483642 - 2147483616)))) ? (arr_6 [i_0] [i_13 - 1]) : (arr_20 [i_0] [i_0] [i_0] [i_0])));
                    var_42 = (max(var_42, (arr_27 [i_14 + 2] [i_0 + 1] [i_0 - 1])));
                }
                var_43 = (min(var_43, (((-(arr_10 [i_0 + 1] [i_13 - 1]))))));
            }
            for (int i_15 = 3; i_15 < 22;i_15 += 1)
            {
                var_44 = (((((((26 > 43275) > 4212916946)))) != (((((1 ? var_14 : 1799))) ? (arr_27 [i_15 - 3] [i_2 + 2] [i_0 + 1]) : -12))));
                var_45 = var_4;
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    for (int i_17 = 1; i_17 < 22;i_17 += 1)
                    {
                        {
                            var_46 *= (arr_11 [i_0 - 1] [i_15 + 1] [1] [i_15] [i_15 + 1]);
                            var_47 = (2872727927 * 53);
                        }
                    }
                }
            }
            for (int i_18 = 0; i_18 < 25;i_18 += 1)
            {
                var_48 *= ((-((var_12 ? -63 : var_4))));
                var_49 *= (min((!3279449208680506013), 32767));
                var_50 *= (min(((33 + (arr_31 [i_18] [i_18] [i_18] [i_2 + 1]))), (0 * 0)));
                var_51 *= arr_0 [i_18];
            }
            arr_53 [i_0] [i_2] = (4294967294 + var_6);
        }
        var_52 = (min(var_52, (arr_17 [i_0] [i_0] [i_0 + 1] [i_0])));
        arr_54 [i_0] = (-(((arr_4 [i_0 - 1] [i_0 + 1] [i_0 + 1]) ? (arr_41 [i_0 + 1]) : (arr_26 [i_0] [i_0]))));
        var_53 = ((((((78 >> (-26498 + 26512))) / (0 != 139))) + 33));
    }
    #pragma endscop
}
