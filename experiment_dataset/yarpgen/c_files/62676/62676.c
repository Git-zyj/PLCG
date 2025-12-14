/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_16 = (min(var_16, -6366945495790006384));
                        var_17 = max((arr_5 [i_0] [i_1] [i_0]), (((min((arr_0 [i_0]), (arr_8 [i_0] [i_2] [i_0]))))));
                    }
                }
            }
        }
        var_18 = var_13;
        var_19 = 4294967276;
        var_20 = (max(var_20, var_7));
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                {
                    var_21 = ((1865437979 > (arr_7 [3] [3])));

                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        var_22 = (((var_10 >= 8825294593692961322) / (min(((var_0 << (var_4 + 7137))), 1))));
                        var_23 = 0;
                        var_24 ^= (arr_6 [i_0] [i_4]);
                        arr_18 [7] [i_0] = (arr_8 [i_5] [i_5] [i_0]);
                    }
                }
            }
        }
    }
    for (int i_7 = 1; i_7 < 8;i_7 += 1) /* same iter space */
    {
        var_25 = (max((((arr_3 [10] [2] [i_7 + 3]) >> (var_3 + 50))), 1));
        var_26 = var_0;

        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            arr_24 [i_7 - 1] [i_8] [i_7] = (min(((max(-63, -127))), (max((1 || 1048575), ((-1012431803 ? var_11 : var_3))))));
            /* LoopNest 2 */
            for (int i_9 = 3; i_9 < 9;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    {

                        for (int i_11 = 2; i_11 < 10;i_11 += 1)
                        {
                            var_27 = (min(var_27, (((var_0 ? var_8 : ((((arr_19 [i_8]) || ((min(var_7, (arr_16 [i_11] [i_9] [i_9 - 1] [i_10]))))))))))));
                            var_28 = (min(-896186227898019946, ((((arr_27 [i_11 + 1] [i_8] [i_7 + 1]) && var_1)))));
                        }
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            arr_37 [i_8] [3] [10] [i_8] = (max(var_8, (((max(var_0, var_7))))));
                            arr_38 [6] [2] [i_8] [i_10] [i_8] = (max(((var_2 ? ((max(var_15, var_7))) : (1048588 / 1965158463177205292))), (((((min(var_3, 185766012))) ? (arr_11 [i_7] [i_7] [i_8] [1] [1] [8]) : (arr_29 [i_9 + 1] [i_9 + 1] [i_10] [i_12] [6] [1]))))));
                        }
                        arr_39 [i_10] [i_10] [i_8] [i_8] [i_8] [i_7 + 2] = (arr_2 [i_10] [9]);
                    }
                }
            }
            var_29 = (max(var_29, 3299070517));
        }
        for (int i_13 = 1; i_13 < 1;i_13 += 1)
        {
            arr_42 [i_7 - 1] = 1;

            for (int i_14 = 0; i_14 < 11;i_14 += 1) /* same iter space */
            {
                var_30 = -8945062835212485325;
                var_31 = arr_36 [i_7] [i_14] [i_14] [i_14] [i_7] [6];
                var_32 = (min(var_32, (((!(((4611123068473966592 << (((arr_8 [i_7] [2] [i_14]) - 13298))))))))));
                arr_47 [i_14] [i_13] [i_7] [i_7] = max(((((arr_2 [i_7 + 1] [i_7 + 1]) ? -911151908 : var_14))), var_14);
                /* LoopNest 2 */
                for (int i_15 = 2; i_15 < 9;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 11;i_16 += 1)
                    {
                        {
                            var_33 = (arr_5 [i_7] [i_7] [i_15]);
                            var_34 = (max(var_34, (((max(20, 15867682437012226827)) > ((max((arr_32 [i_16] [i_15] [i_14] [i_13 - 1] [i_7]), (arr_49 [i_15 + 2] [i_13 - 1] [i_13] [i_13]))))))));
                            var_35 = arr_50 [2] [i_15] [i_14] [i_13] [5] [i_7 + 2];
                            var_36 = var_7;
                        }
                    }
                }
            }
            for (int i_17 = 0; i_17 < 11;i_17 += 1) /* same iter space */
            {
                arr_55 [i_17] [i_17] [i_13] [i_7] = var_15;
                var_37 = ((max(3229134020, (arr_36 [i_7] [i_7 + 2] [i_17] [i_7 + 1] [i_7] [i_7 + 3]))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_18 = 1; i_18 < 11;i_18 += 1)
    {
        for (int i_19 = 1; i_19 < 11;i_19 += 1)
        {
            for (int i_20 = 1; i_20 < 11;i_20 += 1)
            {
                {
                    arr_64 [i_19] [i_19] = var_10;
                    var_38 = (arr_60 [i_18]);
                    var_39 = (min(var_5, (arr_59 [i_19 - 1] [i_18 - 1])));
                    var_40 = 0;
                }
            }
        }
    }
    #pragma endscop
}
