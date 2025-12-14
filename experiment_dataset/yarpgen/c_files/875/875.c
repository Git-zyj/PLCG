/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((-var_1 || (((var_4 ? var_3 : var_9))))) || var_11));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, (((var_2 >> (39253 - 39227))))));
                    arr_9 [11] [i_2] = ((((((arr_6 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1]) ? -96 : (arr_6 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 + 1])))) || (var_12 || var_2)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_17 [i_4] |= var_3;
                                arr_18 [i_3] = (((((26288 ? (arr_14 [i_0] [i_1] [i_2 - 2] [i_1 + 2] [i_4]) : var_10))) && ((var_5 || (arr_2 [1] [i_1] [i_2 - 1])))));
                                var_16 |= ((-96 ? 30078 : 15360));
                                arr_19 [i_0] [i_3] [i_2] [i_1 + 1] [i_0] = (((((arr_8 [11] [11] [i_1 + 1] [i_2 + 1]) ? var_13 : (arr_8 [11] [i_2] [i_1 + 1] [i_2 + 1])))) ? (max(var_10, var_7)) : 25);
                            }
                        }
                    }
                }
            }
        }
        var_17 ^= (min((((var_7 || (arr_7 [i_0] [i_0] [i_0] [i_0])))), var_8));
        arr_20 [7] [7] = var_11;
        arr_21 [i_0] = ((((var_10 + 9223372036854775807) >> (((arr_16 [i_0] [i_0] [i_0] [8] [i_0] [i_0]) - 26888)))));
    }

    for (int i_5 = 4; i_5 < 21;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 4; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                {
                    var_18 = (arr_28 [i_5] [i_6 + 1] [i_7]);
                    var_19 = (arr_24 [i_6 - 2]);
                    arr_29 [i_5] = (var_7 * var_5);
                    arr_30 [19] [i_5 - 3] [i_6 - 3] [19] = ((max(var_5, (arr_23 [i_6 - 1] [i_5 - 2]))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 20;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_10 = 1; i_10 < 19;i_10 += 1)
                    {
                        var_20 = (!var_3);
                        var_21 = ((-(arr_34 [i_5 - 4])));
                    }
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        arr_45 [i_5] [i_5] [i_5] [i_5] = (min((arr_27 [i_8 + 2] [i_8 + 2]), 9223372036854775807));
                        var_22 = 95;
                    }
                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        var_23 = var_7;
                        arr_48 [i_5] [i_5] [i_5] = (arr_28 [i_12] [15] [15]);

                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            var_24 = (max(-2097152, ((var_3 ? (((arr_22 [i_5] [i_5]) ? var_4 : 39237)) : ((-96 ? var_6 : var_7))))));
                            var_25 = var_8;
                        }
                        arr_51 [i_8] [i_8] = var_7;
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 22;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 22;i_15 += 1)
                        {
                            {
                                var_26 = var_13;
                                arr_58 [i_5] [i_8 - 1] [i_9] [i_9] [i_15] = (((var_13 ? var_8 : (arr_33 [i_5 - 1] [i_8 - 1] [i_8 + 1]))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_16 = 0; i_16 < 14;i_16 += 1)
    {
        arr_61 [i_16] [i_16] = 9223372036854775807;

        for (int i_17 = 0; i_17 < 14;i_17 += 1)
        {
            arr_66 [i_17] = (arr_62 [i_16] [i_17]);
            var_27 = (max(var_13, (((!(arr_65 [i_16] [i_17]))))));
            var_28 = var_10;
        }
    }
    var_29 *= var_8;
    #pragma endscop
}
