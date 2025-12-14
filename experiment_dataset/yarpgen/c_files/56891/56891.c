/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_15 = 0;
        var_16 = 1113937213;

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {

            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                var_17 = (((((max(158, -1)))) ? (-15920 | var_5) : var_3));
                arr_8 [3] [19] = ((((min((arr_7 [i_0 - 1] [i_2 - 1] [16]), 453846971))) ? -1 : -5));
            }
            /* vectorizable */
            for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
            {
                arr_13 [i_0] [i_1] [i_1] = (arr_4 [i_0 - 1] [11] [i_3]);
                var_18 = -1;
                arr_14 [i_0] [1] [13] [i_3] = 56;
            }
            for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
            {

                /* vectorizable */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    arr_19 [i_0] [i_0] [4] [i_0] = -1;
                    var_19 = (((var_12 ? var_13 : (arr_3 [i_4] [i_4]))));
                    var_20 = ((var_10 ? (arr_7 [i_0 - 1] [i_1] [i_1]) : (arr_16 [i_0 - 1] [i_0 - 1] [i_0 - 1])));
                }
                for (int i_6 = 1; i_6 < 20;i_6 += 1)
                {
                    var_21 = (min(19932, -453846972));

                    for (int i_7 = 1; i_7 < 21;i_7 += 1)
                    {
                        var_22 = ((((max(-4979040485403708344, (((-56 ? var_3 : 1)))))) ? ((((min(1, 5297))) ? (((-(arr_3 [i_0] [i_0])))) : (min(var_4, 11859313986320860344)))) : ((((max(3449, (arr_22 [i_0] [i_1] [i_1] [13] [i_6 + 2] [i_7 - 1]))))))));
                        var_23 = -32724;
                    }
                    for (int i_8 = 2; i_8 < 20;i_8 += 1)
                    {
                        arr_28 [1] [1] [i_8] [9] [9] = (((max(2632250084, var_7))));
                        arr_29 [i_0] [10] [i_4] [i_8] = (arr_22 [i_0] [i_0] [0] [i_0] [i_1] [i_4]);
                        var_24 = var_2;
                    }
                }
                arr_30 [i_0] [i_1] = (((var_10 ? -8330063258274840199 : (~var_13))));
            }
            var_25 = ((var_13 ? var_4 : (~-83)));
            var_26 = (arr_22 [14] [i_0 - 1] [i_0 - 1] [13] [i_1] [i_1]);
            arr_31 [21] = (arr_9 [9] [i_1] [i_0 - 1] [i_0]);
        }
        for (int i_9 = 2; i_9 < 20;i_9 += 1)
        {
            var_27 = (!(-11578 > 119));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 20;i_11 += 1)
                {
                    {
                        var_28 = ((((((0 ? 69 : 4116)))) ? (arr_20 [i_10] [17]) : -16));
                        var_29 = (arr_15 [i_11] [i_9] [9]);
                        arr_40 [21] [14] [i_9] [i_10] [20] [i_11 + 1] = (-1 || var_4);
                        var_30 = (((arr_32 [8]) ? 103 : (arr_1 [i_10])));
                        var_31 = var_11;
                    }
                }
            }
        }
        for (int i_12 = 2; i_12 < 21;i_12 += 1) /* same iter space */
        {
            var_32 = ((max((arr_35 [i_0] [i_0 - 1] [i_12 - 2]), 118)));
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 22;i_13 += 1)
            {
                for (int i_14 = 3; i_14 < 21;i_14 += 1)
                {
                    {

                        for (int i_15 = 1; i_15 < 21;i_15 += 1)
                        {
                            var_33 = (max((((0 == 0) | 56)), (-109 | 4294967295)));
                            arr_54 [19] [i_12] [i_13] [4] [3] = 26540;
                        }

                        for (int i_16 = 4; i_16 < 20;i_16 += 1)
                        {
                            arr_57 [i_0] [i_12 - 1] [i_13] [i_14 - 3] [i_13] = (min((max((2052556944 ^ 480), -30)), -0));
                            var_34 = 5717;
                        }
                        arr_58 [i_0 - 1] [i_0 - 1] [i_0] [3] = ((((min(var_3, var_7))) == (((-56 >= (!115))))));
                    }
                }
            }
            var_35 = (!1);
        }
        for (int i_17 = 2; i_17 < 21;i_17 += 1) /* same iter space */
        {
            arr_62 [i_17] = ((!((((arr_12 [i_0 - 1]) ? var_6 : (arr_12 [i_0 - 1]))))));
            var_36 = 38995;
            var_37 = 108;
            var_38 = var_2;
            arr_63 [i_17 - 2] = (min(((((arr_51 [4] [4] [7] [i_17 - 1]) ? 300 : 6492037006550782748))), ((((arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) != 0)))));
        }
    }
    #pragma endscop
}
