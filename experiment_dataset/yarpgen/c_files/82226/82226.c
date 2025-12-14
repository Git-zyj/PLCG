/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_17 = var_1;
                                var_18 = (max(var_18, (((!(arr_8 [i_1] [i_2] [5] [5] [5]))))));
                            }
                        }
                    }
                    arr_14 [i_0 - 3] [i_1] [i_1] [i_2] = (((arr_2 [i_0 - 3] [1] [i_1]) + (arr_2 [i_0 - 3] [i_0] [i_1])));
                    var_19 = (max((((((arr_12 [i_0] [i_0] [i_0] [i_1] [i_1] [i_2] [i_2]) ? var_5 : 1)))), (arr_13 [i_1] [i_1] [i_0 - 1] [i_1] [i_1])));

                    for (int i_5 = 3; i_5 < 10;i_5 += 1)
                    {
                        var_20 -= (((arr_7 [1] [i_0 - 3] [1]) - (((arr_7 [i_1 + 1] [i_1 + 1] [1]) ? (arr_7 [2] [i_1 - 1] [0]) : (arr_7 [i_5] [i_1] [8])))));
                        var_21 = ((var_4 >> (!1)));
                        arr_18 [i_5 + 1] [i_5] [i_5 + 1] [i_1] [i_5] = ((+((((arr_12 [i_0 - 3] [i_1 - 1] [12] [i_1] [i_0] [i_1 - 1] [i_5 - 1]) && (arr_12 [i_0 - 3] [i_0 - 3] [5] [i_1] [i_0] [i_1 + 1] [i_5 + 2]))))));
                        var_22 &= (min((((arr_4 [i_1 + 1] [6]) ? var_0 : (arr_15 [i_0 + 1] [i_0 - 3] [2] [i_0]))), var_11));
                    }
                }
            }
        }
    }
    var_23 = var_5;
    var_24 = var_5;
    var_25 += ((min(var_9, var_16)) ? (!1) : (var_15 | 1));
    #pragma endscop
}
