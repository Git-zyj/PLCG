/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((~(var_4 / var_4)));
    var_17 = (((((~(max(25, 26596))))) ? (((!(var_0 ^ var_14)))) : var_5));

    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        var_18 = (min(var_18, 63));
        var_19 = arr_0 [i_0];

        for (int i_1 = 1; i_1 < 18;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_20 = (max(var_20, ((max((((max((arr_3 [i_0] [i_1] [i_4]), (arr_0 [i_1]))) * 0)), (arr_11 [1] [i_3] [i_2] [i_3] [i_4]))))));
                            var_21 *= 1;
                        }
                    }
                }
                var_22 = (((((~((((arr_4 [i_1]) >= -2345408157678585394)))))) ? (arr_10 [i_0 + 3] [i_2] [i_1] [i_0 - 2] [i_0 + 3]) : var_4));
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        {
                            var_23 -= (~var_14);
                            arr_22 [i_0 - 1] [i_1] [i_2] [i_5] = (arr_0 [i_6]);
                            var_24 = var_12;
                        }
                    }
                }
                arr_23 [i_1] [i_1] [i_2] = 1;
            }
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                var_25 = -var_9;
                var_26 = 1;
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        {
                            arr_35 [i_1] = (((arr_1 [i_7] [i_9]) ^ ((var_0 ? (arr_14 [i_0] [i_0 - 3] [i_0 - 4]) : (arr_14 [i_0 - 1] [i_0 + 3] [i_0 + 4])))));
                            arr_36 [i_9] [i_7] [i_7] [i_1] [i_7] [i_0] |= ((((((arr_20 [2] [i_1] [i_7] [i_8] [1]) + 2147483647)) << (var_4 - 2809896520))));
                            var_27 *= (max((arr_21 [i_0] [i_0] [i_1] [i_8] [i_8] [i_9]), (min(-1, ((max(var_15, var_8)))))));
                        }
                    }
                }
            }
            var_28 = var_14;
        }
        for (int i_10 = 1; i_10 < 18;i_10 += 1) /* same iter space */
        {
            var_29 &= var_10;
            var_30 = (((((((arr_18 [i_0] [i_0] [i_0 + 2] [i_10] [i_10]) ? var_10 : (arr_16 [i_0] [i_0] [i_10])))) ? ((min(var_4, var_14))) : (max((arr_28 [6] [i_0] [i_10] [i_10 - 1]), (arr_14 [i_0] [i_0] [i_10]))))));
        }
        for (int i_11 = 1; i_11 < 18;i_11 += 1) /* same iter space */
        {
            arr_43 [i_0] [i_11] = ((var_11 & (((max(var_3, var_0))))));
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 20;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 20;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 19;i_14 += 1)
                    {
                        {
                            var_31 = 1;
                            var_32 *= ((min(var_10, (max(var_11, -8041047170342793809)))));
                            arr_52 [i_0] = (arr_15 [i_0] [0] [i_0] [i_13]);
                            var_33 &= ((~(max(((-12567 ? (arr_26 [i_0] [i_12] [i_12] [14]) : var_2)), ((((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0 + 1]) <= (arr_15 [i_0] [12] [i_12] [i_12]))))))));
                            var_34 = ((-((max(var_14, (arr_45 [i_11 + 1] [i_14 - 1]))))));
                        }
                    }
                }
            }
            arr_53 [i_11] = (((arr_16 [1] [i_11 + 2] [i_11]) >= var_5));
        }
    }
    #pragma endscop
}
