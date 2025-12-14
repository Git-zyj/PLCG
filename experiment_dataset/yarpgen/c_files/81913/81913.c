/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -31;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_13 = (min(var_13, (((-31 ? 7788807187084078982 : -27)))));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 1; i_2 < 15;i_2 += 1) /* same iter space */
            {
                var_14 = 7752;
                arr_7 [i_0] [i_2] [i_0] = (((arr_0 [i_2 - 1]) ? (((arr_6 [i_0] [i_0] [8] [i_2 - 1]) ? (arr_5 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 - 1]) : var_11)) : ((((((arr_3 [i_0]) + 2147483647)) << (var_11 - 9921))))));
                var_15 = (((arr_5 [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1]) ? var_6 : var_8));

                for (int i_3 = 2; i_3 < 14;i_3 += 1)
                {
                    arr_11 [i_0] [i_2] = var_4;
                    arr_12 [i_0] [i_2] = arr_5 [i_2] [i_1] [i_2 + 1] [i_0];
                }
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    var_16 = (((arr_3 [i_2 + 1]) ? (arr_3 [i_2 + 1]) : (arr_3 [i_2 - 1])));
                    arr_17 [4] [i_1] [i_1] [i_2] = 5307;
                    var_17 -= (arr_14 [i_0] [i_1] [i_1]);
                }
            }
            /* vectorizable */
            for (int i_5 = 1; i_5 < 15;i_5 += 1) /* same iter space */
            {
                arr_21 [i_0] [i_0] [1] = (arr_5 [12] [12] [6] [i_5 - 1]);
                var_18 -= -17062;
                arr_22 [i_0] [i_1] [i_5] [i_5] &= (((~var_11) ? (((arr_9 [i_0] [i_0] [i_5]) ? var_4 : (arr_5 [7] [i_1] [i_5 + 1] [i_5]))) : (((var_5 ? var_4 : 26)))));
            }
            /* vectorizable */
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                var_19 = (arr_10 [i_0] [i_1] [i_1] [9] [i_0] [i_1]);
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        {
                            var_20 = var_4;
                            arr_33 [i_0] [i_1] [i_6] [i_0] [i_8] = ((((var_2 ? (arr_8 [4] [i_1] [4] [i_6] [i_7] [4]) : var_2))) > (((arr_0 [2]) ? (arr_27 [i_0] [5]) : (arr_19 [i_0] [i_1] [i_6]))));
                            var_21 = (arr_5 [i_0] [i_1] [9] [i_7]);
                            var_22 = var_4;
                            arr_34 [i_0] [i_0] [i_6] [i_7] [i_8] = var_8;
                        }
                    }
                }
            }
            var_23 *= (((arr_14 [i_0] [i_1] [i_1]) > ((var_2 >> (((arr_14 [i_0] [i_1] [i_1]) - 19166))))));
            arr_35 [i_0] = (!((((max(-31, (arr_0 [6])))) || (((149 ? 11156499033231953789 : 30))))));
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
        {
            var_24 += (arr_5 [i_0] [i_9] [i_0] [i_9]);
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 14;i_11 += 1)
                {
                    {

                        for (int i_12 = 0; i_12 < 16;i_12 += 1)
                        {
                            var_25 = ((27 || (arr_43 [i_11 - 1] [i_10] [i_11] [i_11 - 1])));
                            var_26 = (-(26 > 4331618760960116721));
                            arr_48 [1] [5] [i_9] [5] [i_10] [i_12] = ((var_5 % (arr_42 [i_0] [i_9] [12] [i_12])));
                            arr_49 [i_10] [i_10] = (arr_44 [i_11 - 1] [i_9] [i_10] [i_11] [i_12] [i_12]);
                            var_27 = ((~(arr_37 [i_0])));
                        }
                        var_28 = (((arr_46 [8] [i_11 + 1] [8] [i_11 + 2] [i_11 + 1] [i_11 + 2]) ? (((arr_25 [i_0] [i_0] [i_0] [i_0]) ? var_10 : (arr_27 [i_10] [i_0]))) : (arr_38 [i_10] [4] [4] [i_11])));
                    }
                }
            }
        }
        for (int i_13 = 0; i_13 < 16;i_13 += 1) /* same iter space */
        {
            var_29 = ((var_5 << ((var_11 ? (((arr_0 [i_13]) ? 0 : var_5)) : var_1))));

            /* vectorizable */
            for (int i_14 = 3; i_14 < 14;i_14 += 1)
            {

                for (int i_15 = 0; i_15 < 16;i_15 += 1)
                {
                    var_30 = (arr_53 [i_13] [i_13]);
                    var_31 = (max(var_31, ((((arr_47 [i_0] [i_13] [i_14] [i_14] [i_0] [9] [i_14]) ? (arr_25 [i_0] [i_14 - 3] [i_14 - 3] [i_14 - 3]) : var_11)))));
                    arr_59 [i_0] [i_0] = (((((arr_29 [i_13] [3]) ? 0 : var_1))) ? ((var_2 >> (var_8 - 2145642235))) : 8878);
                }
                for (int i_16 = 1; i_16 < 15;i_16 += 1)
                {
                    arr_62 [i_0] [i_13] [i_14] [i_14] = ((((var_6 ? (arr_40 [i_13] [i_16]) : var_10)) << (var_0 - 2138228558078291191)));
                    var_32 = var_1;
                }
                arr_63 [i_0] [i_0] [0] [i_0] = (((((~27) + 2147483647)) >> (((arr_13 [i_13] [i_14 - 2] [i_14 - 2] [i_14 + 1]) + 27799))));
            }
            var_33 -= var_0;
        }
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 19;i_17 += 1)
    {
        arr_66 [10] = var_8;

        for (int i_18 = 0; i_18 < 19;i_18 += 1)
        {
            arr_70 [i_18] = -31;
            var_34 = (arr_69 [i_17] [i_18]);
            var_35 = (((arr_69 [i_17] [i_18]) ? ((var_3 ? (arr_67 [i_17] [i_17] [i_17]) : var_11)) : ((var_6 ? (arr_65 [i_17] [i_18]) : (arr_67 [i_17] [i_18] [1])))));
        }
        var_36 = ((var_7 ? (arr_64 [i_17]) : var_2));
    }
    for (int i_19 = 0; i_19 < 1;i_19 += 1)
    {
        var_37 = (max(var_37, (arr_61 [i_19])));
        arr_73 [i_19] = (((((var_2 > var_5) ? 12038163811293253953 : 1694785153974703502)) % (((((1283 ? var_7 : 0))) ? (arr_56 [i_19] [i_19] [7] [i_19]) : var_7))));
    }
    #pragma endscop
}
