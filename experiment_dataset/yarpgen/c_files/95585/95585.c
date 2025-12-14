/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
        {
            var_16 = -var_8;
            var_17 = var_2;
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
        {
            arr_8 [i_2] [i_0] = (!var_1);
            var_18 = (max(var_18, -var_12));
        }
        var_19 = -var_5;

        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_20 = (min(var_20, ((var_13 ? var_14 : var_12))));

            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        var_21 = var_7;
                        var_22 = ((var_15 ? (~16837340819198745703) : ((var_3 ? var_9 : var_5))));
                        arr_20 [i_0] [i_0] [2] [10] [i_5] [i_0] [i_6] = var_10;
                        var_23 += (~var_1);
                        var_24 = ((var_11 ? var_1 : var_12));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        arr_25 [7] [i_4] [11] [i_5] = ((var_6 ? var_8 : var_14));
                        arr_26 [i_0] [i_3] [i_4] [7] = var_2;
                    }
                    var_25 = (max(var_25, var_10));
                }
                for (int i_8 = 0; i_8 < 0;i_8 += 1)
                {
                    var_26 = var_2;
                    var_27 = var_3;
                    var_28 = var_3;
                }
                var_29 = -var_9;
                arr_29 [i_4] [11] [i_0] [i_0] = (!var_13);
            }
            arr_30 [i_0] [i_0] [i_3] = var_12;
        }
        arr_31 [i_0] = ((var_2 ? var_3 : var_9));
        arr_32 [i_0] [i_0] = var_8;
    }
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        arr_35 [i_9] [i_9] = (~-1);
        var_30 = (min(var_30, var_15));
        var_31 -= ((max(var_12, var_1)));
    }
    for (int i_10 = 0; i_10 < 10;i_10 += 1)
    {
        arr_38 [7] [1] = (max(var_6, (((((1 ? 1 : 67))) ? (~var_4) : ((var_7 ? var_10 : var_3))))));
        arr_39 [i_10] [i_10] = var_15;
        arr_40 [i_10] = (var_15 ? var_2 : var_12);
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 10;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 10;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 9;i_13 += 1)
                {
                    {
                        arr_49 [0] [i_12] [i_10] [i_10] = var_6;

                        for (int i_14 = 3; i_14 < 9;i_14 += 1)
                        {
                            arr_52 [5] [6] [i_12] [i_13] [0] = var_3;
                            var_32 += ((var_5 ? ((max(var_10, var_14))) : var_10));
                        }
                        for (int i_15 = 0; i_15 < 10;i_15 += 1)
                        {
                            arr_56 [i_10] [i_11] [i_12] [i_11] [i_15] [i_15] = (max(var_10, var_10));
                            var_33 = var_6;
                        }
                    }
                }
            }
        }
        arr_57 [i_10] [6] = (((!12934967650249081807) ? (!var_5) : var_6));
    }
    for (int i_16 = 0; i_16 < 11;i_16 += 1)
    {
        arr_61 [i_16] [i_16] = var_5;
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 11;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 11;i_18 += 1)
            {
                {
                    var_34 = var_1;
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 11;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 1;i_20 += 1)
                        {
                            {
                                arr_70 [i_19] [i_19] [i_18] [i_19] [i_20] = var_8;
                                arr_71 [i_16] [1] [i_20] [i_16] [i_16] [3] [i_19] = var_1;
                                var_35 = (((var_12 ? var_10 : var_8)));
                                var_36 *= (((((1 ? 29158 : 127))) ? var_12 : ((((!((max(var_13, var_5)))))))));
                                arr_72 [i_19] [3] [i_17] [i_19] [i_20] [i_20] = var_2;
                            }
                        }
                    }
                }
            }
        }
        arr_73 [i_16] = ((~((max(var_6, var_15)))));
        var_37 = ((~var_2) ? var_13 : var_4);
    }

    for (int i_21 = 0; i_21 < 18;i_21 += 1)
    {
        arr_78 [9] = 9223372036854775807;
        arr_79 [3] = ((9223372036854775806 ? var_1 : (((9234 ? 4294967271 : 1)))));
    }
    var_38 -= var_4;
    var_39 = ((var_9 ? ((((~var_6) ? var_11 : var_6))) : var_1));
    #pragma endscop
}
