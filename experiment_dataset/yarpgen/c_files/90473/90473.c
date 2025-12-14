/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1 + 1] [0] [i_2] = (!((((((-(arr_0 [i_0])))) ? (arr_3 [i_0]) : (((arr_5 [3] [i_1] [i_0]) ? var_5 : var_11))))));
                    arr_8 [i_2] [i_0] [i_0] [i_0] = (((arr_6 [i_1 - 1] [i_1 - 2] [i_1 + 1]) ? (((!(arr_6 [1] [i_1] [i_1])))) : (((!(arr_3 [1]))))));

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        arr_12 [i_3] [8] [i_0] [i_0] [i_0] [i_0] = ((((((var_13 | (arr_2 [i_0] [i_2])))) ? var_0 : (arr_1 [i_0] [i_1 + 2]))));
                        arr_13 [i_0] [i_0] [i_0] [0] = ((((((!(arr_5 [7] [i_1] [i_0]))))) - ((-(((arr_10 [i_3] [i_3] [i_3] [i_3] [i_0]) ? var_11 : var_5))))));
                        arr_14 [i_0] [i_1] [i_0] [i_2] [i_3] [i_3] = ((+(((arr_11 [i_1 + 1] [i_1 + 2] [i_1 + 1] [i_1 + 2]) / (arr_2 [i_1 - 2] [i_1 - 1])))));
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        var_17 = (((var_15 - var_10) ? var_6 : (min((arr_0 [i_2]), -11166))));
                        arr_17 [i_0] [i_4] = (((arr_15 [i_0] [i_1] [i_0] [i_1]) ? (arr_11 [i_1 - 2] [i_1 + 1] [i_1 + 1] [i_1 + 2]) : ((~(((var_8 + 2147483647) >> (var_15 - 3860596614278977709)))))));
                        arr_18 [i_1] [i_0] [i_1] [i_1 + 1] [i_1] = (((arr_16 [3] [i_1 + 2] [3] [i_4] [i_4] [i_0]) ? (arr_2 [i_1 + 1] [i_1]) : var_0));
                    }
                    arr_19 [i_0] [i_1] [i_0] [i_0] = (arr_1 [i_0] [i_2]);
                }
            }
        }
    }
    var_18 = (((max((((var_0 ? var_9 : var_14))), (min(-11166, var_2))))) && ((((0 * var_7) ? 0 : ((var_1 ? var_9 : var_7))))));
    #pragma endscop
}
