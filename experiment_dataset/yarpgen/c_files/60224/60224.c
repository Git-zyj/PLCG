/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_19 = (max(var_19, (arr_2 [i_0])));
        arr_3 [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((~(arr_1 [i_1])));
        var_20 += (~var_3);

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_21 = (((((~(arr_9 [i_1])))) ? (((arr_8 [i_1] [i_1]) ? ((max(var_4, (arr_0 [i_1])))) : (arr_4 [i_2]))) : (!0)));
            arr_10 [i_1] [i_2] [11] = (max((max(((max((arr_2 [i_2]), (arr_0 [i_1])))), (max(var_0, (arr_4 [i_2]))))), (((var_1 >> ((var_4 ? (arr_5 [i_1]) : var_8)))))));

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_22 = ((((((arr_6 [i_1]) ? var_5 : (max((arr_1 [i_1]), var_3))))) ? (arr_13 [1] [i_2] [1] [i_3]) : (arr_6 [i_1])));
                arr_14 [i_1] [i_2] [i_3] = (arr_8 [i_1] [i_1]);
                var_23 = (max((((arr_12 [0] [i_3] [i_3]) >> (((arr_12 [i_3] [i_3] [i_3]) - 109)))), (((min((arr_4 [i_2]), (arr_8 [i_1] [24])))))));
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                arr_17 [i_1] [i_2] [i_2] = (((arr_16 [4] [4] [4] [4]) ? ((var_8 ? (arr_9 [i_1]) : (arr_0 [i_1]))) : (((((arr_13 [1] [i_2] [i_2] [i_4]) || var_0))))));
                arr_18 [i_4] &= (((arr_12 [i_1] [i_4] [15]) ? var_14 : var_13));
                arr_19 [i_1] = var_17;
            }
            for (int i_5 = 1; i_5 < 24;i_5 += 1)
            {
                arr_22 [15] [i_2] [15] [i_1] = var_5;
                var_24 = ((~((min((arr_6 [i_1]), ((((arr_16 [i_1] [i_1] [i_2] [1]) || var_17))))))));
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        {
                            var_25 = ((!(arr_12 [i_2] [5] [i_6 + 2])));
                            arr_29 [i_1] [23] [i_2] [i_6] [10] = ((~(arr_15 [i_6 + 1] [i_5 + 1] [i_5 + 1])));
                            var_26 = (max(var_26, (18446744073709551615 * 0)));
                        }
                    }
                }
                arr_30 [i_1] = (arr_16 [i_1] [i_1] [i_1] [i_5]);
            }
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                var_27 *= ((((arr_1 [16]) ? ((((arr_13 [i_8] [i_2] [i_1] [i_1]) & var_16))) : ((~(arr_21 [2] [i_2] [20]))))));
                var_28 = var_8;
                var_29 = (((((~((var_1 ? (arr_2 [i_1]) : (arr_25 [i_1] [i_1] [i_1] [i_2] [i_8] [i_1])))))) ? (((~var_9) & (arr_2 [i_8]))) : (~var_12)));
            }
        }
        arr_34 [i_1] = var_7;

        /* vectorizable */
        for (int i_9 = 0; i_9 < 0;i_9 += 1)
        {

            for (int i_10 = 3; i_10 < 23;i_10 += 1)
            {
                arr_42 [i_1] [i_10 + 2] [1] [i_9 + 1] = var_2;
                var_30 = (max(var_30, ((((arr_40 [i_9] [16] [i_9]) ? (arr_21 [i_9] [i_9 + 1] [18]) : (arr_39 [i_9] [i_9 + 1] [i_9] [20]))))));
            }
            for (int i_11 = 3; i_11 < 24;i_11 += 1)
            {
                var_31 = (((arr_36 [i_9 + 1]) - (arr_36 [i_9 + 1])));
                var_32 = (max(var_32, -7938));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 25;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        {
                            var_33 = (i_1 % 2 == zero) ? ((((arr_33 [i_1] [i_11 - 3]) ? ((((((arr_39 [9] [i_9 + 1] [9] [i_1]) + 2147483647)) << (((arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) - 94))))) : (arr_37 [i_9] [i_11] [i_1])))) : ((((arr_33 [i_1] [i_11 - 3]) ? ((((((((arr_39 [9] [i_9 + 1] [9] [i_1]) - 2147483647)) + 2147483647)) << (((((((arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) - 94)) + 184)) - 5))))) : (arr_37 [i_9] [i_11] [i_1]))));
                            arr_51 [i_1] [i_1] [1] [i_1] [i_1] [1] [i_1] = (((arr_23 [i_9 + 1] [i_9 + 1] [i_11 + 1] [i_1]) - (arr_25 [i_9] [i_9] [i_9 + 1] [i_9] [i_9] [i_1])));
                        }
                    }
                }
                var_34 = arr_23 [i_1] [i_1] [i_1] [i_1];
            }
            for (int i_14 = 0; i_14 < 25;i_14 += 1)
            {
                arr_54 [i_1] = var_3;
                arr_55 [i_14] [i_1] [17] = (((arr_2 [i_9 + 1]) ? (arr_2 [i_9 + 1]) : (arr_2 [i_9 + 1])));
                arr_56 [i_14] [i_1] [i_1] [i_1] = (((~var_14) - (((arr_5 [i_1]) ? var_9 : (arr_49 [i_1] [i_9] [i_1] [i_1] [i_1] [i_14] [i_9])))));
                var_35 = (((arr_41 [i_1] [i_9 + 1]) ? var_10 : (arr_35 [i_1] [i_1])));
                var_36 = ((~(arr_41 [i_1] [i_9 + 1])));
            }
            for (int i_15 = 2; i_15 < 23;i_15 += 1)
            {
                var_37 = (((arr_32 [i_15 + 1] [i_15 - 1] [i_9 + 1]) & (arr_32 [i_15 - 1] [i_15 + 2] [i_9 + 1])));
                var_38 = (arr_23 [i_1] [i_9] [i_9] [i_1]);
                var_39 = ((~(arr_53 [i_1] [i_9 + 1] [i_1] [i_9])));
            }
            var_40 = (((arr_0 [i_1]) ? (arr_0 [i_1]) : (arr_0 [i_1])));
        }
    }
    for (int i_16 = 0; i_16 < 25;i_16 += 1) /* same iter space */
    {
        var_41 = var_6;
        var_42 = (max(var_42, (((~(arr_5 [18]))))));
        /* LoopNest 3 */
        for (int i_17 = 0; i_17 < 25;i_17 += 1)
        {
            for (int i_18 = 1; i_18 < 23;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 25;i_19 += 1)
                {
                    {
                        var_43 = (~var_6);
                        var_44 = (min((((arr_36 [i_19]) - (max(var_0, var_0)))), (var_11 ^ var_13)));
                    }
                }
            }
        }
    }
    var_45 = (var_13 + var_15);
    var_46 = var_7;
    #pragma endscop
}
