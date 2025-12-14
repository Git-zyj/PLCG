/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_16 = (min(var_16, ((((((arr_1 [i_0 - 1]) ? ((-5606398794774721892 ? var_14 : var_11)) : var_0)) > (((arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 3]) ? ((((arr_1 [i_0]) > 56))) : (arr_4 [7] [7] [i_1]))))))));
                arr_6 [i_0] [i_1] &= var_15;
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 23;i_4 += 1)
            {
                {
                    var_17 = ((-((((arr_13 [i_2] [i_4] [i_2] [i_4 + 1]) > var_7)))));

                    for (int i_5 = 3; i_5 < 21;i_5 += 1)
                    {
                        arr_18 [i_5] [i_4] [i_4] [i_4] [i_2] = ((-5606398794774721896 ? (arr_12 [i_2] [i_3] [i_3]) : (arr_7 [i_4 + 1] [i_5 + 1])));
                        arr_19 [14] [14] [14] [i_4] = (((arr_15 [i_2] [16] [i_4 + 1] [i_4] [16] [i_5]) && var_5));
                        arr_20 [i_4] [i_4] [i_4] = (arr_16 [i_2] [i_2] [i_3] [i_3] [i_4 - 1] [1]);
                        arr_21 [i_4] [i_4] [i_4] = arr_8 [5] [i_2];
                    }
                    for (int i_6 = 2; i_6 < 24;i_6 += 1)
                    {

                        for (int i_7 = 1; i_7 < 24;i_7 += 1)
                        {
                            var_18 = (((arr_14 [23] [i_4 - 1] [i_4 - 1]) ? (-32767 - 1) : (arr_14 [i_3] [i_3] [i_4 - 1])));
                            var_19 = (min(var_19, var_6));
                            var_20 = (((arr_23 [i_7 + 1] [i_4]) > (arr_23 [i_7 + 1] [i_4])));
                        }
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            arr_30 [8] [i_4] [i_4] [i_6 + 1] [1] [i_8] [i_2] = (arr_27 [11] [i_3] [11] [11] [i_3] [i_4]);
                            arr_31 [18] [1] [i_4] [24] [i_3] [18] = (arr_11 [i_4 + 2] [i_4 - 1] [i_6 + 1]);
                        }
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            arr_36 [i_6] [i_6] [i_6] [i_6] [i_9] |= (arr_22 [i_3] [1] [i_3]);
                            var_21 -= ((((0 ? (arr_22 [18] [4] [i_6]) : (arr_35 [i_2] [i_2] [i_6 - 1] [i_2] [i_2] [i_2] [i_2]))) > (!-60)));
                        }
                        var_22 = ((-71 ? (arr_10 [i_6 - 1]) : (arr_10 [i_6 - 2])));
                    }
                }
            }
        }
        arr_37 [i_2] [i_2] = ((((!(arr_32 [i_2] [i_2] [i_2] [i_2] [i_2]))) ? (((!(arr_12 [i_2] [i_2] [i_2])))) : (arr_33 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 13;i_10 += 1)
    {
        var_23 |= ((var_5 ? var_15 : (arr_22 [i_10] [i_10] [12])));
        arr_41 [5] = ((var_4 ? ((65535 ? (arr_9 [i_10] [i_10]) : (arr_4 [1] [i_10] [1]))) : (arr_13 [i_10] [0] [0] [i_10])));
        var_24 += ((arr_29 [i_10] [22] [22] [i_10] [i_10] [i_10] [i_10]) ? (arr_34 [i_10] [i_10]) : (((arr_10 [i_10]) ? var_8 : (arr_14 [i_10] [13] [i_10]))));
    }
    var_25 = (max(var_25, ((var_11 > (min((max(var_2, var_8)), -88))))));
    #pragma endscop
}
