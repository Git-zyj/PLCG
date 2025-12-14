/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((var_7 * (max(var_10, 6401701151551156072)))) / ((max(65535, var_0)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = -var_12;
        arr_4 [i_0] = (!var_3);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_17 |= 94;
                    arr_10 [i_2] [i_1] [1] = ((((var_12 ? var_15 : var_4)) - (arr_5 [i_2])));
                    arr_11 [i_0] [11] [22] [19] = (arr_1 [10]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_18 = ((var_6 == (arr_2 [i_1 + 4] [i_1 + 4])));
                                arr_18 [i_0] [i_1] [i_1 + 2] [i_3] [i_3] = (-1 * 1);
                            }
                        }
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
        {
            var_19 = (min(var_19, var_13));
            arr_22 [i_0] = (19609 < 0);
            arr_23 [i_0] [i_5] [i_0] = (((arr_5 [i_5]) * (arr_14 [i_0] [i_0] [i_5] [i_5] [22])));
            var_20 = var_15;

            for (int i_6 = 1; i_6 < 24;i_6 += 1)
            {
                arr_27 [i_0] [i_0] [i_0] [i_6] = var_10;
                var_21 = (min(var_21, (~var_10)));

                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    arr_30 [i_0] [i_0] [i_6] [i_0] [i_5] [i_5] = (!65535);
                    var_22 = 10850413730658802960;
                    var_23 = ((94 ? (var_5 * 1) : (arr_14 [i_5] [i_6 + 1] [i_5] [i_5] [i_6 - 1])));
                    var_24 = 1;
                }
                for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
                {
                    var_25 = var_4;
                    var_26 = (arr_8 [i_6 - 1] [i_6 + 1]);
                    var_27 ^= (((arr_12 [i_0] [i_6 + 1] [i_6] [i_8]) ? -3 : (6401701151551156069 > 1691622391)));
                }
                for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
                {
                    var_28 = 6401701151551156069;

                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        var_29 = (!var_15);
                        arr_38 [19] [i_9] [i_0] = 30063;
                        var_30 = var_3;
                    }
                    for (int i_11 = 3; i_11 < 23;i_11 += 1)
                    {
                        var_31 ^= var_2;
                        var_32 = (min(var_32, (0 + 1)));
                        arr_41 [i_0] [i_0] [i_0] [i_6] [i_0] [i_0] = (12045042922158395541 | 18446744073709551615);
                        arr_42 [i_0] = (((arr_24 [i_11] [i_11] [i_11 - 1]) > (-18 < -1)));
                    }
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        arr_47 [i_0] [i_5] [i_6] [i_9] [i_12] = var_13;
                        arr_48 [i_0] [i_6] [i_6] [i_9] [i_12] |= ((var_4 ? var_7 : var_15));
                        var_33 = 2906299019;
                        var_34 *= ((!(var_0 - var_8)));
                    }
                    var_35 = var_4;
                }
            }
        }
        for (int i_13 = 0; i_13 < 25;i_13 += 1) /* same iter space */
        {
            var_36 = ((((35472 >> (65535 - 65508)))) && (!30039));
            var_37 = ((~(arr_43 [i_0] [9] [1] [i_13] [i_13])));
            var_38 -= -var_9;
            arr_51 [i_0] [i_0] [i_0] = (~(arr_26 [i_13] [i_13] [i_0]));
        }
        for (int i_14 = 0; i_14 < 25;i_14 += 1) /* same iter space */
        {
            var_39 = -var_15;
            var_40 = (arr_31 [i_0] [i_14] [i_0] [18] [18]);
            arr_54 [1] [i_0] [1] = var_13;
            arr_55 [i_0] [i_0] [i_0] = ((~(arr_5 [i_0])));
            var_41 = (min(var_41, ((17 ? 65535 : 10850413730658802978))));
        }
        for (int i_15 = 2; i_15 < 23;i_15 += 1)
        {
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 25;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 25;i_17 += 1)
                {
                    {
                        arr_63 [i_0] [i_0] [i_16] [i_17] = -1;
                        var_42 += -var_8;
                    }
                }
            }
            arr_64 [i_15] [i_15] = (arr_35 [i_0] [i_15 + 1] [i_0] [i_0]);
            var_43 *= ((~(arr_32 [i_15 + 2] [i_15 + 1] [i_15])));
            arr_65 [16] [i_15 - 2] = (arr_16 [i_15] [i_0] [1] [i_0] [i_0] [i_0]);
        }
    }
    for (int i_18 = 0; i_18 < 1;i_18 += 1) /* same iter space */
    {
        var_44 = (8730 & 4294967295);
        var_45 = -1;
        var_46 = var_13;
        arr_68 [i_18] = ((-((max(65535, 1)))));
    }
    var_47 = (min(var_47, (!716025265)));
    #pragma endscop
}
