/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (((((((~var_5) | var_11))) ? ((var_3 & (var_10 / var_4))) : var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_13 = ((var_7 ? 2634800178 : (arr_1 [i_0] [i_0])));
                var_14 = max((((arr_2 [i_0]) ? -4267 : var_10)), ((((-(arr_1 [i_0] [i_0]))))));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    arr_9 [i_0] [i_0] [i_0] [i_2 + 2] = ((arr_7 [i_0] [i_1 - 1] [i_2 + 2] [i_2 - 1]) + (((arr_7 [i_0] [i_0] [i_0] [i_0]) ? (arr_6 [i_1]) : var_5)));

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        arr_12 [10] [i_0] [i_3] [i_3] [i_1] = (arr_6 [i_0]);
                        var_15 = ((var_11 < (arr_2 [i_0])));
                        arr_13 [i_3] [i_0] [i_0] [i_0] = var_2;
                        var_16 = var_8;
                    }
                    for (int i_4 = 1; i_4 < 24;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            var_17 = ((-(arr_14 [i_0])));
                            arr_20 [6] [i_0] [i_0] [i_2] [4] [i_4 + 1] [i_5] = ((~(arr_17 [i_5] [i_4 - 1] [i_2] [i_1] [i_0])));
                            var_18 &= (((~(arr_18 [i_0] [i_1] [i_2] [1] [i_1]))));
                        }
                        arr_21 [0] [i_0] [i_1] [1] [0] [i_1 - 1] = (arr_7 [i_1] [21] [i_2] [i_1 - 2]);
                        arr_22 [i_0] [i_0] [i_2 - 1] [i_4 - 1] [i_0] = var_0;
                        var_19 *= -20876;
                    }
                    var_20 = ((-722546145 ? ((var_7 ? var_5 : var_9)) : (arr_1 [i_0] [i_1])));
                    var_21 = ((~((((arr_19 [i_2] [i_2] [i_1] [i_1] [i_0]) <= (arr_7 [5] [i_1] [5] [1]))))));
                    var_22 = (arr_4 [1] [i_1 + 3] [i_1 - 1]);
                }
            }
        }
    }
    #pragma endscop
}
