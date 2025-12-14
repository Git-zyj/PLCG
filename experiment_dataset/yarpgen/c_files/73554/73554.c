/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_11 = (arr_2 [i_0]);

        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            arr_7 [i_0] = (((arr_0 [i_1 + 4] [i_1 + 4]) << (((arr_0 [i_1 + 4] [i_1 + 4]) - 9512))));
            arr_8 [i_0] [i_0] = ((arr_6 [i_1] [i_1 - 1]) ? var_6 : (arr_4 [i_1 + 1] [i_1 + 2] [i_1 + 1]));
            var_12 = (((arr_5 [i_1]) ? (!236) : (~-16542)));
            var_13 = ((-33356 ? ((32180 ? 33361 : 5994197420184772321)) : (13017430211594102093 != var_8)));
        }
        var_14 -= (!-91);
        var_15 = (min(var_15, (arr_2 [16])));
        var_16 = (((var_6 - -43) ? -var_3 : ((1526617520 ? 2107513532 : -1))));
    }
    for (int i_2 = 1; i_2 < 23;i_2 += 1)
    {
        arr_13 [i_2] [i_2] = (((((33356 ? 32180 : 8872705583717157448))) ? var_5 : ((~(((2107513542 > (arr_12 [i_2] [1]))))))));

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_17 -= var_6;
            arr_16 [i_2] [i_3] = (((-107 | 2187453750) ? ((var_4 ? (((arr_14 [i_3] [i_2] [23]) ? 33361 : var_3)) : -var_7)) : (arr_12 [i_2 - 1] [i_2 - 1])));
            arr_17 [i_2] = (max((arr_14 [i_2] [i_2] [i_3]), (var_10 || -100)));
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 4; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 4; i_7 < 12;i_7 += 1)
                    {
                        {
                            var_18 |= ((255 ? 18344 : 1));

                            /* vectorizable */
                            for (int i_8 = 0; i_8 < 15;i_8 += 1)
                            {
                                var_19 = -2107513542;
                                arr_31 [i_5] [i_7] [i_6] [1] [i_5] = -1;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        {

                            for (int i_11 = 3; i_11 < 14;i_11 += 1)
                            {
                                var_20 = (var_2 ? (((arr_28 [i_11 + 1] [i_11] [11] [1] [i_11 - 1] [i_11]) ? -15470 : (arr_28 [i_11 - 3] [i_11 - 3] [1] [i_11] [i_11 - 3] [1]))) : (~var_5));
                                var_21 *= ((var_8 ? -1928257385 : 255));
                            }
                            var_22 = (max(var_22, (((~((((((208 ? (arr_26 [i_4] [i_9]) : 0)) + 2147483647)) << (((var_8 + 20283) - 26)))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
