/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_12 = (min(var_12, ((((((17064381393881028368 ? 1 : -91))) * (((arr_1 [i_0]) | (arr_1 [i_0]))))))));
        var_13 ^= (((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : ((((arr_1 [i_0]) ? 2590955269 : var_0))))) != (arr_0 [i_0] [i_0])));
        var_14 |= (arr_0 [i_0] [i_0]);
        arr_2 [i_0] [i_0] = ((var_10 | (max((arr_1 [i_0]), (arr_0 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_15 = 491520;
        var_16 -= ((min((arr_4 [i_1]), (arr_4 [i_1]))));

        /* vectorizable */
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            arr_8 [i_2] = ((((var_5 ? (arr_5 [i_1]) : (arr_4 [i_2]))) == (((var_3 != (arr_3 [i_1]))))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    {
                        var_17 += (((arr_12 [i_2] [i_2] [i_2 - 1] [i_2 + 2]) >= ((~(arr_9 [0])))));

                        for (int i_5 = 1; i_5 < 22;i_5 += 1)
                        {
                            var_18 = 0;
                            var_19 = (arr_5 [i_2]);
                        }
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            var_20 = (arr_15 [i_1] [i_1] [i_2] [i_1] [0] [i_6]);
                            arr_19 [i_6] [i_4] [i_3] [i_2] [i_1] = (((-(arr_9 [i_2]))));
                            var_21 += (arr_10 [i_3] [i_3] [i_6]);
                        }
                        arr_20 [i_1] = var_2;
                    }
                }
            }
            arr_21 [i_2] = 5039;
            var_22 = (-125 != 6259);

            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    arr_27 [i_7 - 1] [i_8] = ((((1152921504606846976 - (arr_11 [i_1] [17] [i_7] [i_1]))) == (arr_11 [i_1] [i_7 - 1] [i_7 - 1] [i_8])));
                    arr_28 [i_1] [i_1] [i_1] [i_1] = ((~(arr_23 [i_8] [13] [i_1])));
                }
                arr_29 [i_1] [i_1] [i_1] = 0;
                arr_30 [13] [i_2] [i_7] [i_7] = 0;
                arr_31 [i_7] [i_2] [i_1] = var_5;
            }
            for (int i_9 = 2; i_9 < 20;i_9 += 1)
            {
                var_23 = (((((arr_26 [i_9] [i_2 + 3] [i_9] [i_2]) > var_2)) ? (arr_15 [i_2] [i_2] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_9 + 1]) : var_8));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 22;i_11 += 1)
                    {
                        {
                            var_24 = (max(var_24, (((-(arr_18 [i_9 + 1] [i_9 - 1] [i_9 - 2] [i_9 - 1] [i_9 - 2]))))));
                            arr_40 [i_1] [i_1] [i_9] [i_1] [6] = (((~1) ? (var_1 | -1613978756) : -1613978753));
                        }
                    }
                }
                var_25 ^= (!(arr_12 [i_2 + 2] [i_2 + 1] [i_9 + 1] [i_9 - 1]));
                var_26 -= (((~36929) ? (!16553629116775261562) : (71 / 20)));
                var_27 *= (((arr_16 [i_1] [i_2] [i_9 + 1] [i_1] [i_2 + 1]) || (arr_26 [i_1] [i_2] [i_9] [i_1])));
            }
        }
    }
    #pragma endscop
}
