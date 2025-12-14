/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 10;i_3 += 1)
                {
                    {
                        var_10 = (((max(var_5, ((var_7 | (arr_0 [i_0] [i_1]))))) % var_9));

                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            var_11 = (max((min((min((arr_10 [i_2 + 2] [i_3 + 3] [i_3 + 3]), (arr_7 [i_0] [i_0] [i_2]))), -23616)), ((((max(var_2, 6)) >> ((((min((arr_6 [i_2]), -20))) + 14506)))))));
                            var_12 = (max(var_12, ((((((min((arr_11 [i_0] [i_0] [7] [7] [i_4] [i_0]), (arr_13 [i_4] [i_4] [10] [i_4] [i_0])))) & ((min((arr_12 [i_0] [i_0] [i_2] [i_3 - 2]), (arr_12 [i_4] [i_3] [i_2] [i_0]))))))))));
                        }
                        for (int i_5 = 3; i_5 < 10;i_5 += 1)
                        {
                            arr_17 [0] [i_1] [0] [i_3] [i_2] [i_5] = (max((((-(max(var_5, (arr_13 [i_1] [i_2] [i_1] [i_2] [i_0])))))), var_8));
                            arr_18 [i_0] [i_1] [i_0] [i_3] [i_2] = (max(37926, (arr_10 [i_0] [i_2] [i_2])));
                        }
                        arr_19 [i_2] [i_2] [i_2] [i_3] = (arr_8 [i_0] [i_0] [i_0] [i_3]);
                        var_13 = var_3;
                    }
                }
            }
        }
        arr_20 [8] [i_0] = ((var_7 * (((min((max((arr_10 [i_0] [i_0] [i_0]), 0)), (!var_1)))))));
        arr_21 [i_0] = (((arr_2 [i_0]) ? -293455461286100794 : var_5));
    }
    for (int i_6 = 0; i_6 < 0;i_6 += 1)
    {
        arr_24 [i_6] = var_6;

        for (int i_7 = 2; i_7 < 23;i_7 += 1)
        {
            var_14 = (((arr_23 [i_6] [13]) ? 3005348616 : -10675));
            var_15 &= (arr_25 [i_6] [i_6] [i_7]);
            arr_27 [i_6] [i_7] [14] = ((((max((arr_26 [i_6 + 1] [i_7]), (arr_22 [i_6] [i_7 + 2])))) ? ((-(arr_26 [i_6 + 1] [i_6 + 1]))) : ((max((arr_22 [i_6 + 1] [i_7 + 2]), (arr_22 [i_6 + 1] [i_7 + 1]))))));

            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        {
                            arr_36 [i_6 + 1] [i_7 + 1] [i_8] [i_6] = (((min((arr_31 [i_6] [i_6] [i_8] [i_9]), ((var_3 ? (arr_25 [i_6] [i_8 - 1] [i_6]) : (arr_35 [i_6 + 1] [i_7] [i_8] [i_9] [i_9]))))) >> (min(3113977230, 1))));
                            arr_37 [i_7] [i_6] [i_7 + 1] [i_7 - 2] [i_7 - 2] [i_7 + 1] = 19119;
                            var_16 = (((arr_22 [i_6 + 1] [i_8 - 1]) ^ (((arr_22 [i_6 + 1] [i_8 - 1]) + (arr_22 [i_6 + 1] [i_8 - 1])))));
                        }
                    }
                }

                for (int i_11 = 1; i_11 < 24;i_11 += 1)
                {
                    var_17 = 19140;
                    arr_41 [i_6] [i_7 - 1] [12] = (max((arr_26 [i_6 + 1] [i_8]), var_8));
                    arr_42 [i_6 + 1] [i_6 + 1] [i_6] [i_6 + 1] [i_6 + 1] = (~-124);
                }
            }
            for (int i_12 = 3; i_12 < 23;i_12 += 1)
            {
                var_18 = (max(var_18, var_8));
                arr_45 [i_6] [i_6] [i_6] = (((117 + ((max((arr_29 [i_6] [24]), 27646))))));
            }
        }
    }
    for (int i_13 = 0; i_13 < 23;i_13 += 1)
    {
        arr_48 [i_13] [i_13] = (max((min(((60 - (arr_25 [22] [22] [i_13]))), ((max((arr_28 [i_13] [i_13]), (arr_47 [i_13] [i_13])))))), ((max(var_2, (!46422))))));
        arr_49 [14] = (min(12957988475333281331, (arr_35 [i_13] [i_13] [i_13] [i_13] [10])));
        var_19 = (1 - -1019933738);
        /* LoopNest 2 */
        for (int i_14 = 2; i_14 < 19;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 23;i_15 += 1)
            {
                {
                    var_20 = (((((max(11, var_8)))) / var_2));
                    var_21 = ((~((-37897 ? var_1 : (((arr_54 [i_13] [i_14 + 2] [i_15]) ? (arr_43 [i_15] [i_15] [i_13] [i_13]) : (arr_53 [i_13] [i_13] [i_14])))))));
                    var_22 = 18;
                    var_23 = (max(var_23, ((min((max((arr_31 [i_15] [12] [i_15] [i_15]), (~4230382721))), (arr_51 [i_13]))))));
                }
            }
        }
        arr_55 [i_13] [i_13] = var_0;
    }
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 13;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 13;i_17 += 1)
        {
            {
                var_24 = (((max(var_3, ((0 ? var_5 : 6)))) >> (((min(7578609449002523570, ((min(1019933749, 5520))))) - 5496))));
                arr_63 [i_16] [i_16] [i_17] = 293455461286100797;
                /* LoopNest 2 */
                for (int i_18 = 2; i_18 < 11;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 1;i_19 += 1)
                    {
                        {
                            arr_68 [i_18] [i_16] [i_17] [i_16] [i_16] = (min((min((70 + var_7), (((37913 ? var_1 : 2752454787))))), (((!(0 <= var_7))))));
                            arr_69 [i_19] [i_16] [i_16] [i_17] [i_16] [i_16] = ((var_9 || ((((arr_58 [i_18 + 2]) ? (arr_58 [i_18 + 2]) : (arr_58 [i_18 + 1]))))));
                        }
                    }
                }
            }
        }
    }
    var_25 = ((((21 ? 2480737920840465120 : (((var_3 ? var_2 : var_8))))) >> (((min(((min(var_0, var_3))), (var_7 + var_9))) - 41021))));
    #pragma endscop
}
