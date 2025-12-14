/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1 - 3] = (((15 ? (arr_0 [i_1]) : (arr_2 [i_0] [i_1]))));
                arr_7 [i_0] [i_0] [i_1] = ((!((((arr_4 [i_1 + 2] [i_1 - 3] [i_1]) ? ((var_5 ? (arr_5 [i_1] [7] [i_1 - 3]) : (arr_3 [i_0]))) : (arr_1 [i_1 - 1]))))));

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_10 [i_0] [i_0] = 91868352;
                    arr_11 [9] [i_1] [4] = var_1;
                    arr_12 [i_2] [4] [10] = (arr_2 [i_1] [i_0]);
                }
                for (int i_3 = 3; i_3 < 9;i_3 += 1)
                {
                    arr_16 [i_1] [i_1] [i_3] [i_3] = (arr_0 [i_3 - 2]);
                    arr_17 [3] [i_1] [i_1 + 1] [i_1] = ((-(min((arr_15 [i_3]), -91868352))));

                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        arr_22 [i_1 - 1] [i_1 - 1] [10] [9] = (((((((var_17 ? (arr_15 [8]) : (arr_2 [i_0] [i_4])))) ? 91868352 : -var_19)) / (((arr_20 [i_0] [i_1 - 1]) ? (((arr_15 [10]) - var_14)) : (max(var_7, (arr_14 [i_4] [i_4] [i_3 - 3] [9])))))));

                        for (int i_5 = 1; i_5 < 10;i_5 += 1)
                        {
                            arr_27 [i_4] [i_4] [i_4] [i_4] [2] = var_18;
                            arr_28 [i_0] [i_4] [i_3 + 2] [i_0] [3] = (min(((~(arr_18 [i_0] [i_1 + 2] [7] [i_5 - 1]))), (((((((arr_5 [i_0] [5] [i_0]) - (arr_4 [i_0] [i_1 + 2] [i_5 - 1])))) ? (min((arr_20 [i_3] [i_4]), 1263005019)) : ((max((arr_4 [i_0] [i_1 - 3] [i_5]), (arr_13 [2] [5] [3])))))))));
                        }
                        arr_29 [i_1] [i_3 + 2] [i_1] [6] [i_1] [2] = (((((~(arr_14 [i_1 - 2] [i_1 + 1] [i_3 - 1] [i_4])))) || ((min(((-1 ? (arr_5 [i_4] [i_4] [i_4]) : 33)), (arr_13 [i_0] [i_1] [i_3 + 2]))))));
                    }
                }
            }
        }
    }
    var_20 = ((!((min(var_10, var_13)))));
    #pragma endscop
}
