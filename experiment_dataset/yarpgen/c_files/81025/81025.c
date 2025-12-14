/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (18446744073709551613 ^ 472387925);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 = (((arr_1 [i_0]) || ((((arr_4 [i_0]) + (arr_4 [i_0]))))));

                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        var_17 += var_2;

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_18 = (((((arr_5 [i_0] [i_2]) * (var_6 < var_0))) - ((-12871 ^ (arr_5 [i_0] [i_2])))));
                            var_19 += (min((-2147483647 - 1), var_9));
                            var_20 = (!115);
                        }
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            arr_14 [i_3] [i_3] [i_3] [i_0] [i_3] [i_0] = (min(-472387926, 8704));
                            var_21 = (((((arr_9 [i_0] [9] [i_2] [i_3 - 1]) / -472387926)) > ((1 >> (1882722459 - 1882722446)))));
                            arr_15 [i_0] [1] [i_0] = ((-((var_2 ? var_7 : var_2))));
                            arr_16 [i_0] [i_1] = var_2;
                        }
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            arr_19 [i_0] = ((((min(var_7, 255))) ? ((min((arr_0 [i_3 + 2]), var_7))) : (arr_0 [i_3 - 1])));
                            var_22 = (arr_9 [10] [i_3 + 2] [i_3] [i_3]);
                            arr_20 [i_0] [18] [8] [i_3] [i_0] = (9771359219885935870 + -1);
                        }
                        var_23 += ((+(((arr_13 [i_0] [i_3 + 1] [i_3 - 1] [i_3 + 2] [i_1]) % (-2147483647 - 1)))));
                        var_24 = (!((((arr_6 [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3 + 1]) | (arr_6 [i_3 + 1] [i_3 + 2] [i_3 + 1] [i_3 + 2])))));
                        arr_21 [i_0] = 1;
                    }
                    for (int i_7 = 4; i_7 < 21;i_7 += 1)
                    {
                        var_25 = (max(var_25, (((!((!((max(-826825365, 0))))))))));
                        var_26 = ((((1 ? -var_11 : (min((arr_1 [i_0]), (arr_1 [i_0])))))) ? (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((arr_8 [i_0] [i_1] [i_2] [i_2] [i_7]) ? (!var_14) : var_2)));
                    }
                    var_27 = (~var_7);
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            {
                                var_28 = var_7;
                                var_29 = ((~(min((var_11 / var_5), ((-2 ? (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_9] [i_1]) : var_7))))));
                                arr_32 [i_0] [1] [i_0] [i_0] [i_9] [i_0] = (((arr_6 [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_8 - 1]) * ((min(0, var_12)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_30 = ((!((((((0 ? var_11 : -3156))) ? (min(var_9, 255)) : ((var_4 ? var_13 : var_9)))))));
    #pragma endscop
}
