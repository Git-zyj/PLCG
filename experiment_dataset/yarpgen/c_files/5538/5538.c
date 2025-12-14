/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_14 = (min((min(-218, var_9)), var_5));
        var_15 = (min(var_15, 194));
        arr_3 [i_0] = (!var_12);
    }
    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        var_16 = var_1;
        arr_6 [i_1] [i_1] = max((((!((min(21649, var_1)))))), (arr_2 [i_1] [6]));

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            arr_11 [i_2] = var_12;
            var_17 = (max(19, (((!(arr_9 [i_2]))))));
            arr_12 [i_2] [i_2] [i_1 + 2] = (max((min(1, var_7)), ((max((max(234, 1)), ((min(var_5, var_8))))))));
            var_18 = (min(var_18, 13));
        }
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 2; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {
                            var_19 ^= max(187, (arr_18 [i_6] [i_1] [i_1] [i_1]));
                            arr_21 [i_1] [i_3] [i_4] [i_5] [i_6] &= -234;
                            var_20 = (min(var_20, (arr_13 [i_5])));
                            arr_22 [i_1] [i_3] [i_3] = (arr_19 [i_1 + 2] [i_3] [i_4] [i_3] [i_4] [i_6]);
                        }
                    }
                }
            }
            var_21 = (~(arr_13 [i_3]));
            arr_23 [i_3] = (arr_13 [i_3]);

            /* vectorizable */
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                arr_28 [10] [i_3] [i_3] [10] = 170;
                var_22 = (max(var_22, 24084));
                arr_29 [i_3] = (arr_2 [i_1 + 1] [i_1 + 1]);
            }
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {

                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    arr_37 [i_3] [i_3] [i_8] [i_8] [i_9] [4] = (min(var_7, -23771));
                    var_23 = (!85);
                }
                var_24 = 24066;
            }
        }
        arr_38 [i_1] = (max((max(6798188109130091327, (~-1320310652))), 112));
    }

    /* vectorizable */
    for (int i_10 = 0; i_10 < 16;i_10 += 1)
    {
        arr_41 [12] = (arr_39 [i_10] [i_10]);
        arr_42 [i_10] = var_3;

        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            arr_47 [i_11] [i_11] [i_10] = (arr_40 [i_10] [i_11]);
            arr_48 [i_10] [i_10] [i_11] = var_8;
            arr_49 [i_10] = 330610690;
        }
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            var_25 = 330610690;
            arr_52 [i_10] [i_10] [i_10] = (arr_51 [i_10] [i_12]);
            var_26 = (max(var_26, (arr_44 [i_12])));
        }
        for (int i_13 = 0; i_13 < 16;i_13 += 1)
        {

            for (int i_14 = 0; i_14 < 16;i_14 += 1)
            {
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 16;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 16;i_16 += 1)
                    {
                        {
                            var_27 = (max(var_27, (((~((~(arr_64 [i_16] [1] [i_14] [i_13] [i_10]))))))));
                            arr_65 [i_16] [i_15] [i_14] [i_13] [i_10] = 1;
                        }
                    }
                }
                var_28 = (max(var_28, 1));
            }
            for (int i_17 = 0; i_17 < 16;i_17 += 1)
            {
                var_29 = -10616;
                arr_70 [i_10] [i_13] [i_10] [i_10] = var_2;
                arr_71 [i_10] [i_13] [i_17] [i_17] &= (--1);
            }
            var_30 = (max(var_30, (!1)));
            var_31 = var_8;
        }
        for (int i_18 = 4; i_18 < 12;i_18 += 1)
        {
            /* LoopNest 3 */
            for (int i_19 = 0; i_19 < 16;i_19 += 1)
            {
                for (int i_20 = 1; i_20 < 15;i_20 += 1)
                {
                    for (int i_21 = 1; i_21 < 14;i_21 += 1)
                    {
                        {
                            var_32 = var_1;
                            var_33 = -3950669619000737519;
                        }
                    }
                }
            }

            for (int i_22 = 0; i_22 < 16;i_22 += 1)
            {
                arr_88 [9] [3] [1] [i_18 + 2] = var_0;
                var_34 = var_6;
            }
            var_35 = (min(var_35, (((~(arr_40 [i_10] [i_18 - 1]))))));
        }
        arr_89 [13] = (arr_39 [14] [i_10]);
    }
    for (int i_23 = 1; i_23 < 21;i_23 += 1)
    {
        var_36 += (min(330610670, ((max((!0), (max(28071, var_6)))))));
        /* LoopNest 2 */
        for (int i_24 = 1; i_24 < 20;i_24 += 1)
        {
            for (int i_25 = 3; i_25 < 20;i_25 += 1)
            {
                {
                    arr_97 [i_23] [i_24] = ((-((max((min((arr_93 [1]), (arr_96 [i_23] [i_23] [i_25 - 3] [0]))), var_10)))));
                    var_37 = (min(var_37, var_5));
                }
            }
        }
        arr_98 [i_23] = (arr_92 [i_23 + 1]);
    }
    #pragma endscop
}
