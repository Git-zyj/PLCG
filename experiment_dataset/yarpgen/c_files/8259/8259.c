/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_1] [9] [i_0 - 1] = ((-((((arr_3 [i_0 + 1]) <= var_2)))));
                arr_6 [i_1] [i_1] = (((max((~var_13), var_6)) ^ (arr_1 [i_0 + 1])));
                var_19 = (max(var_19, ((min(48, 211)))));

                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    var_20 = arr_3 [i_2 + 1];
                    arr_9 [i_1] [i_0 - 1] [i_1] [i_0] = var_13;
                    var_21 = max((min(var_3, var_9)), (((arr_7 [i_2 + 1] [i_2 + 1] [i_1 - 3]) | (arr_7 [i_1 - 2] [i_2 + 1] [i_1 - 2]))));
                    arr_10 [i_1] [i_1] [i_1] [i_1] = -1414502801;
                    var_22 = ((+(min(var_9, ((var_14 ? (arr_8 [i_1] [i_1] [i_1 - 3] [7]) : var_7))))));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {

                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        var_23 = ((((-(((arr_17 [i_0] [i_0] [2] [i_0]) - var_5)))) == ((-(arr_0 [i_0] [i_0 - 1])))));
                        arr_18 [i_0] [i_1] [7] [i_1] = (arr_4 [i_1]);
                        var_24 = var_15;
                        arr_19 [i_0] [10] [i_1] [i_0] [1] [5] = ((((arr_13 [12] [i_4 - 1] [i_4 - 1] [i_4 - 1]) != ((1414502800 ? 23 : 29)))));
                    }
                    var_25 = (min(1414502800, (arr_1 [i_0 + 1])));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_26 = (arr_14 [1] [i_1] [i_6]);
                                var_27 = (min(1, -29975));
                            }
                        }
                    }
                }
                var_28 |= -26;
            }
        }
    }
    var_29 = var_9;
    #pragma endscop
}
