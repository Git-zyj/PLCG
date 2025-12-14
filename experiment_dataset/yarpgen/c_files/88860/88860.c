/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_15 = (max(var_8, var_7));
                var_16 = var_9;
            }
        }
    }

    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_17 = (max(var_17, (((((var_6 != ((var_4 ? (arr_6 [i_2] [4]) : -1)))) ? (((var_14 == var_5) ? (((arr_7 [2] [i_2]) ^ var_13)) : (var_1 != var_6))) : var_2)))));
        var_18 = var_3;
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    arr_13 [i_2] [i_2] = (min((-1 - 1100592306), var_9));
                    var_19 = (max(1602891147, ((max((var_10 - var_14), (arr_10 [i_2]))))));
                    arr_14 [i_2] [i_3 - 1] [7] [i_2] = 247;
                }
            }
        }

        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 1; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 11;i_8 += 1)
                    {
                        {
                            var_20 = (((((var_1 ? (arr_20 [i_2] [i_2] [1] [i_2]) : var_11)) != var_4)));
                            var_21 = (min((((((var_10 || (arr_7 [i_2] [i_5]))) || var_2))), var_12));
                            var_22 *= var_8;
                            arr_25 [i_2] [i_5] [i_2] [i_2] = -2;
                        }
                    }
                }
            }
            var_23 = (min(var_23, ((((min(var_8, (max(var_11, (arr_7 [i_5] [i_5]))))) == var_9)))));
        }
        for (int i_9 = 4; i_9 < 9;i_9 += 1)
        {
            var_24 = (((((8981445573167208690 == 4294967295) ? (arr_10 [i_2]) : (arr_9 [i_2] [i_9 + 2]))) == (((var_12 ? (!var_3) : (min(var_1, var_11)))))));

            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                var_25 = (max(var_25, (6880392252882797514 != 6880392252882797514)));

                /* vectorizable */
                for (int i_11 = 1; i_11 < 12;i_11 += 1) /* same iter space */
                {

                    for (int i_12 = 1; i_12 < 12;i_12 += 1)
                    {
                        arr_37 [i_2] [i_9 - 3] [i_9 - 3] [i_10] [9] [4] [i_10] = 7;
                        arr_38 [i_2] = (((arr_19 [i_2] [i_9 - 2] [8] [8] [8]) ^ var_10));
                        var_26 = var_13;
                        var_27 = var_7;
                    }
                    for (int i_13 = 0; i_13 < 13;i_13 += 1)
                    {
                        arr_42 [i_2] = ((var_0 ? 16140901064495857664 : (arr_19 [i_2] [i_2] [i_10] [i_11 + 1] [i_13])));
                        var_28 = (min(var_28, var_4));
                        var_29 = var_0;
                    }
                    arr_43 [i_2] [i_9] [i_2] [12] [i_2] [i_2] = var_9;
                    var_30 = ((!(arr_41 [i_11 + 1] [2])));
                }
                for (int i_14 = 1; i_14 < 12;i_14 += 1) /* same iter space */
                {
                    arr_46 [i_2] = (7 - var_4);
                    var_31 *= (max(((16777215 / (((max(247, 247)))))), var_0));
                }
                arr_47 [i_2] [i_2] = ((((8181252434815762170 == (arr_6 [7] [i_2]))) ? -var_14 : 4));
            }
        }
        for (int i_15 = 2; i_15 < 11;i_15 += 1)
        {
            arr_50 [i_2] [3] [i_2] = 4776326838881647479;

            for (int i_16 = 0; i_16 < 13;i_16 += 1)
            {

                /* vectorizable */
                for (int i_17 = 0; i_17 < 13;i_17 += 1)
                {
                    arr_59 [i_2] [5] [i_15 + 2] [i_16] [8] [i_15 + 2] = ((var_14 ? (((arr_19 [i_17] [i_16] [i_15] [i_2] [i_2]) ? var_8 : var_10)) : (var_5 == var_9)));
                    arr_60 [i_2] [i_2] [i_2] [4] = 8;
                    var_32 = var_8;
                    var_33 ^= (arr_35 [i_17] [0] [i_15 - 2]);
                }
                arr_61 [3] [12] [i_2] [i_16] = max(10265491638893789446, -8981445573167208677);
            }
            /* vectorizable */
            for (int i_18 = 0; i_18 < 13;i_18 += 1)
            {
                var_34 = (var_0 != var_12);
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 13;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 13;i_20 += 1)
                    {
                        {
                            var_35 = ((~((((arr_48 [1] [i_2]) != 2386919934)))));
                            arr_69 [i_2] [i_15 + 2] [i_2] [i_19] [i_2] [i_15 - 1] [i_20] = var_4;
                            var_36 *= ((((7 && (arr_40 [i_20] [4] [i_18] [9] [9]))) || (!5980854241232957057)));
                        }
                    }
                }
            }
            var_37 = var_1;
        }
    }
    /* vectorizable */
    for (int i_21 = 0; i_21 < 14;i_21 += 1) /* same iter space */
    {
        var_38 = (max(var_38, var_10));
        var_39 = ((~(arr_71 [i_21])));
    }
    /* vectorizable */
    for (int i_22 = 0; i_22 < 14;i_22 += 1) /* same iter space */
    {
        arr_76 [i_22] = (!var_2);
        var_40 ^= ((var_13 ? var_10 : (arr_75 [i_22] [i_22])));
        var_41 = (~var_11);
        var_42 = var_2;
    }
    var_43 = (min((min(var_9, (~var_1))), var_9));
    #pragma endscop
}
