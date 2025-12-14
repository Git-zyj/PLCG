/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~377562533);
    var_15 = ((var_7 ? var_13 : var_12));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_16 = (min(var_16, (-91 != 0)));
                        var_17 = (min(var_17, ((((arr_2 [i_1 - 1] [i_3]) - var_3)))));
                        var_18 ^= var_4;
                        arr_8 [i_0] = (~var_6);
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            var_19 = (min(var_19, -4294967295));
            arr_13 [i_0] = (((162 + 108) / ((var_12 ? -377562534 : 12))));
        }
        for (int i_5 = 0; i_5 < 0;i_5 += 1)
        {
            var_20 = (min(var_20, (arr_12 [i_5 + 1] [i_5])));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    {
                        arr_21 [i_0] [i_0] [i_6] = ((arr_2 [i_5 + 1] [i_0]) && var_3);
                        arr_22 [i_0] [i_5] [i_0] [i_5] = ((!(((2191476928 ? var_13 : 6295023858437653371)))));
                    }
                }
            }
            var_21 = var_3;
            arr_23 [i_0] [i_0] [i_0] = ((-((var_7 ? var_1 : var_7))));
        }
        var_22 = ((~(arr_7 [i_0] [i_0] [i_0])));
        var_23 = (0 ? -var_5 : var_11);
    }
    for (int i_8 = 2; i_8 < 6;i_8 += 1)
    {
        arr_26 [i_8] [i_8 + 2] = (-var_5 ? var_13 : (arr_12 [i_8] [i_8]));
        arr_27 [i_8] |= (((min(var_0, var_5))));
        var_24 ^= ((var_8 * (max((arr_1 [1]), ((-114 ? 4294967295 : var_12))))));
        arr_28 [i_8] = (arr_11 [i_8] [12]);
    }
    for (int i_9 = 4; i_9 < 10;i_9 += 1)
    {
        var_25 = (min(-var_0, var_12));
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 11;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    {
                        var_26 = (min((max(var_13, (arr_31 [2] [i_9 - 4]))), var_8));
                        arr_38 [i_9] [i_11] [i_10] [i_11] [i_11] [11] = (min(((min(-23227, (arr_9 [i_11])))), (((arr_9 [i_11]) - 94))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 14;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 1;i_14 += 1)
            {
                {
                    arr_47 [i_9] [i_13] [i_13] [i_9] = 3603635819;
                    var_27 *= var_12;

                    /* vectorizable */
                    for (int i_15 = 2; i_15 < 13;i_15 += 1)
                    {
                        var_28 = (((arr_3 [i_13] [i_14 - 1]) < (arr_49 [i_13] [i_14 - 1] [i_9 - 3] [i_9 - 4] [i_13])));
                        var_29 *= ((var_13 ? (arr_17 [i_9] [i_14 - 1] [i_15] [i_9 + 1]) : var_4));
                        var_30 = (((arr_32 [i_14] [i_14 - 1] [i_14]) ? 0 : (arr_32 [i_14] [i_14] [12])));

                        for (int i_16 = 0; i_16 < 1;i_16 += 1)
                        {
                            var_31 = (max(var_31, 0));
                            var_32 = (var_5 ? var_3 : var_5);
                        }
                    }
                    /* vectorizable */
                    for (int i_17 = 2; i_17 < 10;i_17 += 1)
                    {
                        arr_55 [i_13] [i_13] [i_14] = (~(arr_2 [i_9] [i_13]));
                        var_33 = (min(var_33, (((var_4 && (arr_39 [i_14 - 1] [i_9] [i_17]))))));
                        arr_56 [i_13] [i_13] [i_17 - 1] = ((var_7 ? 0 : -53));
                        var_34 *= (~1);
                        var_35 = (((arr_35 [i_17 + 3] [i_17 - 2]) << (94 - 89)));
                    }
                    var_36 -= (min(((-(arr_5 [i_9] [i_9 + 3] [i_9] [i_14 - 1]))), ((max((((!(arr_34 [i_9] [i_13] [i_14] [i_9])))), (arr_18 [i_14]))))));
                }
            }
        }
    }
    #pragma endscop
}
