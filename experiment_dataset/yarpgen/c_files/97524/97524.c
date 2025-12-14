/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= max(((var_3 ? var_5 : var_3)), 53);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_20 |= (((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_21 &= (!1);
                                var_22 |= (((arr_4 [i_0]) ? 39291 : -1899671736240444444));
                                var_23 = (1 <= 18);
                            }
                        }
                    }
                    var_24 = (((((var_6 ? (arr_4 [i_1]) : (arr_11 [i_0] [i_0] [i_1] [5] [i_2] [i_2])))) ? 39291 : (((arr_11 [i_0] [1] [1] [i_2] [7] [i_2]) ? (arr_5 [8] [i_1] [i_2] [i_0]) : (arr_9 [i_0] [i_0] [i_1])))));
                    var_25 = 8192;
                    var_26 += ((((((arr_5 [i_2] [i_2] [i_2] [i_2]) ? (arr_5 [i_0] [i_1] [i_1] [i_1]) : var_3))) ? var_12 : (arr_0 [i_0])));
                    var_27 = var_14;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                {
                    var_28 = (((arr_15 [i_0] [i_5] [i_0]) * (arr_15 [i_0] [i_5] [i_6])));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 18;i_8 += 1)
                        {
                            {
                                var_29 = var_18;
                                var_30 = (max(var_30, (1 % 202)));
                            }
                        }
                    }
                }
            }
        }
        arr_24 [i_0] = (arr_10 [i_0] [i_0] [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 0;i_12 += 1)
                        {
                            {
                                var_31 = (6873444112601875416 % 507904);
                                var_32 = ((11573299961107676200 ? 1 : var_12));
                            }
                        }
                    }
                    arr_34 [i_10] [i_9] [i_0] [i_0] = 1899671736240444437;

                    for (int i_13 = 1; i_13 < 16;i_13 += 1) /* same iter space */
                    {
                        var_33 ^= (arr_38 [i_13 + 2] [i_13 + 2] [i_13 + 4] [i_13 + 1]);
                        var_34 &= (((arr_38 [i_0] [i_0] [i_10] [i_13 + 3]) >> (arr_38 [i_0] [i_9] [i_9] [i_13 + 4])));
                        arr_39 [i_0] [13] [13] [i_13] = 255;
                    }
                    for (int i_14 = 1; i_14 < 16;i_14 += 1) /* same iter space */
                    {
                        var_35 = (((~var_5) - ((1899671736240444430 ? 8974475484198492674 : 1))));
                        var_36 += ((~((((arr_16 [i_9] [i_14 + 4]) || -871185490124694004)))));
                        var_37 = (((arr_38 [i_0] [i_9] [i_10] [i_14 + 1]) & var_11));
                    }
                    for (int i_15 = 1; i_15 < 16;i_15 += 1) /* same iter space */
                    {
                        arr_46 [i_15] [i_10] [i_9] = (((arr_1 [i_15 + 2]) ? (arr_1 [i_15 - 1]) : (arr_1 [i_15 + 3])));
                        var_38 = ((!(arr_1 [6])));
                        arr_47 [1] [1] [i_10] [i_15] = (((0 >= 248) == -64));
                        var_39 = (max(var_39, ((((arr_31 [3] [i_10] [i_15 + 4] [i_15 + 1] [i_15 + 3]) << (((arr_11 [i_0] [i_9] [13] [i_9] [1] [13]) + 27285)))))));
                        arr_48 [i_0] [i_9] [i_10] [i_15] = (((arr_18 [i_9] [i_15] [i_15 + 2] [17] [i_15 + 4] [i_15]) | (arr_18 [i_0] [i_0] [i_15 + 1] [i_15] [i_15 + 3] [9])));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 20;i_16 += 1) /* same iter space */
    {
        arr_52 [i_16] = ((var_8 <= (arr_12 [i_16] [i_16] [i_16])));
        arr_53 [i_16] = (arr_11 [i_16] [11] [i_16] [i_16] [i_16] [12]);
    }
    for (int i_17 = 0; i_17 < 20;i_17 += 1) /* same iter space */
    {
        var_40 = ((-(max((arr_7 [i_17] [i_17] [i_17] [i_17]), var_12))));
        var_41 = ((((((arr_8 [i_17] [i_17]) ? var_4 : (arr_50 [i_17])))) <= (max((arr_19 [1] [i_17] [3] [i_17] [i_17] [i_17]), ((192 ? 3387997502 : 3402761454057184516))))));
        var_42 -= (((((!(arr_4 [i_17])))) % (((-32767 - 1) ? 1 : 6114))));
        /* LoopNest 3 */
        for (int i_18 = 2; i_18 < 19;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 1;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 20;i_20 += 1)
                {
                    {
                        arr_65 [i_17] [i_17] [i_18] [i_17] [i_20] = (max(2476666725, 8783655908407040764));
                        var_43 = (arr_7 [i_17] [i_18 + 1] [i_19] [i_19]);
                    }
                }
            }
        }
        var_44 ^= (15714520937432208831 > 4294967295);
    }
    var_45 = (((~var_3) ? (var_2 ^ var_14) : ((~((11573299961107676200 ? 1 : 18446744073709551615))))));
    #pragma endscop
}
