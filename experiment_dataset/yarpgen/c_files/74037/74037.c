/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, -1689631636));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_11 = (max(var_11, ((((~1) >= var_4)))));
        arr_3 [i_0] = max((((64 & -6421) | ((2147483647 ? var_9 : (arr_2 [i_0]))))), ((((-2147483647 & (arr_0 [i_0]))) ^ (max((arr_0 [i_0]), 2147483647)))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_12 |= (max((min((arr_4 [i_0]), (max(-1750688472, 24)))), (((var_2 || ((max(16935, (arr_4 [i_0])))))))));
                    arr_9 [i_0] [i_1] [i_1] [i_0] = (arr_4 [i_0]);
                    arr_10 [i_0] [13] [i_0] = (arr_7 [i_0] [8]);
                }
            }
        }
        arr_11 [i_0] = var_0;
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 22;i_3 += 1)
    {
        var_13 = var_7;

        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        {
                            var_14 -= (((((arr_25 [i_6] [i_7]) | (arr_18 [i_4] [i_6] [i_7]))) ^ var_4));
                            var_15 -= (((arr_21 [i_3] [i_3] [i_3 - 2] [i_3]) - (1 + var_2)));
                            var_16 = (min(var_16, var_4));
                            var_17 = (arr_16 [i_3] [22] [i_5] [1]);
                        }
                    }
                }
                arr_26 [i_3] [i_4] [6] [i_5] = (var_6 ? (arr_18 [i_3 + 1] [i_3 + 1] [i_3 - 1]) : var_3);
            }
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 20;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 20;i_9 += 1)
                {
                    {

                        for (int i_10 = 0; i_10 < 23;i_10 += 1) /* same iter space */
                        {
                            arr_37 [i_4] [i_10] &= var_3;
                            arr_38 [20] [i_4] [i_9] [i_9 + 2] [i_9] = (254 ? (arr_30 [i_3 + 1] [i_9] [i_3 + 1]) : (arr_27 [i_3 - 1] [8] [i_8] [i_9]));
                        }
                        for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
                        {
                            var_18 = ((142625730 == 0) ? (-2095 + 6) : -25);
                            arr_41 [i_9] [i_9] [i_11] [i_9 + 2] [i_9 + 2] [i_9 + 2] = (((1 != 26) == 40));
                            arr_42 [i_3 - 2] [i_3 - 2] [i_4] [i_3 - 2] [i_3 - 2] |= (arr_35 [i_4]);
                        }
                        for (int i_12 = 0; i_12 < 23;i_12 += 1) /* same iter space */
                        {
                            var_19 = (arr_16 [0] [i_3] [i_3 + 1] [i_9 - 1]);
                            var_20 = (arr_24 [15] [i_4] [i_4] [i_4] [11] [i_9] [i_12]);
                        }
                        var_21 = (((((!(-2147483647 - 1)))) >> (((arr_21 [i_9 + 1] [i_9 - 1] [i_9 + 3] [i_9 + 1]) - 76))));
                    }
                }
            }
        }
        var_22 = (arr_12 [19]);
    }
    for (int i_13 = 2; i_13 < 21;i_13 += 1)
    {
        arr_47 [i_13] |= (min(((max(58, 4066967343))), ((((-16384 > (arr_46 [i_13]))) ? (((max(1, (arr_45 [i_13] [i_13 + 3]))))) : (max((arr_46 [13]), -2639193607254976602))))));
        var_23 *= (arr_46 [i_13]);
    }
    for (int i_14 = 0; i_14 < 16;i_14 += 1)
    {
        arr_50 [i_14] [i_14] = 44447;
        arr_51 [i_14] = ((-115 ? 254 : 127));
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 16;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 16;i_16 += 1)
            {
                {
                    var_24 = (max(-15887, -2639193607254976594));
                    arr_57 [i_15] [13] = (arr_15 [i_14] [i_15]);
                }
            }
        }
    }
    #pragma endscop
}
