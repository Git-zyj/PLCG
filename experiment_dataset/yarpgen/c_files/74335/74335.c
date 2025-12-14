/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((var_8 ? var_7 : 17458)) & var_14)) / ((((~var_8) ? (var_12 != var_2) : ((max(24845, 127))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_1] = ((((((arr_1 [i_0] [i_1]) ? var_15 : (arr_3 [i_2])))) ? 65535 : ((var_4 ^ (18446744073709551607 | 1857914852)))));
                    var_18 = (arr_6 [i_0] [i_1] [i_1] [i_1]);
                    arr_9 [i_1] [i_1] [i_2] = ((((-(arr_5 [i_0])))) ? (((arr_2 [i_0] [i_2]) ? var_0 : (arr_6 [i_2] [i_1] [i_1] [i_0]))) : (((((arr_0 [i_0] [i_1]) < (arr_7 [i_2] [i_2] [i_1] [i_0]))))));
                    var_19 = (max(var_19, -23383));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 1; i_3 < 9;i_3 += 1)
    {
        arr_12 [11] = ((((18446744073709551603 ? (arr_4 [i_3] [3] [i_3 - 1]) : (arr_1 [i_3] [i_3])))) ? ((120 ? 1857914852 : 6111467273489651801)) : 1686076197);
        arr_13 [0] [i_3 + 3] = (75 < 23382);

        for (int i_4 = 2; i_4 < 11;i_4 += 1) /* same iter space */
        {
            arr_18 [i_3] [i_4 - 2] [i_4 - 2] = (((((1 ? 2501082568594654113 : 5703714492725899101))) ? (arr_5 [i_3 + 1]) : ((1319183188923680489 | (arr_7 [i_3] [i_4] [i_3] [3])))));
            var_20 = 170;
            arr_19 [i_3] [i_4] = (((3492007771 <= 283009394599206150) ? (((var_11 ? var_10 : var_2))) : (arr_17 [i_3 + 1])));
            arr_20 [i_4] [10] = (~-15308);
        }
        for (int i_5 = 2; i_5 < 11;i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 9;i_7 += 1)
                {
                    {
                        var_21 |= (~2501082568594654113);
                        arr_28 [i_5] [i_5 - 1] [0] = (arr_5 [i_7]);
                        var_22 = (min(var_22, (((((arr_11 [5]) + 2501082568594654113))))));
                    }
                }
            }
            var_23 += (((arr_1 [i_5 - 2] [i_3 + 1]) <= (arr_1 [i_3 + 3] [i_3 + 3])));
            var_24 *= (((arr_7 [i_3 + 3] [i_3 + 1] [i_3] [i_5]) != (arr_7 [i_3] [i_5] [i_5] [i_5 - 1])));
        }
        for (int i_8 = 2; i_8 < 11;i_8 += 1) /* same iter space */
        {
            arr_33 [i_8] = 117;
            var_25 *= (((arr_3 [i_3]) ? 1 : 2501082568594654113));
        }
        for (int i_9 = 2; i_9 < 11;i_9 += 1) /* same iter space */
        {
            var_26 = (var_6 / var_3);
            var_27 = ((~(~14029382253586235907)));
            arr_37 [i_3] [11] = 3492007774;
        }
        var_28 = (((arr_30 [i_3 + 2]) - (arr_30 [i_3 + 2])));
        arr_38 [3] = arr_0 [i_3] [i_3];
    }
    for (int i_10 = 0; i_10 < 21;i_10 += 1)
    {
        arr_41 [8] [i_10] = ((min((arr_40 [i_10]), (max(var_16, 283009394599206150)))));
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 20;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {
                {
                    arr_47 [8] [i_10] [i_10] [14] &= (min((((((max(802959524, var_0))) ? (arr_44 [i_11 - 1] [i_11 - 1] [i_11 - 1]) : (((var_16 / (arr_45 [i_10] [i_10] [15]))))))), (~var_8)));
                    var_29 = (arr_39 [i_10]);
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 21;i_14 += 1)
                        {
                            {
                                arr_52 [i_10] [i_10] [i_10] [i_10] [i_11] [i_10] = ((283009394599206150 + (((var_6 ? (arr_46 [i_11 + 1] [i_12] [4]) : var_2)))));
                                var_30 -= ((~(98615576 ^ 7561177047918914653)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
