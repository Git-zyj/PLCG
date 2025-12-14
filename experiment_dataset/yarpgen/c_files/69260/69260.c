/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -32766;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_11 -= (((((arr_8 [i_3] [2] [i_0 - 1] [i_1 + 1] [i_3]) ? (arr_8 [i_3] [i_1] [i_0 - 1] [i_1 - 2] [0]) : (arr_8 [i_3] [i_3] [i_0 - 1] [i_1 - 2] [i_1]))) >> (((arr_6 [i_3] [i_1] [i_2] [i_3]) - 17870231680681955105))));
                        arr_10 [i_0 - 1] [i_0] [i_0] = var_9;

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_15 [i_0] = var_3;
                            arr_16 [i_0] [i_1 - 1] [i_2] [i_0] [i_3] |= -32742;
                            arr_17 [i_0] [i_0] [i_1] [i_2 - 2] [i_3] [i_3] [i_1] = var_3;
                            arr_18 [i_0] [i_1] [i_3] = ((var_1 ? (((arr_12 [i_4] [i_3] [i_2] [i_1 + 1] [i_0 + 1]) ? var_8 : var_5)) : var_1));
                        }
                        var_12 ^= (((-32759 + 7680514751949645142) ? (arr_9 [i_0] [i_0] [i_2] [i_2]) : 48015));
                        var_13 = (max(var_13, ((((((arr_7 [i_3] [6] [i_2] [6]) - var_4)) < ((((arr_5 [i_3]) * -var_8))))))));
                    }
                    var_14 += (arr_9 [i_0 - 1] [i_1 + 1] [i_2] [i_0 + 1]);
                    var_15 = (min(var_15, var_9));
                    arr_19 [i_0] [i_0] [i_2 + 1] [1] = -var_0;

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        arr_24 [i_0] [i_0] = var_2;
                        var_16 = (arr_3 [i_1 + 1] [i_1] [1]);
                        arr_25 [i_0] = (((((arr_3 [i_0] [9] [i_0 + 1]) ? (arr_2 [i_0]) : var_6)) > (arr_23 [i_5] [i_2 - 1] [i_1 - 2] [i_0] [i_0 - 1] [i_0 + 1])));
                    }
                    /* vectorizable */
                    for (int i_6 = 4; i_6 < 8;i_6 += 1)
                    {
                        arr_28 [10] [i_0] [i_0] [i_0] = -32736;
                        var_17 = ((-6464699555037070745 ? (-32766 < var_1) : (((arr_27 [i_1 - 1]) ? 1 : var_9))));

                        for (int i_7 = 2; i_7 < 10;i_7 += 1)
                        {
                            arr_33 [i_0] [i_1] = (((arr_20 [i_7 + 1] [i_7 - 2] [i_6 - 4] [i_1 + 1]) ? (arr_29 [i_0 - 1] [i_0 + 1] [i_2 - 2] [i_6 - 3] [i_6]) : (arr_29 [i_0 + 1] [i_0] [i_2 - 1] [i_6 + 4] [i_7])));
                            var_18 = (min(var_18, (2016 & -429085643)));
                            var_19 -= ((32741 ? (((arr_8 [i_6] [i_6] [i_6] [i_6] [i_6]) ? (arr_22 [i_6]) : 24475)) : (var_9 <= var_2)));
                        }
                        arr_34 [i_6 + 3] [8] [i_0] [i_0] [i_0] [i_0] = var_3;
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        var_20 = var_4;
        arr_37 [i_8] [i_8] = (arr_36 [i_8] [i_8]);
        var_21 = (min(var_21, (arr_35 [i_8])));
        arr_38 [i_8] = ((!(arr_35 [i_8])));
    }
    #pragma endscop
}
