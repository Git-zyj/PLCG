/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_20 = (min((((((arr_4 [i_3] [i_2] [i_1 + 1] [i_0]) ? 3139091650 : (arr_7 [i_0] [i_1] [i_1] [i_0] [i_3] [i_3]))) + ((var_7 ? (arr_7 [i_0] [12] [i_0] [9] [i_0] [i_0]) : (arr_3 [i_0] [i_1]))))), (arr_1 [i_1 + 1] [i_1 + 1])));
                        var_21 -= (arr_7 [i_0] [0] [i_1 - 1] [1] [i_1] [i_1 - 1]);
                        var_22 = (min(var_22, var_7));
                        var_23 |= (((((arr_4 [i_0] [i_1] [i_2] [i_3]) ? (arr_9 [i_3] [i_2] [7] [i_0]) : (arr_9 [i_0] [i_1 + 1] [i_2] [i_0])))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    {
                        var_24 = -60;
                        var_25 ^= arr_16 [i_6];
                    }
                }
            }
        }

        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        {
                            var_26 = ((arr_22 [i_9 - 1] [i_9 - 1] [i_9 - 1]) >= var_15);
                            var_27 |= (arr_10 [i_0] [i_0]);
                            var_28 = arr_27 [i_0] [i_7] [i_8] [1] [i_9] [i_10];
                            var_29 = ((((!(arr_27 [i_0] [i_0] [i_8] [i_0] [6] [i_0]))) ? (min(-9113453998556552563, 8702937211956311763)) : ((((!(arr_11 [i_10] [i_7])))))));
                        }
                    }
                }
            }
            arr_29 [1] = arr_24 [i_0] [i_7] [i_7] [i_7];
        }
    }
    for (int i_11 = 0; i_11 < 14;i_11 += 1)
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 13;i_13 += 1)
            {
                {
                    var_30 = ((16854243097335354566 ? 1 : 9790760298523291249));
                    arr_38 [i_13] [i_12] [i_13] = ((+((+(((arr_20 [i_11]) ? (-32767 - 1) : (arr_26 [1] [1] [i_13] [i_11] [1])))))));
                    /* LoopNest 2 */
                    for (int i_14 = 1; i_14 < 1;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 14;i_15 += 1)
                        {
                            {
                                arr_45 [i_11] [i_12] = (min((arr_40 [7] [i_13 + 1] [7]), (arr_43 [i_11])));
                                var_31 ^= var_9;
                            }
                        }
                    }
                }
            }
        }
        arr_46 [i_11] = (min((arr_20 [i_11]), (arr_20 [i_11])));
        var_32 = ((((!((min(2594305352441040630, 13))))) ? ((((!((max(var_12, 47))))))) : (max(4294967295, 695961133))));
        arr_47 [i_11] = var_1;
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 1;i_16 += 1)
    {
        var_33 = (min(var_33, ((((arr_48 [2]) < var_11)))));
        var_34 = arr_49 [i_16];
        var_35 = ((~(arr_51 [i_16])));
        var_36 = (arr_50 [i_16] [17]);
    }
    var_37 = (max((var_12 == var_6), var_19));
    /* LoopNest 3 */
    for (int i_17 = 0; i_17 < 18;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 18;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 18;i_19 += 1)
            {
                {
                    var_38 ^= var_3;
                    var_39 = (arr_52 [i_17]);
                    var_40 -= (min((((3293103086 ? 1 : 1001864196))), -9113453998556552560));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_20 = 0; i_20 < 10;i_20 += 1)
    {
        for (int i_21 = 0; i_21 < 10;i_21 += 1)
        {
            {
                var_41 = (((2647051732575963383 != 204176383) ? var_14 : var_6));
                var_42 += (min((max((arr_6 [13] [13] [11] [i_21] [1] [i_20]), (arr_4 [i_20] [12] [i_20] [i_20]))), ((((((arr_21 [i_20] [i_21] [i_21] [i_21]) != var_10)) && (((-32761 ? 32193 : 0))))))));
                var_43 = var_16;
            }
        }
    }
    #pragma endscop
}
