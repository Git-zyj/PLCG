/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 = -var_8;
        arr_3 [i_0] = (min(((max(var_6, (!-13)))), (((((-(arr_0 [i_0] [i_0])))) ? var_8 : 69))));
        var_13 = (min((((!(arr_0 [i_0] [i_0])))), (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));
        var_14 = (min(var_14, (((~(var_0 != var_7))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 18;i_3 += 1)
            {
                {
                    var_15 = (((arr_2 [i_3 + 2]) + 6144));
                    arr_14 [i_3] [i_2] [0] = ((31007 >> (((arr_6 [4] [i_3 + 1]) + 22596))));
                    var_16 += (arr_12 [i_1] [i_2] [i_2]);
                    arr_15 [i_1] [i_3] [i_3 + 1] = (((((arr_0 [i_1] [i_1]) ? (arr_13 [i_1] [i_2] [i_3]) : 102)) < (arr_2 [i_3 + 2])));
                }
            }
        }

        for (int i_4 = 2; i_4 < 18;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        {
                            var_17 -= (arr_6 [i_4] [i_7]);
                            var_18 |= (arr_1 [i_4 + 1] [i_4 - 2]);
                        }
                    }
                }
            }
            var_19 = 2927014275;
        }
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            var_20 = (((arr_22 [i_1] [i_8] [i_1] [i_8]) ? (arr_22 [i_1] [i_8] [i_1] [i_1]) : var_4));
            var_21 = 1;
            var_22 |= (((arr_6 [i_1] [i_8]) ? (arr_6 [i_1] [i_8]) : (arr_6 [i_1] [i_8])));
            arr_29 [i_1] [i_1] [i_1] = (arr_6 [i_1] [i_8]);
        }
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {

            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                var_23 = 7647937743127562327;
                var_24 = ((((arr_22 [i_1] [i_9] [i_1] [i_9]) ? (arr_23 [i_1] [i_9] [i_9] [i_10] [i_10]) : (arr_31 [i_9]))));
                arr_35 [i_10] &= (((arr_30 [i_10]) ? (arr_13 [i_10] [10] [i_1]) : (arr_30 [i_1])));
            }
            var_25 += var_4;
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 20;i_12 += 1)
                {
                    {
                        var_26 = (arr_26 [i_1] [i_12]);
                        var_27 = (arr_12 [i_1] [i_9] [i_9]);
                        arr_41 [i_1] [i_9] [i_11] [i_12] = (((arr_38 [i_1] [i_9] [i_11] [i_12]) << (((arr_38 [i_1] [i_1] [3] [i_1]) - 4103817632))));
                    }
                }
            }
            arr_42 [i_9] [i_9] = (arr_26 [i_1] [i_9]);
            var_28 = (((arr_12 [i_1] [i_9] [i_9]) ? -6129 : -84));
        }
        var_29 |= 199;
    }
    var_30 -= var_8;
    var_31 = (var_2 / var_7);
    #pragma endscop
}
