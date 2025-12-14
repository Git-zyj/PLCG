/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_12 = (max(var_12, (arr_1 [i_0])));
            var_13 = var_7;
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_11 [i_2] [i_0] = (arr_3 [i_2 - 1]);
                        var_14 += ((~((-(arr_4 [i_0])))));
                        var_15 = ((-5 != (arr_10 [i_2 - 2] [i_2 + 1] [i_2] [i_3 - 1])));
                        var_16 = (arr_10 [i_3 - 1] [19] [12] [i_2 - 2]);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                {
                    arr_18 [12] [12] = ((!(((var_3 ? var_5 : (((!(arr_2 [i_0] [i_5])))))))));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 24;i_7 += 1)
                        {
                            {
                                arr_24 [i_0] [i_4] [i_5] [i_7] [20] [i_4] = (arr_0 [i_4] [i_4]);
                                var_17 -= ((((((arr_21 [i_7 - 1] [i_7 - 1] [i_6 + 1] [i_6 - 1] [i_6]) >> (((((~2147483647) - -2147483636)) + 39))))) ? ((-(arr_10 [i_7 - 1] [i_5] [i_6 - 1] [i_5]))) : ((-(((-62 + 2147483647) >> (51 - 48)))))));
                                var_18 = (~var_5);
                            }
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 3; i_8 < 17;i_8 += 1)
    {
        arr_28 [i_8] = -39;
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 18;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 17;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 0;i_12 += 1)
                        {
                            {
                                arr_40 [i_8] [i_8] = ((-1278624664 <= (arr_10 [i_8 + 1] [i_9] [i_10] [20])));
                                arr_41 [i_8 - 1] [i_8 - 2] [i_8] [i_8 - 1] [i_11] [i_12] = (arr_17 [i_8 - 3] [i_9] [i_10] [i_12]);
                                var_19 = var_3;
                            }
                        }
                    }
                    var_20 = -var_8;
                }
            }
        }
        var_21 = ((-(var_0 != 53)));
        var_22 = (((arr_6 [i_8 - 3] [i_8 + 2]) - (arr_33 [i_8] [i_8] [i_8 + 3])));
    }
    /* LoopNest 2 */
    for (int i_13 = 1; i_13 < 7;i_13 += 1)
    {
        for (int i_14 = 3; i_14 < 7;i_14 += 1)
        {
            {
                arr_47 [i_13] [i_13] = var_4;

                for (int i_15 = 0; i_15 < 10;i_15 += 1)
                {
                    var_23 = ((-((~(arr_43 [i_13 + 2])))));

                    /* vectorizable */
                    for (int i_16 = 2; i_16 < 6;i_16 += 1)
                    {

                        for (int i_17 = 0; i_17 < 10;i_17 += 1)
                        {
                            var_24 += var_9;
                            var_25 &= (~-51);
                            arr_54 [i_13 + 3] [i_14 - 3] [7] [i_14 - 3] [i_15] = (arr_36 [i_15] [i_15]);
                            var_26 -= (~-var_10);
                        }
                        for (int i_18 = 0; i_18 < 10;i_18 += 1)
                        {
                            var_27 = ((-(arr_6 [i_14 + 2] [i_13 + 3])));
                            arr_57 [i_15] = ((~(arr_50 [i_15] [i_15])));
                            arr_58 [i_13 + 1] [7] [i_15] [i_15] [i_15] = (((arr_34 [i_16] [i_13 + 2] [i_13 + 3] [i_15] [i_14 - 1]) ? (arr_39 [i_14 + 1] [i_14 + 1] [i_15] [i_14] [i_14 + 1]) : (~4235780076255229440)));
                        }

                        for (int i_19 = 2; i_19 < 8;i_19 += 1)
                        {
                            var_28 = (((((var_8 && (arr_29 [i_15])))) - var_1));
                            arr_61 [i_15] [i_14] [i_14 + 3] = ((~(arr_32 [i_13 - 1] [i_19 - 1] [i_16 - 2] [i_14 - 3])));
                        }
                        arr_62 [i_15] = ((((-(arr_43 [i_14]))) - (((var_1 != (arr_2 [i_15] [i_14 - 1]))))));
                    }
                    arr_63 [i_15] = -4730749220510051708;
                }
            }
        }
    }
    var_29 = ((((max((max(-112, 2115942731)), ((min(-27058, -39)))))) ? var_1 : ((((var_3 == var_7) ? var_10 : var_0)))));
    var_30 = (min(0, 9762924264101394484));
    var_31 &= ((((max(((1702605154 ? var_0 : var_0)), (~var_7)))) ^ (~var_10)));
    #pragma endscop
}
