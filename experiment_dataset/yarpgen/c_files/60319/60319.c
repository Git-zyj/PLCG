/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((--16) ? ((13715 ? 2 : 1)) : 5009);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((arr_0 [i_0]) / (arr_0 [i_0])));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
            {

                for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
                {
                    var_15 *= var_1;
                    var_16 = (((arr_1 [i_3]) || 1));

                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        var_17 = -1;
                        var_18 = (!var_4);
                        var_19 -= ((var_3 << (((arr_5 [i_0] [i_1] [i_2]) - 189))));
                        var_20 = (((arr_5 [i_4] [i_4] [i_4]) ? (((var_1 != (arr_7 [i_0] [i_3])))) : (arr_0 [i_0])));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_18 [0] [i_1] [i_2] [i_0] [i_5] [i_5] &= ((var_10 || (((var_12 ? 1 : (arr_1 [1]))))));
                        var_21 += 28672;
                    }

                    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                    {
                        var_22 &= (((arr_15 [i_0] [i_1] [i_0] [i_2] [i_3] [i_6] [i_6]) / (arr_15 [i_0] [i_1] [i_0] [i_3] [i_6] [10] [2])));
                        var_23 -= ((!(((-4 ? var_10 : (arr_8 [8]))))));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        arr_23 [i_3] [i_3] = (arr_19 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] [i_2]);
                        var_24 = (236 / 131);
                        var_25 ^= 236;
                    }
                }
                for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
                {
                    var_26 -= var_12;
                    var_27 = ((-(((arr_11 [i_0]) ? (arr_5 [5] [i_1] [i_2]) : (arr_13 [i_8] [2] [i_2] [i_2] [i_1] [9] [i_0])))));
                }
                var_28 ^= ((215 ? (((arr_3 [i_0]) | (arr_6 [i_0] [i_0]))) : var_0));
                var_29 |= (!1);
            }
            for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
            {
                arr_28 [i_0] |= (arr_16 [i_9] [7] [i_0] [10] [i_1] [i_0] [i_0]);
                var_30 = (-1012393037 + -3973065095452437891);
            }
            for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
            {
                arr_31 [i_10] [i_10] [i_10] [3] = (arr_25 [4] [i_0]);
                var_31 *= 16;

                for (int i_11 = 3; i_11 < 12;i_11 += 1)
                {
                    var_32 = (((var_2 / var_13) * (arr_13 [i_0] [3] [i_10] [i_0] [i_0] [i_1] [i_1])));
                    var_33 *= var_7;
                }
                for (int i_12 = 0; i_12 < 13;i_12 += 1) /* same iter space */
                {
                    var_34 += 242;
                    arr_38 [i_12] [i_10] [i_1] = arr_29 [10] [i_0] [i_10] [i_12];
                }
                for (int i_13 = 0; i_13 < 13;i_13 += 1) /* same iter space */
                {
                    var_35 &= (((((var_13 ? var_9 : 55))) ? 11 : (arr_24 [i_13] [i_10] [i_1] [i_0])));
                    arr_43 [6] [1] [i_1] = var_12;
                }
                for (int i_14 = 0; i_14 < 13;i_14 += 1) /* same iter space */
                {
                    arr_46 [i_0] [i_1] [i_10] = var_5;

                    for (int i_15 = 0; i_15 < 13;i_15 += 1) /* same iter space */
                    {
                        var_36 -= (((arr_1 [i_14]) / (arr_40 [i_0] [i_14])));
                        arr_49 [i_15] [1] [i_15] [i_0] [i_15] [10] [i_0] = ((arr_0 [i_0]) * (arr_0 [8]));
                        var_37 += ((((-(arr_30 [i_0])))) ? (arr_13 [i_15] [5] [i_15] [12] [i_15] [i_15] [i_15]) : (25239 >= 68));
                        arr_50 [i_0] [i_15] [i_10] [i_14] [i_15] = arr_44 [i_1] [12] [11] [i_15];
                    }
                    for (int i_16 = 0; i_16 < 13;i_16 += 1) /* same iter space */
                    {
                        var_38 = ((((233 ? 1 : (arr_19 [i_0] [i_1] [2] [4] [i_14] [i_0] [i_1]))) | (arr_25 [i_0] [i_0])));
                        var_39 ^= (((((232 ? var_3 : (arr_51 [i_16] [i_14] [i_10] [i_1] [i_0])))) ? (arr_36 [i_0] [3] [3] [3] [12]) : ((1 ? (arr_22 [i_0] [i_1] [i_10] [i_0] [i_16]) : 1))));
                    }
                    for (int i_17 = 0; i_17 < 13;i_17 += 1) /* same iter space */
                    {
                        arr_56 [i_0] [11] [i_10] [i_14] [i_17] = (((arr_3 [i_17]) ? (arr_24 [i_0] [i_1] [i_10] [7]) : (var_5 / var_0)));
                        arr_57 [i_0] [i_1] [1] [1] = ((~(arr_12 [i_0] [3])));
                        var_40 ^= (((-46 ? 998651857 : var_11)));
                        arr_58 [0] [i_1] [i_17] [i_0] [i_17] [i_0] [7] = 956711475;
                    }
                    arr_59 [i_0] [i_1] [i_10] [i_14] = 65524;
                    var_41 = (((arr_3 [i_0]) || (arr_3 [i_0])));
                }
            }
            var_42 ^= ((-49 ? 4053799014 : 241168277));
            var_43 *= ((60 ? 998651857 : 1));
        }
    }
    #pragma endscop
}
