/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        var_15 = ((!(((~(arr_12 [i_0] [i_1] [i_2] [i_3]))))));

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            var_16 = (max(var_16, ((((((arr_8 [i_0] [i_3] [i_2]) && var_1)) ? ((((!(arr_8 [i_0] [i_0] [i_0]))))) : (arr_8 [i_0] [i_0] [5]))))));
                            var_17 *= ((min((arr_0 [i_0] [i_0]), (arr_14 [i_0] [i_0] [4] [4] [i_1]))));
                            var_18 = ((((min(var_2, (arr_7 [i_3 - 2] [i_3] [i_3] [i_3])))) ? (arr_13 [i_3 - 2] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3 + 1]) : (min(var_10, (arr_7 [i_3 - 2] [5] [3] [i_3])))));
                        }
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_19 = (max(4294967295, (((arr_12 [i_3] [i_3 - 1] [i_3] [i_3]) ? (arr_12 [i_3] [i_3 - 1] [9] [i_3]) : (arr_12 [i_3] [i_3 - 1] [3] [i_3])))));
                            var_20 = (max(var_20, (arr_3 [i_5])));
                            var_21 &= (((arr_2 [i_3 - 1]) ? 0 : (!-18305)));
                            var_22 = ((2951231520 ? (((((-1559999147 ? var_6 : (arr_5 [i_0] [i_0] [i_0]))) >= 2094195747))) : (min(var_10, ((~(arr_10 [i_3])))))));
                        }
                        arr_17 [i_3] = ((((-(arr_9 [i_0]))) != (arr_1 [8])));
                        arr_18 [i_3] [i_3] [i_3] [i_0] = ((!((((((arr_13 [1] [i_3] [i_2] [8] [9] [i_3] [1]) <= 32767))) > ((var_9 ? var_3 : (arr_8 [i_0] [8] [i_3])))))));
                        var_23 = (min(var_23, (var_14 < -32767)));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_22 [i_0] [4] [i_0] = ((((min(var_0, ((min((arr_1 [i_0]), (arr_10 [2]))))))) ? (arr_1 [i_0]) : (((((((arr_2 [i_0]) > (arr_3 [i_0])))) >= (arr_4 [8] [8] [i_2]))))));
                        var_24 = (max(var_24, ((((min(10397927563316354477, 255)) * 0)))));
                    }
                    for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                    {
                        arr_26 [i_0] [i_1] [i_2] [9] &= (arr_10 [i_7]);
                        arr_27 [3] [3] [i_2] [i_2] = min((((arr_9 [i_1]) ? var_0 : (max((arr_20 [i_0]), var_8)))), (((arr_19 [i_0] [i_1] [i_0] [9]) - (arr_25 [i_0]))));
                        var_25 += -5288164456303857936;
                    }
                    for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
                    {
                        var_26 = (max(var_26, ((((arr_2 [i_0]) ? (((!(arr_12 [i_0] [0] [i_2] [i_8])))) : (((!(arr_2 [i_1])))))))));
                        arr_30 [i_0] [3] [i_0] [3] = ((((~var_2) ? (((arr_5 [0] [0] [0]) / 144115188075855616)) : (((var_11 ? 32767 : (arr_24 [7] [7] [7] [i_8] [7])))))));
                        var_27 ^= (min(5, (!var_3)));
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            {
                                arr_37 [i_0] [i_0] [7] [i_0] [i_0] = (arr_31 [i_0] [9] [i_2] [i_10]);
                                var_28 = (-0 % var_6);
                                arr_38 [9] [i_1] [9] [i_9] [9] = (arr_24 [i_0] [3] [i_0] [9] [6]);
                            }
                        }
                    }
                    var_29 = var_14;
                    var_30 = (arr_2 [i_0]);
                }
            }
        }
    }
    var_31 = (min(var_31, (((0 ? var_0 : (((min(11, var_12)))))))));
    #pragma endscop
}
