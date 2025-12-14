/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -14055;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_11 += var_4;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_0] [i_0] = var_3;
                        var_12 -= ((((-4977814919107660776 ? var_5 : (arr_7 [i_3] [i_2 + 1] [i_0] [10] [i_0] [i_0]))) > (arr_4 [16])));
                        var_13 = (max(var_13, ((((43052 ? (arr_4 [12]) : (arr_4 [0])))))));
                        var_14 += -4977814919107660757;
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
        {
            var_15 = (((arr_10 [i_0 - 2] [i_0]) ? (arr_10 [i_0 - 1] [i_0]) : (arr_10 [i_0 + 1] [i_0 + 1])));

            for (int i_5 = 4; i_5 < 13;i_5 += 1)
            {
                var_16 = (arr_4 [i_0]);
                arr_16 [1] [i_0] [i_0] [i_0] = ((((-250860171 <= (arr_7 [i_0] [i_0 - 3] [i_4] [i_4] [i_5 - 1] [i_5]))) ? ((((arr_0 [i_5] [i_5]) <= 1))) : (arr_6 [i_5 - 4] [i_5] [i_5] [i_5])));
            }
            for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
            {
                var_17 += (((arr_17 [i_0 - 1] [i_0 + 1] [i_0 - 2] [12]) ? ((var_9 / (arr_7 [i_0 - 3] [i_0] [i_0] [i_0 - 3] [3] [i_0]))) : (((var_8 ? var_8 : 20884)))));
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        {
                            var_18 = ((arr_18 [i_0] [3] [i_0 - 1]) ? (~-4489071694452324193) : 130);
                            var_19 = (min(var_19, (((32767 || (arr_7 [i_8] [i_4] [i_7 + 2] [i_7] [i_8] [i_0]))))));
                            var_20 &= (arr_17 [i_0 + 1] [i_4] [8] [14]);
                            var_21 = ((((var_9 <= (arr_14 [i_4] [i_0] [i_7]))) ? (arr_21 [i_0 - 3]) : ((1 ? (arr_18 [2] [i_6] [i_7]) : var_9))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 13;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 13;i_10 += 1)
                    {
                        {
                            var_22 += (arr_11 [i_0 - 1] [i_4] [i_9 - 2]);
                            arr_33 [i_0] [i_0] = ((((((arr_18 [12] [1] [i_4]) ? var_6 : (arr_22 [i_0])))) ? (arr_17 [i_0] [i_0] [i_0 - 2] [i_0]) : var_7));
                            arr_34 [i_0] [i_4] [i_4] [i_4] [i_9] [i_10] = ((!(((var_9 ? (arr_28 [i_0] [4] [i_0]) : (arr_7 [2] [2] [i_6] [i_4] [i_4] [i_0]))))));
                            arr_35 [i_0] [i_0] [0] [1] [8] &= 4977814919107660758;
                            arr_36 [i_0] = (~var_3);
                        }
                    }
                }
            }
            for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
            {
                arr_40 [i_0] [i_4] [i_0] = ((var_3 ? (arr_14 [i_0 + 1] [i_0] [8]) : (arr_14 [i_0 - 2] [i_0] [i_11])));
                var_23 += (((arr_1 [i_0 + 1] [10]) ? (((arr_39 [3] [3] [i_4] [i_11]) - (arr_28 [8] [i_4] [i_11]))) : var_8));
            }
            for (int i_12 = 0; i_12 < 17;i_12 += 1) /* same iter space */
            {
                var_24 = -4489071694452324213;
                var_25 = (arr_3 [i_0] [i_0]);
            }
        }
        for (int i_13 = 0; i_13 < 17;i_13 += 1) /* same iter space */
        {
            arr_46 [i_0] [15] [i_0] = (~(arr_8 [i_0 - 3] [i_13]));
            var_26 = (max(var_26, (((-32764 ? -127 : -4489071694452324193)))));
        }
        var_27 = (arr_30 [i_0] [i_0 - 1] [i_0 - 1] [15] [11]);

        for (int i_14 = 0; i_14 < 17;i_14 += 1)
        {
            arr_49 [i_0] = arr_28 [i_0] [i_14] [i_14];
            arr_50 [7] [i_0] = (arr_43 [i_0] [i_0] [i_0 - 2]);
            var_28 += var_0;
        }
        for (int i_15 = 0; i_15 < 17;i_15 += 1)
        {
            arr_53 [i_0] [i_15] = (arr_6 [1] [1] [i_15] [i_15]);
            arr_54 [i_0] [i_15] [i_0] = (!(((~(arr_19 [i_15] [i_0] [10])))));

            for (int i_16 = 0; i_16 < 17;i_16 += 1)
            {
                arr_58 [i_0] [i_15] [i_16] = (((arr_10 [i_15] [i_15]) ? -1094215966 : (arr_10 [i_0 - 3] [i_15])));
                arr_59 [i_0] = (arr_27 [i_0] [i_0]);
                arr_60 [8] &= arr_57 [i_0 - 2] [8] [8] [i_0 - 2];
                var_29 = (min(var_29, ((((arr_24 [i_0] [i_15] [i_16] [i_0]) ? (arr_31 [i_0] [i_0 - 2] [i_0 - 2] [i_15] [i_16] [i_0]) : (((arr_19 [i_0] [0] [i_16]) >> (((arr_14 [i_0] [6] [i_16]) - 4393364842059123999)))))))));
            }
        }
    }
    var_30 = ((var_3 ? ((((min(var_4, var_2)) > var_1))) : var_1));
    #pragma endscop
}
