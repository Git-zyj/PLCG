/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_8 [16] [i_1] [i_0] [4] = ((47017 ? ((max(53566, (arr_6 [i_0] [i_0])))) : (max((arr_5 [i_1 + 2] [i_1 + 2] [i_1 - 1]), (arr_5 [i_1 - 1] [i_1 - 1] [i_1 + 1])))));
                    var_10 = var_0;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_11 = (((!var_5) >> var_5));
                        var_12 = (((arr_10 [i_1 + 1] [i_1] [i_1] [i_0]) && (-59 | 3704398133)));
                    }
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 15;i_4 += 1)
                    {
                        arr_14 [i_4 + 1] [i_0] [i_0] [i_0] = (((arr_1 [i_1 - 1]) ? 3728546497212645105 : (arr_1 [i_0])));

                        for (int i_5 = 1; i_5 < 14;i_5 += 1)
                        {
                            arr_18 [i_0] [i_5] [i_0] [i_0] [i_0] [i_5] = (((arr_17 [i_0] [i_5]) >> (var_4 - 14665747748447503349)));
                            var_13 = ((-(arr_10 [i_5 + 1] [i_5 + 2] [i_5 - 1] [1])));
                            var_14 = (((!13856) ? (arr_1 [i_0]) : (arr_13 [i_0] [i_0])));
                        }
                        for (int i_6 = 4; i_6 < 14;i_6 += 1)
                        {
                            var_15 = ((((!(arr_13 [i_0] [i_0])))));
                            var_16 = (max(var_16, 45));
                        }
                        for (int i_7 = 3; i_7 < 16;i_7 += 1)
                        {
                            var_17 = ((-(arr_7 [6] [6] [6] [6])));
                            var_18 = 224;
                            var_19 = (min(var_19, -63));
                            arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_13 [i_1 - 2] [i_0]);
                            var_20 = (((var_3 >> (-9125405408565308837 + 9125405408565308861))));
                        }
                        var_21 = (min(var_21, var_8));
                    }
                }
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    var_22 = ((((max((var_4 & var_6), (arr_0 [i_1])))) ? var_8 : 0));
                    arr_31 [i_8] [i_1] = ((~(arr_10 [i_0] [i_1 - 2] [i_8] [i_0])));
                    arr_32 [i_0] [i_0] [i_1 - 1] [i_8] = -var_9;
                }
                arr_33 [i_0] [i_0] = (!var_9);
                var_23 = (max(22, 53569));
                var_24 = ((228 >> ((-(~0)))));
            }
        }
    }
    var_25 = (min(var_25, (var_5 * var_5)));
    #pragma endscop
}
