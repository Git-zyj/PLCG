/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= -1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 1;
        var_18 = ((1 ? var_15 : var_2));

        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            var_19 = (~-1);
            arr_5 [i_0] = 116;
            var_20 = (min(var_20, (((var_9 ? var_3 : (arr_3 [i_1 + 2] [i_1 + 3]))))));
            var_21 = (max(var_21, (((var_1 >> (var_3 + 48))))));
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_22 = ((52 ? var_6 : var_3));

            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_23 = -117;
                        var_24 = (max(var_24, (((var_7 ? (arr_16 [i_0] [i_0] [i_0] [i_3 - 2] [i_3 + 1] [i_4] [i_4]) : 82)))));
                        arr_17 [i_0] [6] [i_0] [6] [8] [i_5] = (-127 - 1);
                        var_25 = (max(var_25, (((var_15 ? (arr_14 [i_3] [i_3 + 1] [i_3 - 1] [4]) : var_15)))));
                    }
                    arr_18 [10] [1] [i_3] [10] = -1;
                    var_26 = (max(var_26, (((127 ? var_15 : (arr_4 [i_2] [i_2] [i_4]))))));
                    arr_19 [i_0] [11] [i_3] [i_4] = var_0;
                }
                arr_20 [i_0] [6] [i_0] = (((arr_6 [i_3 + 1] [i_3 - 2]) / 74));
            }
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                arr_23 [i_6] = (~var_11);
                /* LoopNest 2 */
                for (int i_7 = 3; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        {
                            var_27 = (((arr_8 [i_6] [i_7 - 1] [i_8]) * (var_11 / -81)));
                            var_28 = -109;
                            var_29 |= 94;
                            arr_29 [i_7] [i_7] [i_7] [i_7] [i_8] = (((-79 + 2147483647) >> (-94 + 117)));
                            var_30 *= (-5 * 124);
                        }
                    }
                }
                var_31 = (((arr_16 [i_0] [13] [i_0] [i_0] [i_2] [i_2] [i_6]) || (((arr_25 [i_0] [i_2] [i_6]) == var_14))));
                arr_30 [i_0] [i_0] = var_12;
            }
            for (int i_9 = 3; i_9 < 12;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 12;i_11 += 1)
                    {
                        {
                            var_32 = (max(var_32, ((((arr_13 [i_9 - 3] [i_11 - 1] [i_11 - 1] [i_11 + 2]) * (arr_13 [i_9 - 3] [i_11 - 1] [i_11 - 1] [i_11 + 2]))))));
                            arr_38 [1] [i_2] [1] [i_10] [i_11 - 1] = ((((-44 ? var_15 : -6)) + (88 / -44)));
                            arr_39 [i_0] [i_2] [i_9] [i_9] [i_0] [i_9] = -126;
                        }
                    }
                }
                var_33 = -22;
                arr_40 [i_2] [i_9] = var_7;
                var_34 *= 95;
            }
            var_35 = ((var_3 ? -73 : (var_0 / 111)));
        }
        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            arr_43 [i_12] = ((var_11 ? var_7 : var_15));
            var_36 = (((arr_36 [i_0] [i_0] [9] [i_0] [i_12] [i_12] [i_12]) * (arr_4 [0] [0] [i_12])));
            var_37 = ((-1 >= ((110 ? var_16 : var_4))));
        }
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 22;i_13 += 1)
    {
        var_38 = (min(var_38, 1));
        var_39 = 94;
    }
    var_40 *= var_7;
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 14;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 14;i_15 += 1)
        {
            {
                var_41 = -1;
                var_42 = (max(var_42, (((((((var_2 ? var_8 : -69)))) ? (max(((-92 ? -18 : -114)), ((max(-80, var_9))))) : 44)))));

                /* vectorizable */
                for (int i_16 = 0; i_16 < 14;i_16 += 1)
                {
                    var_43 = var_15;

                    for (int i_17 = 1; i_17 < 13;i_17 += 1)
                    {
                        var_44 = (min(var_44, (arr_46 [i_15] [i_16])));
                        arr_58 [i_14] [i_14] [i_16] [i_14] = ((var_6 ? 90 : var_6));
                        var_45 *= (-127 - 1);
                        arr_59 [i_14] [i_15] [i_15] [i_17 - 1] = 70;
                    }
                }
                arr_60 [i_14] [i_14] = ((((24 > ((112 * (-127 - 1))))) ? (arr_12 [i_14] [i_14] [i_14]) : (~var_12)));
            }
        }
    }
    var_46 = (max(((((min(-113, -55))) ? ((min(var_4, -109))) : var_3)), var_15));
    #pragma endscop
}
