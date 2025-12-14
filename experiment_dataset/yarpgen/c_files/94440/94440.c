/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_10 = ((1210181722 << (var_3 - 8193382886882759164)));

                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        arr_9 [i_0] [i_1] [i_1] [2] = (((((3200032379777542443 ? (arr_7 [i_0] [i_3 + 1] [i_3] [5] [i_3 + 1]) : (arr_7 [1] [i_3 - 2] [i_3] [i_3 + 1] [i_3])))) ? ((max((arr_7 [i_3] [i_3 - 2] [i_3] [i_3] [i_3]), (arr_7 [i_1] [i_3 - 2] [i_3] [i_3] [i_3])))) : (~1)));
                        var_11 ^= 0;
                    }
                }
                arr_10 [i_1] = ((-var_4 <= ((-(~11568769993878329727)))));
                var_12 += var_4;

                for (int i_4 = 2; i_4 < 13;i_4 += 1)
                {
                    arr_15 [3] [i_1] = max(((18446744073709551615 ? 1 : (18317528898282536709 ^ 1))), ((((arr_8 [i_4 - 2] [i_4 - 2] [i_4 - 2] [i_4 - 2] [i_4]) - 1))));

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_13 = var_1;
                        arr_18 [i_0] [i_1] [i_4] [i_4 - 2] [i_5] = (max(((max(var_9, var_8))), (((min(1, (arr_4 [i_4] [i_1] [i_0])))))));
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        var_14 ^= (((arr_19 [i_6]) ? (((arr_20 [i_6]) ? (arr_19 [6]) : 70)) : 1));
        arr_21 [i_6] = (~var_2);

        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            arr_24 [i_6] [2] &= (arr_22 [i_6]);
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 18;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        {
                            arr_35 [i_8] = (((arr_29 [i_8]) ? var_7 : (arr_32 [i_6] [i_7] [i_7] [i_7] [12])));
                            var_15 = -var_5;
                        }
                    }
                }
            }
            arr_36 [9] [i_7] [9] = -4692137976184976919;
            /* LoopNest 2 */
            for (int i_11 = 3; i_11 < 17;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 20;i_12 += 1)
                {
                    {

                        for (int i_13 = 4; i_13 < 19;i_13 += 1)
                        {
                            var_16 = (max(var_16, -68));
                            arr_46 [i_6] [1] [i_11 - 3] [i_12] [i_13] [i_7] = 9884604071185667730;
                            var_17 -= 1607040647081013080;
                            arr_47 [i_13] [1] = (arr_37 [i_12 - 1] [i_11 - 2] [i_7 - 1]);
                        }
                        for (int i_14 = 1; i_14 < 17;i_14 += 1)
                        {
                            var_18 = ((var_1 - (arr_26 [i_7] [i_7] [i_7 - 1] [i_14 + 2])));
                            var_19 = (arr_37 [i_6] [i_7 - 1] [i_11 - 2]);
                            var_20 &= 8935141660703064064;
                            var_21 = arr_41 [i_7 - 1] [i_11 + 1] [i_7 - 1] [i_12 + 1];
                            arr_50 [i_6] [i_6] [16] = var_0;
                        }
                        var_22 = var_8;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 21;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 21;i_16 += 1)
                {
                    {
                        var_23 = (arr_33 [i_7] [i_7 - 1] [i_7] [i_7] [i_7 - 1] [i_7 - 1]);
                        arr_56 [i_6] = var_7;
                    }
                }
            }
        }
        var_24 = (arr_44 [i_6] [i_6]);
    }

    for (int i_17 = 0; i_17 < 18;i_17 += 1)
    {
        arr_61 [i_17] = max(61, (max((max(37274, 10262541552976595378)), (((arr_27 [i_17] [i_17] [i_17] [i_17]) * (arr_31 [i_17] [i_17]))))));
        var_25 = (((((arr_33 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17]) ? (arr_33 [1] [1] [i_17] [1] [i_17] [i_17]) : var_0))));
        arr_62 [i_17] [5] = ((-(((!(arr_58 [i_17] [i_17]))))));
    }
    /* vectorizable */
    for (int i_18 = 2; i_18 < 20;i_18 += 1)
    {
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 22;i_19 += 1)
        {
            for (int i_20 = 3; i_20 < 19;i_20 += 1)
            {
                {
                    var_26 = (arr_66 [i_18] [i_18]);
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 22;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 1;i_22 += 1)
                        {
                            {
                                arr_75 [i_20] [i_21] [i_22] = var_7;
                                var_27 = (arr_68 [5] [5] [i_20] [i_21]);
                                var_28 = -177;
                                var_29 = (((~var_6) ^ (arr_70 [i_18] [i_19] [i_20] [i_19])));
                            }
                        }
                    }
                    var_30 = (arr_67 [i_18 - 1] [i_20 + 3] [i_20 - 3] [i_20 + 1]);
                }
            }
        }
        arr_76 [i_18] = (arr_66 [i_18 - 1] [i_18 + 1]);
    }
    var_31 = (max(var_31, var_2));
    var_32 = (max(var_32, var_0));
    #pragma endscop
}
