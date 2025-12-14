/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, ((min(var_10, var_7)))));

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 &= (arr_2 [i_0]);
                    var_19 = (max(var_19, (arr_0 [i_0 + 2] [i_0 + 2])));
                    arr_7 [i_0] [i_0] [i_0] [12] &= ((((((arr_4 [i_0] [i_0]) ? (arr_5 [0]) : (((arr_5 [i_1]) ? (arr_6 [i_1] [i_1] [i_2] [i_2]) : 6))))) ? ((-(((arr_1 [i_0]) ? (arr_0 [i_0] [i_1]) : (arr_5 [0]))))) : ((9 ? (arr_6 [i_1] [i_1] [10] [i_1]) : (arr_4 [i_1] [i_1])))));
                    var_20 += (arr_4 [11] [11]);
                    var_21 = (min(var_21, (arr_3 [i_0])));
                }
            }
        }
        var_22 = (max(var_22, (((max((arr_2 [i_0]), 6))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    var_23 = (min(var_23, (arr_9 [i_4] [i_4] [i_0])));

                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        var_24 &= arr_0 [i_0] [i_3];
                        var_25 = (max(var_25, (((~(arr_6 [i_0 + 2] [i_3] [15] [i_0]))))));
                        var_26 = (((((~((-(arr_11 [i_0] [i_0] [i_4])))))) ? 1390610158 : (arr_2 [i_3])));
                        var_27 &= max((((((-(arr_0 [i_0] [i_3])))) ? ((((!(arr_4 [i_3] [i_3]))))) : (((arr_8 [i_4] [i_5]) ? (arr_5 [5]) : (arr_12 [i_0] [17] [i_4] [i_5 + 1]))))), (((((((arr_8 [i_4] [i_4]) ? (arr_13 [i_0 + 1] [i_4] [i_4] [i_5] [i_5] [i_0]) : 120))) ? (min((arr_6 [i_0 + 4] [i_0] [i_4] [i_5]), (arr_12 [10] [i_3] [i_3] [i_5]))) : (arr_5 [i_5])))));
                    }
                    var_28 |= (min(((min((arr_12 [21] [i_3] [4] [21]), 61102))), (arr_5 [i_0])));
                    var_29 *= 120;
                }
            }
        }
        arr_14 [i_0] [i_0] &= (arr_3 [i_0]);
        arr_15 [5] [i_0] |= (arr_6 [i_0] [i_0 - 1] [i_0] [i_0]);
    }
    var_30 |= ((((0 ? var_11 : var_6))));
    #pragma endscop
}
