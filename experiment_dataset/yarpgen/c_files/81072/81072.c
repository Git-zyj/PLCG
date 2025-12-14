/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((var_10 <= var_5), (max((max(var_11, -2485)), (var_3 ^ -2498)))));
    var_17 ^= (-2496 ? 2493 : 65517);

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = (((((arr_4 [i_0] [i_0]) <= (arr_0 [i_0]))) ? (min((arr_0 [i_0]), (arr_4 [i_2] [i_0]))) : var_1));
                    arr_8 [i_0] = ((((-(arr_2 [12] [i_0]))) <= (((~(arr_6 [i_0] [i_2] [i_2]))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 4; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 15;i_4 += 1)
            {
                {
                    arr_16 [i_4] [i_4] &= ((-((min(-2496, (arr_13 [i_3] [i_4]))))));
                    arr_17 [6] [i_3] [i_4] [i_0] = (arr_3 [i_4] [i_3] [i_0]);

                    for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                    {
                        var_19 -= (((arr_3 [10] [i_3 - 2] [i_0 - 1]) <= (((-2494 ? -20226 : 1)))));
                        var_20 = (min(var_20, (((~((((arr_10 [i_0 - 1]) <= (arr_10 [i_0 - 1])))))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                    {
                        arr_23 [i_0 - 1] [i_3] [i_4] [14] |= ((-2481 ? -2503 : 61804));
                        arr_24 [i_0] [i_3] [i_4 + 3] [i_0] [i_6] [i_6] = (((((arr_9 [i_0]) ? (arr_6 [i_6] [i_4 + 3] [i_3]) : var_8))) <= ((~(arr_3 [i_3] [12] [i_3]))));
                        arr_25 [i_0] = (((arr_3 [3] [i_3] [11]) <= (arr_11 [i_3 - 1])));
                    }
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        var_21 &= (((~(-20226 <= 1))));
                        arr_28 [i_0] [i_3] = (1 <= 7);
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            var_22 = (max(var_22, (arr_10 [i_0])));
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 18;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        {
                            arr_40 [i_0 - 1] [i_0] [1] [i_10] [i_11] [i_11] = ((-(arr_37 [11] [i_9] [17] [i_11])));
                            arr_41 [i_0] [3] [i_9] [3] [i_9] [i_9] [i_9] = arr_38 [i_0] [i_0];
                            arr_42 [i_0] [i_9] [i_9] [i_8] [i_0] = var_6;
                        }
                    }
                }
            }
            var_23 = (~var_10);
            var_24 += (arr_38 [i_8] [0]);
        }
        var_25 |= ((~(arr_32 [2] [i_0] [i_0])));
    }
    var_26 = var_12;
    var_27 = (~var_6);
    #pragma endscop
}
