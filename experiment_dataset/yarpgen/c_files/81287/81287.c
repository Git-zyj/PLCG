/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 158;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_14 = ((-((+((((arr_1 [11] [i_0]) || var_9)))))));
        var_15 = var_11;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = var_8;

        /* vectorizable */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_16 = (arr_4 [i_1] [i_2]);
            arr_9 [i_1] [i_2] = (var_4 ? (arr_5 [i_1]) : var_12);
            var_17 = ((var_6 || ((((arr_3 [i_2]) | (arr_3 [i_2]))))));
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 21;i_5 += 1)
                {
                    {
                        arr_18 [i_1] [i_4] [i_4] [i_4] = ((+(((var_8 || 136) / (1 != 129)))));

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_18 ^= (max((arr_1 [i_4] [i_4]), (((arr_1 [i_1] [i_3]) ? (arr_1 [i_6] [i_4]) : (arr_1 [i_4] [i_5 - 3])))));
                            arr_21 [i_4] [i_4] [i_4] = ((!(((arr_13 [i_4] [i_3]) != (arr_13 [i_4] [i_1])))));
                            var_19 = (max(var_19, (((((((arr_19 [11] [11] [19] [9] [i_4]) ? (arr_19 [16] [i_4] [i_6] [1] [i_6]) : (arr_19 [12] [12] [i_4] [i_5] [i_6])))) ? var_11 : ((((var_5 ? -8478672319512234670 : var_10)) & (!var_0))))))));
                        }
                        for (int i_7 = 1; i_7 < 21;i_7 += 1)
                        {
                            arr_25 [i_4] [20] [i_4] [i_3] [i_4] = ((((var_6 ? (arr_15 [i_5 - 3] [i_7 + 1] [i_5 - 1] [i_5] [i_7 + 1] [i_5 - 1]) : var_12)) >= var_3));
                            var_20 = (((((arr_14 [i_4] [i_5 - 1] [i_5] [i_5] [i_7 + 1] [i_7 - 1]) != (arr_22 [i_3] [i_5 + 1] [i_3] [17] [i_7 + 1]))) ? (((+((var_8 ? (arr_17 [i_1]) : var_0))))) : (((((((arr_20 [i_4]) <= (arr_16 [i_1] [i_3] [i_4] [i_7]))))) / (((arr_19 [12] [i_3] [i_4] [i_5] [i_7]) ? var_8 : (arr_10 [1])))))));
                        }
                        arr_26 [i_4] [i_3] [i_4] [7] [i_4] [i_3] = arr_15 [i_1] [i_3] [i_4] [i_5] [i_5] [i_1];
                        var_21 = ((-(((arr_19 [1] [i_3] [i_5 + 1] [i_5 + 1] [i_1]) * (arr_22 [i_1] [i_3] [i_5 + 1] [i_5] [i_5 + 1])))));
                    }
                }
            }
            var_22 = ((148 ? (arr_20 [8]) : ((-9088790910351413160 ? 120 : 148))));
            arr_27 [1] = ((((max((arr_1 [i_1] [i_1]), var_10))) ? ((((((arr_14 [i_1] [1] [i_1] [i_1] [i_1] [5]) ? (arr_3 [i_1]) : (arr_23 [i_3] [i_3] [i_1] [i_1] [i_1] [i_1]))) <= var_3))) : var_0));
        }
        for (int i_8 = 2; i_8 < 20;i_8 += 1)
        {
            var_23 += (((((151 - (arr_17 [i_1])))) ? var_9 : (arr_19 [i_1] [i_1] [i_1] [i_1] [11])));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    {
                        arr_38 [i_1] [i_9] [1] = (((arr_5 [i_1]) ? (((arr_35 [i_1] [i_1] [i_1]) ? (min(1, 346183790186114636)) : (136 / 52))) : var_6));
                        var_24 = (arr_32 [i_1] [10] [i_9] [i_10]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
