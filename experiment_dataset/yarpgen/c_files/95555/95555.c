/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((max((min(-7882, 13)), ((max(var_0, var_11)))))) < var_9));
    var_13 = max(var_6, var_9);
    var_14 |= min(((var_11 ? var_0 : (min(var_1, var_1)))), var_4);

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_15 = (min((((((var_2 ? (arr_3 [i_0] [i_1] [i_1]) : var_7))) ? var_1 : (max(var_1, var_4)))), (arr_3 [i_0] [i_0] [i_1])));
            var_16 -= ((((((var_7 ? (arr_2 [i_0] [i_1]) : (arr_3 [i_0] [i_1] [i_1]))) - ((((arr_0 [i_1] [i_0]) < (arr_0 [i_0] [i_1])))))) >= ((max(1016, 1)))));
            var_17 = ((((min(-1, -7882))) ? var_0 : (((((var_3 ? var_1 : (arr_3 [i_1] [i_1] [i_0]))) == (((max(var_4, (arr_2 [i_0] [i_1]))))))))));

            for (int i_2 = 4; i_2 < 10;i_2 += 1)
            {
                arr_7 [i_0] = (max(var_9, ((((max(var_8, (arr_6 [i_0] [i_1] [3] [i_2]))) == ((((arr_5 [i_0] [i_0] [i_2 - 1]) ? (arr_6 [i_2 - 4] [4] [i_1] [i_0]) : (arr_4 [i_0] [i_1] [i_2 - 1] [i_2])))))))));
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        {
                            arr_12 [i_0] [9] [i_3] [i_2 - 2] [i_3 + 1] [i_3 + 1] = (max(var_10, (((var_1 * var_4) / (((max((arr_6 [i_3 + 1] [i_3] [i_3] [i_3]), (arr_2 [i_0] [i_1])))))))));
                            var_18 = var_0;
                            arr_13 [i_0] [2] [i_0] [i_0] [i_3] [i_0] [i_3] = (arr_10 [i_0] [i_1]);
                        }
                    }
                }
                var_19 = max((min(((7881 ? 1 : 18)), ((var_4 ? var_7 : (arr_11 [i_0] [i_1] [i_1] [i_1] [i_0] [i_0]))))), ((max((min((arr_1 [i_2 - 4]), (arr_0 [i_2 - 1] [i_1]))), var_10))));
            }
            /* vectorizable */
            for (int i_5 = 4; i_5 < 7;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    var_20 = (((arr_19 [6] [6] [6] [i_6]) ? (var_10 > var_2) : ((((arr_19 [i_0] [i_0] [i_5 - 2] [i_6]) || var_6)))));
                    var_21 = ((((((var_6 + 2147483647) << (((var_5 + 72) - 20))))) ? (var_4 && var_7) : ((var_3 ? var_3 : (arr_8 [i_0] [i_0] [i_0] [i_0])))));

                    for (int i_7 = 1; i_7 < 10;i_7 += 1)
                    {
                        var_22 -= (((arr_18 [i_0] [i_1] [i_1] [i_5] [i_6] [i_1]) ^ var_5));
                        var_23 = ((((((arr_5 [i_1] [i_5 + 3] [4]) > var_4))) / (arr_18 [i_0] [i_1] [i_5] [i_6] [i_6] [i_7 + 1])));
                    }
                    var_24 -= ((((var_8 + (arr_11 [i_0] [i_1] [i_1] [i_5 + 4] [i_6] [i_1]))) - (arr_20 [i_0])));
                }
                for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
                {
                    arr_26 [i_0] [i_1] [i_5] [i_5] [i_1] = var_0;
                    var_25 = (var_3 && (var_0 * var_0));
                    arr_27 [7] [i_5] = (var_1 ? (((arr_5 [i_0] [i_0] [i_8]) ? var_3 : var_11)) : (((arr_23 [i_8] [i_5 - 1] [i_1] [i_0]) ? (arr_1 [i_0]) : var_11)));
                    arr_28 [4] [i_1] [4] [i_8] [i_5] = (0 > -101545731);
                }
                for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
                {
                    var_26 = (arr_30 [i_9] [i_1] [i_1]);
                    arr_32 [7] [i_1] [i_5] [i_5] = ((var_11 ? ((((var_0 == (arr_4 [i_0] [i_1] [i_5 + 3] [2]))))) : var_1));
                    var_27 = var_11;
                }
                for (int i_10 = 0; i_10 < 11;i_10 += 1) /* same iter space */
                {
                    arr_37 [i_0] [i_0] [i_5] [i_5] [i_1] = ((((arr_24 [7] [i_10]) + var_6)) + var_0);
                    arr_38 [i_5] [i_1] [i_1] [i_1] [i_10] [i_10] = (arr_6 [i_0] [i_0] [i_5] [i_0]);
                }
                arr_39 [i_5] [i_0] [i_0] = var_1;
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 10;i_12 += 1)
                    {
                        {
                            arr_45 [i_0] [i_0] [i_5] = (arr_41 [i_0] [i_1] [i_5] [i_1] [i_12 - 1] [7]);
                            arr_46 [i_1] [i_5] = (arr_14 [i_5] [i_5] [i_12]);
                            arr_47 [i_5] = (arr_21 [i_11] [i_11] [i_5 + 1] [i_11]);
                        }
                    }
                }
            }
            arr_48 [i_1] |= (min(37, 160));
        }
        /* LoopNest 2 */
        for (int i_13 = 4; i_13 < 9;i_13 += 1)
        {
            for (int i_14 = 4; i_14 < 10;i_14 += 1)
            {
                {
                    arr_55 [i_14 + 1] = (arr_21 [i_0] [i_13] [5] [i_14]);

                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 11;i_15 += 1)
                    {
                        var_28 = (var_11 == var_0);
                        arr_59 [6] [i_15] = ((var_1 + (var_6 == var_7)));
                        arr_60 [i_14 - 4] [i_13] [7] [i_15] [i_13] [i_15] = var_4;
                        var_29 = ((var_11 ? (arr_41 [i_15] [i_14] [i_13 - 1] [i_13 - 1] [i_0] [i_0]) : (arr_21 [i_0] [i_13] [i_14] [i_0])));
                    }
                    /* vectorizable */
                    for (int i_16 = 1; i_16 < 8;i_16 += 1)
                    {
                        arr_64 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_0 [i_0] [i_14 + 1]);
                        arr_65 [i_0] [i_13 - 3] = (arr_29 [i_0] [i_13] [i_14] [i_16 + 1] [i_0]);
                    }

                    for (int i_17 = 2; i_17 < 8;i_17 += 1)
                    {
                        var_30 = arr_23 [1] [i_13 - 3] [i_14 - 3] [i_17 - 2];

                        for (int i_18 = 0; i_18 < 11;i_18 += 1)
                        {
                            arr_71 [i_18] [i_18] [i_18] [i_18] [i_0] = (arr_30 [i_13] [i_14 - 2] [i_17]);
                            var_31 = var_3;
                        }
                        arr_72 [i_0] [i_13] [i_14] = (((((((max((arr_34 [i_13] [i_14] [i_13] [8] [i_0]), (arr_42 [i_0] [i_13 + 1] [i_13 + 1] [i_17])))) ? (arr_33 [i_0] [i_17] [i_0] [i_0]) : ((max((arr_40 [i_0] [i_0] [i_0] [1] [i_0]), (arr_67 [0] [1]))))))) ? (max(var_4, (((arr_31 [i_0] [9] [10] [i_17 + 3]) ^ (arr_5 [i_0] [i_13] [i_14 - 1]))))) : (arr_44 [i_17 + 3] [i_13] [i_14] [i_13 - 3] [i_13] [i_13] [i_0])));
                        arr_73 [i_0] [i_13] [i_13] [i_17] = (min((((var_10 == (-12596 / var_2)))), (min(var_6, var_10))));
                    }
                }
            }
        }
        var_32 = (arr_51 [i_0] [i_0] [i_0]);
        /* LoopNest 3 */
        for (int i_19 = 0; i_19 < 11;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 11;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 1;i_21 += 1)
                {
                    {
                        arr_81 [i_19] [i_19] [i_20] [i_19] [i_20] = (((arr_31 [i_0] [i_19] [1] [i_19]) ? (((min((min((arr_76 [i_0] [i_19] [i_20]), (arr_0 [i_0] [i_19]))), (var_11 && var_0))))) : ((((max(var_6, var_3))) ? (max(73, var_7)) : ((((arr_14 [i_0] [i_20] [i_20]) << (var_10 - 1))))))));
                        arr_82 [i_0] [i_0] [i_20] = (arr_62 [i_0]);
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_22 = 1; i_22 < 23;i_22 += 1)
    {
        for (int i_23 = 2; i_23 < 24;i_23 += 1)
        {
            for (int i_24 = 1; i_24 < 1;i_24 += 1)
            {
                {
                    arr_92 [1] [i_23] [i_24] [20] = ((((((min(var_3, var_0)) ? var_6 : var_2))) < var_8));
                    var_33 = (max((min(var_6, (arr_84 [i_22] [i_22]))), (60 + -101545731)));
                }
            }
        }
    }
    #pragma endscop
}
