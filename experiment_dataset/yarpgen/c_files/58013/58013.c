/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_1] = ((-(34 - 1412507366)));
                                arr_12 [i_0] [i_0] [i_1] [i_0] [i_4] = (~var_14);
                                var_16 ^= (min(((max((arr_9 [i_0 + 1] [i_0 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1]), (arr_5 [i_0 - 2] [i_0 - 2] [i_4 + 1] [i_0 - 2])))), (((arr_5 [i_0 + 1] [i_0] [i_4 - 2] [i_0 + 1]) ? (arr_10 [i_0 + 2] [i_3]) : var_15))));
                                var_17 *= (max((((arr_2 [i_0]) ? (arr_8 [i_0] [i_0] [i_2] [i_4 + 2]) : -35)), ((-((max((arr_7 [i_3] [i_3] [i_3]), var_15)))))));
                            }
                        }
                    }
                }
                var_18 = var_8;
                arr_13 [i_0] [i_0] [i_1] = max(0, -1);
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 2; i_5 < 11;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 10;i_7 += 1)
            {
                {
                    var_19 = ((+((4235445607301778039 ? (arr_10 [i_5] [0]) : 11))));
                    var_20 += var_1;
                    var_21 = (~var_2);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 9;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 9;i_9 += 1)
            {
                {
                    arr_28 [i_8] [i_8] = ((var_14 ? (arr_0 [i_5 - 1] [i_8]) : (arr_0 [i_5 - 2] [i_9 - 1])));
                    var_22 = (((((arr_23 [8] [4] [0]) ? var_15 : var_7)) % (!var_10)));

                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        var_23 ^= ((0 ? 11 : 0));

                        for (int i_11 = 1; i_11 < 10;i_11 += 1)
                        {
                            var_24 = ((-(arr_32 [i_5] [i_5] [i_8] [i_9] [i_9] [i_10] [i_11])));
                            arr_35 [i_5] [i_8] [i_5] [i_8] [i_11] = ((!((-24199 != (arr_1 [i_8])))));
                            var_25 = (arr_17 [i_5 - 2]);
                        }
                        for (int i_12 = 2; i_12 < 11;i_12 += 1)
                        {
                            var_26 = (!var_5);
                            var_27 *= 5451615320603870248;
                        }
                    }
                    var_28 = (15316508750373970018 != -4);
                    arr_38 [i_8] [0] = 183;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_13 = 2; i_13 < 13;i_13 += 1)
    {
        var_29 = (((arr_41 [i_13 + 2]) + var_5));
        arr_42 [i_13] = var_13;
        arr_43 [i_13] = (((arr_39 [i_13]) / var_5));

        for (int i_14 = 0; i_14 < 15;i_14 += 1)
        {
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 15;i_15 += 1)
            {
                for (int i_16 = 4; i_16 < 12;i_16 += 1)
                {
                    {
                        arr_52 [i_13 + 1] [i_13] [1] [2] [i_13] [i_13 - 2] = (!59588);
                        var_30 = (min(var_30, (arr_49 [i_13] [i_16])));
                        var_31 = (((arr_46 [i_13 + 2] [i_16 - 3]) | (arr_39 [i_13])));
                    }
                }
            }
            arr_53 [i_13] = var_12;
        }
        for (int i_17 = 0; i_17 < 15;i_17 += 1)
        {

            for (int i_18 = 2; i_18 < 14;i_18 += 1)
            {
                var_32 = (min(var_32, var_5));
                arr_58 [i_13] [i_13] [i_13] [8] = 35;
            }
            arr_59 [i_13] [i_17] = (~2147483644);
            var_33 = (max(var_33, ((((~(arr_40 [i_17]))) < ((((arr_39 [14]) < 6769902147660735370)))))));
            var_34 = -51;
        }
    }
    #pragma endscop
}
