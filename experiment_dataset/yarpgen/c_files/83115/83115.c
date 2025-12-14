/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_11 [i_3] [i_1] [i_2] [i_3] = (((-(arr_3 [i_0] [i_0]))));

                        for (int i_4 = 4; i_4 < 16;i_4 += 1)
                        {
                            var_10 = (((((((max((arr_10 [i_0 - 1] [0] [i_3] [i_0 + 1] [1]), var_7))) ? var_9 : (arr_9 [15] [10] [i_4] [i_4 - 4] [i_0] [11])))) ? (((61536 == var_5) ? 36 : (((arr_8 [i_0] [i_0] [i_3] [i_0]) ? (arr_4 [i_1]) : var_2)))) : (arr_0 [i_0])));
                            arr_14 [i_3] [i_3] [i_1] [i_2] [i_1] [i_3] = (min((arr_2 [i_1 + 3]), ((((min(var_2, 16012951346519492339))) ? (((~(arr_9 [i_0 - 2] [i_0 - 2] [i_2] [i_2] [i_0 - 2] [i_2])))) : (min(var_1, var_8))))));
                            var_11 = (arr_5 [i_1] [i_1] [i_1] [i_1 - 1]);
                        }
                        var_12 = (max(var_12, (((max((arr_6 [i_2 - 4]), (arr_0 [i_2 - 1])))))));
                        arr_15 [i_0] [i_3] [i_2] [i_3] = var_3;
                        arr_16 [i_0] [i_0] [i_3] [2] = (((min(var_9, (arr_8 [i_3] [i_3] [i_3] [i_0 - 4]))) > var_6));
                    }
                    /* vectorizable */
                    for (int i_5 = 3; i_5 < 18;i_5 += 1) /* same iter space */
                    {
                        var_13 = (min(var_13, (arr_13 [i_5 - 1] [i_0 - 3] [i_2 - 2] [i_5] [i_0 - 3])));
                        arr_19 [i_5] [i_5] [i_2] [i_5] = 15;
                    }
                    for (int i_6 = 3; i_6 < 18;i_6 += 1) /* same iter space */
                    {
                        arr_24 [i_6] [i_6] [i_6] [i_0 - 1] = (min((arr_23 [i_6 - 1] [i_1] [i_1] [i_0 - 3]), (max(8846576326296834666, ((((arr_17 [i_0 - 1] [i_0 - 1] [i_2] [i_6 + 1]) ? var_3 : var_1)))))));
                        arr_25 [i_6] = (min((arr_4 [i_6 - 2]), var_3));
                        arr_26 [10] [i_1] [i_6] = (min(((-(((arr_5 [i_0] [i_1] [i_2] [i_2]) ? var_2 : (arr_23 [i_0] [3] [i_2] [15]))))), (max((arr_17 [i_2 - 1] [i_2] [i_2] [i_2]), -var_9))));
                        arr_27 [3] [i_1] [i_1] [i_6] [i_0] [i_6] = (((arr_18 [i_6 - 3] [i_6] [i_1 + 1]) ? (((min(var_5, (arr_18 [i_6 - 1] [i_6] [i_1 + 2]))))) : (((arr_18 [i_6 - 2] [i_6] [i_1 - 1]) ? var_1 : (arr_18 [i_6 - 2] [i_6] [i_1 + 2])))));
                    }
                    arr_28 [i_2] = ((-(((arr_9 [i_0] [i_1 + 4] [i_2 - 1] [i_2] [i_0] [i_2]) ? (arr_9 [i_2] [i_2] [i_1] [i_1 - 1] [i_0] [i_0]) : (arr_9 [i_0 + 1] [i_0 - 4] [i_0 - 4] [i_0] [17] [i_0])))));
                }
            }
        }
    }
    var_14 = 8846576326296834683;
    #pragma endscop
}
