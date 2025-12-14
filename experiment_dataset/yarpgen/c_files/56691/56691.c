/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_1] = var_12;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_19 = 4363686772736;
                                arr_13 [i_1] [10] [i_3] [i_2] = (min(((1 ? var_2 : (arr_7 [i_2] [15] [1] [i_3 - 1]))), var_9));
                                arr_14 [i_2] = ((var_8 ? (((arr_3 [i_2] [i_3] [i_4 + 1]) ? var_6 : (arr_0 [i_2 - 1] [i_4]))) : (min(-27, var_10))));
                                var_20 += ((var_11 ? (!61) : var_15));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_20 [i_2] = var_7;
                                arr_21 [11] [i_2] [8] [8] [i_2] [i_0] = (arr_17 [i_2 - 1] [i_2 - 1] [i_2 - 1]);
                                arr_22 [i_2] [i_5] [13] [i_1] [i_2] = (min(-127, 1));
                                var_21 = -21316;
                            }
                        }
                    }
                }
            }
        }
        var_22 -= ((!((max(1, var_11)))));
        var_23 -= min(var_3, var_12);
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 9;i_7 += 1)
    {
        var_24 = ((var_7 ? (arr_8 [i_7 + 2] [i_7] [16] [5]) : (arr_8 [i_7 - 1] [i_7] [i_7] [i_7])));
        var_25 = ((((var_8 ? (arr_8 [i_7] [7] [i_7] [i_7]) : var_2)) << (52 - 31)));
        arr_26 [i_7] [8] |= (!-27);
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 10;i_10 += 1)
                {
                    {
                        arr_36 [7] [i_9] [i_10] = 32765;
                        arr_37 [i_7 - 1] [5] [8] [i_10] = (!var_16);
                        var_26 = var_5;
                        arr_38 [i_10] [10] [i_7] = var_5;
                        var_27 = (max(var_27, (((76 ? 54 : 196112153)))));
                    }
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 11;i_11 += 1)
    {
        arr_42 [9] = var_16;
        var_28 *= (!25);
        var_29 = (max(var_29, (((((min((arr_30 [i_11] [i_11] [i_11]), (arr_30 [i_11] [6] [0])))) && (arr_27 [i_11] [i_11]))))));
    }
    var_30 = var_10;
    var_31 = var_16;
    #pragma endscop
}
