/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = ((((min((arr_1 [i_0]), 32147))) ? (((!(arr_1 [i_0])))) : (arr_1 [i_0])));
        var_13 = ((((max((arr_0 [i_0]), -27938))) | var_0));
    }

    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        arr_5 [i_1 - 2] = (min((arr_0 [i_1 - 1]), (arr_4 [i_1 + 1])));

        /* vectorizable */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            var_14 = (arr_3 [i_1 + 1] [i_2 - 1]);
            arr_8 [i_1 - 1] [i_1 + 1] [i_2 - 1] = var_11;
            var_15 -= (arr_4 [i_1 - 2]);
            arr_9 [i_2 - 1] = (((-16 ? 0 : 1)));
        }
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_4 = 1; i_4 < 18;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        var_16 *= -var_2;
                        arr_21 [i_3] [i_3] [i_6] [i_5] [i_6] = var_4;
                        var_17 = (!1382071679);
                    }
                }
            }

            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {

                    for (int i_9 = 3; i_9 < 20;i_9 += 1)
                    {
                        var_18 = (~-1396866350);
                        arr_30 [i_9] [i_9 - 3] [i_9 - 3] [i_9 - 2] [i_9 - 2] [i_9 - 1] [i_9 - 3] = (((arr_3 [i_3] [i_3]) ? 1649267441664 : (var_0 - var_1)));
                        arr_31 [i_9] = var_0;
                        var_19 = (min(var_19, (((((((arr_25 [i_9 + 1] [i_8] [i_7] [i_3]) ? 1 : var_6))) ? 0 : -689731782)))));
                    }
                    var_20 ^= ((arr_25 [i_3] [i_4 + 3] [i_8] [i_4 + 3]) > 689731766);

                    for (int i_10 = 0; i_10 < 0;i_10 += 1)
                    {
                        arr_36 [i_10] [i_4 - 1] [i_4 - 1] [i_4 + 2] [i_4 + 3] = var_7;
                        var_21 = (min(var_21, 1419446964));
                    }
                    for (int i_11 = 2; i_11 < 20;i_11 += 1)
                    {
                        var_22 = (arr_28 [i_4 + 2] [i_4 + 2] [i_4 - 1]);
                        arr_40 [i_11 - 1] [i_3] = (((arr_17 [i_11 + 1] [i_4 + 2] [i_7]) ? (arr_33 [i_3] [i_4 + 2] [i_8] [i_8] [i_3]) : var_9));
                    }
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        var_23 ^= (((arr_34 [i_4 + 1] [i_4 + 3] [i_4 + 2] [i_4 - 1] [i_4 - 1] [i_4 + 3]) ? var_10 : (arr_34 [i_4 + 3] [i_4 + 3] [i_4 + 3] [i_4 - 1] [i_4 + 3] [i_4 + 1])));
                        var_24 ^= var_0;
                        var_25 = (max(var_25, (((~(arr_29 [i_4 + 2] [i_4 - 1] [i_4 + 3] [i_4 + 1] [i_4 + 1] [i_4 + 2] [i_4 + 2]))))));
                    }
                }
                for (int i_13 = 1; i_13 < 20;i_13 += 1)
                {
                    var_26 = 805306368;
                    var_27 = 1396866350;
                }
                for (int i_14 = 3; i_14 < 20;i_14 += 1)
                {
                    arr_49 [i_14 - 1] [i_4 + 1] [i_3] = (arr_16 [i_14 - 2] [i_7]);
                    arr_50 [i_14 - 3] [i_7] [i_4 - 1] [i_3] = (!-1024);
                    arr_51 [i_3] [i_3] [i_3] [i_3] = var_8;
                }
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    for (int i_16 = 1; i_16 < 18;i_16 += 1)
                    {
                        {
                            var_28 = var_6;
                            var_29 = (var_1 + var_9);
                        }
                    }
                }
            }
        }
        for (int i_17 = 4; i_17 < 17;i_17 += 1)
        {
            arr_63 [i_17 + 1] [i_3] [i_3] = -2069083270;

            /* vectorizable */
            for (int i_18 = 0; i_18 < 21;i_18 += 1)
            {
                arr_67 [i_3] = (arr_54 [i_17 - 4] [i_17 + 4]);
                var_30 = (~1396866350);
                arr_68 [i_18] [i_17 - 2] [i_17 + 4] [i_3] = var_7;
            }
            for (int i_19 = 0; i_19 < 21;i_19 += 1)
            {

                for (int i_20 = 1; i_20 < 18;i_20 += 1)
                {
                    var_31 ^= (max((arr_55 [i_17 - 4] [i_19] [i_20 - 1]), (!var_5)));
                    var_32 ^= (((~(arr_22 [i_20 + 1] [i_20 + 2] [i_20 + 3] [i_20 + 2]))));
                }
                var_33 ^= var_10;
                arr_75 [i_19] [i_17 + 4] [i_19] = (min(((min((arr_64 [i_17 + 2] [i_17 + 4] [i_17 + 2]), (arr_64 [i_17 - 1] [i_17 - 2] [i_17 + 3])))), ((((arr_10 [i_19]) ? var_6 : (arr_60 [i_17 - 2] [i_19]))))));
            }
            var_34 = ((((max((arr_14 [i_3]), var_4))) ? (17 > 56) : ((min(var_8, var_4)))));
        }
        /* vectorizable */
        for (int i_21 = 3; i_21 < 18;i_21 += 1)
        {
            var_35 = (var_12 * 0);

            for (int i_22 = 0; i_22 < 21;i_22 += 1)
            {
                var_36 = -1396866339;
                var_37 = (229 << var_4);
            }
        }
        var_38 = (((20 + var_1) ? (arr_82 [i_3]) : ((max(1, -689731801)))));
    }
    /* vectorizable */
    for (int i_23 = 0; i_23 < 21;i_23 += 1) /* same iter space */
    {
        var_39 = (!var_4);
        var_40 ^= (arr_53 [i_23] [i_23]);
        var_41 = 4294967295;
    }
    #pragma endscop
}
