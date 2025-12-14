/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_21 = ((~((var_9 ? 1 : var_14))));
        var_22 -= (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_23 = (max(var_23, (((((min(((15811825418248583370 ? var_0 : var_8)), (!var_6)))) ? ((max((arr_6 [i_1] [i_1] [3]), var_4))) : ((var_0 ? 1 : (min((arr_5 [i_2]), 165)))))))));

            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                var_24 = var_10;

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        var_25 = (min(var_25, (min(var_13, var_2))));
                        var_26 = ((min((((arr_6 [i_1] [i_2] [i_5]) + var_3)), (max((arr_3 [i_3]), (arr_17 [i_1] [i_2] [i_3] [i_4] [i_5]))))) - (((-(arr_9 [i_1])))));
                    }
                    for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                    {
                        var_27 = var_2;
                        arr_22 [i_3] [i_2] [i_2] [i_2] [i_3] [i_4] [i_6] = var_10;
                    }
                    for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
                    {
                        var_28 += ((!((((arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) | (arr_24 [i_1] [i_3] [i_3] [i_4] [i_4] [i_4]))))));
                        arr_26 [i_3] [i_7] [i_3] [13] [i_7] = var_12;
                        var_29 = ((((max(1, 252))) >= 1));
                        var_30 = (max(((((arr_18 [i_1] [i_1] [i_3] [i_7]) | ((min(var_11, (arr_25 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))))), ((65515 ? 4294967295 : 192))));
                    }
                    var_31 = (max(((min(var_12, 32767))), 32704));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    var_32 *= ((1 ? (arr_6 [i_1] [i_3] [i_8]) : ((((arr_23 [i_1] [i_2]) && 193)))));
                    var_33 = (arr_23 [i_2] [i_3]);
                    var_34 = ((var_17 ? (arr_9 [i_2]) : 233));
                    arr_29 [i_1] [i_3] = ((-(arr_18 [i_1] [i_2] [i_3] [i_8])));
                }
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    arr_33 [i_9] [i_3] [i_3] [i_2] [i_3] [i_1] = var_13;

                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        arr_36 [i_1] [i_2] [i_3] [i_3] [i_10] = (min((max((arr_21 [i_1] [i_2] [i_9] [i_10]), (arr_21 [i_10] [i_9] [i_3] [i_1]))), (arr_21 [i_9] [i_9] [i_9] [i_9])));
                        var_35 = (arr_17 [i_1] [i_2] [13] [i_9] [i_10]);
                    }
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        var_36 = 18446744073709551608;
                        arr_40 [i_3] [i_2] [i_3] [i_3] [i_11] = ((((min((arr_32 [i_11] [i_9] [i_3] [i_2] [1]), (arr_32 [i_3] [i_2] [i_2] [i_2] [i_11])))) ? (min((arr_32 [i_1] [i_2] [i_3] [i_9] [i_11]), (arr_17 [i_1] [i_2] [i_3] [i_9] [i_11]))) : (arr_17 [i_1] [i_2] [i_3] [i_9] [i_11])));
                        arr_41 [i_3] = var_17;
                    }
                }

                /* vectorizable */
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    var_37 = (~var_11);
                    var_38 *= (((arr_25 [i_1] [i_2] [i_3] [i_12] [i_12] [i_12]) >= ((32766 ? -32757 : var_16))));
                    var_39 = arr_43 [15] [i_1] [i_3] [i_12] [i_12] [i_12];
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 22;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 20;i_14 += 1)
                    {
                        {
                            var_40 = (((((min(32764, var_15))) ? var_14 : (arr_16 [i_1] [i_2] [i_13] [i_14]))));
                            arr_50 [i_3] [i_2] [i_3] [i_13] [11] = (arr_44 [i_3]);
                            arr_51 [i_14] [i_2] [i_3] [i_3] [i_14] = ((((((arr_28 [i_1] [i_1] [i_3] [i_13]) ? var_14 : ((min(var_7, var_0)))))) ? (min((((arr_31 [i_1] [i_2] [i_3] [i_13] [i_3]) ? var_11 : var_2)), var_17)) : var_8));
                        }
                    }
                }
                arr_52 [i_3] [i_3] [i_3] = ((32767 ? (((!((min(var_7, 34421)))))) : ((-6 ? (((arr_8 [i_1] [i_2] [i_3]) & (-2147483647 - 1))) : (arr_44 [i_3])))));
            }
        }
        arr_53 [i_1] = (32764 & -3);
        var_41 = ((max(((var_9 >> (var_19 - 173))), (~var_14))));
    }
    for (int i_15 = 0; i_15 < 22;i_15 += 1) /* same iter space */
    {
        arr_56 [i_15] = 14009;
        var_42 = (min((min((~18446744073709551615), (arr_14 [i_15] [i_15] [i_15] [i_15]))), var_16));
        var_43 |= ((var_12 ? ((max(var_7, var_3))) : ((((max((arr_16 [i_15] [i_15] [i_15] [i_15]), (arr_20 [9] [i_15]))) < (((14722323936139158716 ? (arr_18 [i_15] [i_15] [i_15] [i_15]) : 32767))))))));
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 22;i_16 += 1) /* same iter space */
    {
        var_44 = (arr_20 [i_16] [i_16]);
        var_45 = 89;
        var_46 = var_5;
    }
    #pragma endscop
}
