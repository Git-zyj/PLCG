/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 29394;
    var_17 = 766621380;
    var_18 = (min(var_18, ((min(98304, (((12747 << (-var_9 - 867798559)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_19 = (max(var_19, ((min((arr_4 [i_0] [i_0]), (arr_2 [i_0]))))));
                var_20 = -707827765;

                /* vectorizable */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    var_21 = (max(var_21, ((((arr_0 [i_0]) ? 2022654696 : 11449)))));
                    arr_7 [i_0] [i_1] = -4096;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] [i_1] [2] [i_3] [i_0] [2] = ((arr_1 [i_0] [i_1]) != ((1 ? 33 : 37284)));
                                arr_15 [i_0] [i_1] [i_1] [i_3] = (((~-766621351) >> ((1852963072 ? 7 : (arr_5 [i_0] [i_1] [i_4])))));
                            }
                        }
                    }
                    arr_16 [16] &= ((((-1852963072 ? 120 : 722853782)) & var_14));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                arr_23 [i_1] = (arr_5 [i_1 + 1] [i_1] [i_1]);
                                arr_24 [i_0] [i_1] [10] [i_1] [i_6] = 1;
                                arr_25 [i_0] [i_0] [i_1] [13] [i_0] [i_6] = (((var_14 ? 7035040773637379134 : var_9)));
                                var_22 = (var_6 - 2022654699);
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    var_23 = (max(var_23, ((max(((31 ? 197 : -98571711)), (arr_17 [i_0] [i_1 - 1] [i_7] [i_7]))))));
                    var_24 = 61;
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    arr_30 [i_0] [i_1] [1] [i_1] = (((((arr_4 [i_0] [i_1]) ? (arr_0 [i_8]) : 31)) > var_11));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            {
                                arr_36 [1] [1] [i_1] [i_9] [i_10] = -var_5;
                                var_25 = (max(var_25, -1663850264));
                                var_26 -= -262143;
                            }
                        }
                    }
                    var_27 = (max(var_27, var_1));
                    arr_37 [i_0] [i_1] [i_0] [i_1] = (30 + (arr_12 [i_1] [i_1 + 2] [13] [i_0] [i_1 + 2] [i_1 - 1]));
                }
                var_28 = ((((((~52) ? (arr_1 [i_1 - 1] [i_0]) : (arr_28 [i_0] [i_1] [i_1])))) ? (arr_22 [i_1]) : (-62 + -19830)));
                arr_38 [i_0] [i_1] [11] = (-63 ? (((arr_1 [i_1 + 1] [i_1 + 2]) / 28)) : (arr_1 [i_1 - 1] [i_1 + 1]));
            }
        }
    }
    #pragma endscop
}
