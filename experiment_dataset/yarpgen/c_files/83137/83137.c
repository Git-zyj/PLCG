/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= ((var_4 ? var_12 : var_8));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_15, (arr_4 [i_3] [i_0])));
                                var_16 = (((arr_3 [i_1 - 1] [i_1 - 1]) || ((((arr_1 [3]) | (arr_9 [i_2] [i_3] [i_2] [i_1]))))));
                                var_17 = (max((((((arr_1 [i_1 - 1]) ? (arr_7 [10] [i_0] [i_0]) : (arr_0 [i_1]))) / (max((arr_10 [19] [i_0] [i_2] [4] [17]), (arr_1 [i_0]))))), ((max((arr_2 [i_1 + 1]), (arr_2 [i_1 - 1]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                arr_16 [i_0] [16] [i_2] [i_5] [i_6] [i_2] [i_2] = (((((((arr_6 [i_6] [i_5] [i_2] [i_1]) ? (arr_6 [1] [1] [1] [i_5]) : (arr_13 [i_6] [i_5] [i_2] [i_0]))) - (arr_11 [i_1 + 1] [i_0] [4] [4]))) & ((((((arr_7 [i_0] [i_0] [i_0]) || (arr_0 [i_0]))) ? (arr_11 [i_5] [i_1 + 1] [i_1 + 1] [i_5]) : ((((!(arr_3 [i_5 + 3] [i_5 + 3]))))))))));
                                var_18 = (min((((arr_4 [i_0] [i_2]) ? (arr_12 [i_0] [i_5] [i_0] [i_0]) : (max((arr_13 [5] [18] [i_2] [i_5]), (arr_8 [i_0]))))), ((-(((arr_3 [i_0] [i_1]) * (arr_7 [i_0] [23] [i_0])))))));
                                var_19 |= ((((max(((max((arr_11 [i_0] [i_1] [i_2] [11]), (arr_0 [i_2])))), (arr_7 [i_2] [i_2] [i_2])))) ? ((((((arr_10 [i_6] [i_2] [i_2] [i_2] [i_0]) ? (arr_2 [i_2]) : (arr_6 [i_1] [i_1 - 1] [23] [i_5])))) ? (arr_2 [i_5]) : (arr_14 [i_6] [i_6] [i_2] [i_1] [i_6] [i_0]))) : (arr_14 [i_6] [i_2] [i_5] [i_2] [i_2] [i_0])));
                                arr_17 [i_0] [i_5] [0] [i_1] [i_0] = (((max((min((arr_4 [i_6] [i_2]), (arr_1 [i_5]))), ((max((arr_6 [i_6] [i_5] [5] [i_0]), (arr_10 [i_6] [i_0] [i_2] [i_0] [11]))))))) ? (((arr_5 [i_5 - 2] [i_0]) ? (((min((arr_10 [15] [i_0] [i_2] [i_0] [i_0]), (arr_5 [i_0] [i_0]))))) : (((arr_0 [i_1]) ? (arr_3 [i_6] [i_1 - 1]) : (arr_5 [i_0] [i_0]))))) : ((((!(arr_4 [22] [i_2]))))));
                            }
                        }
                    }
                    arr_18 [i_0] = ((-(max((((!(arr_15 [i_0] [i_2] [i_1] [i_1] [i_0])))), (((arr_13 [i_2] [i_2] [i_1 - 1] [i_0]) ? (arr_6 [i_2] [i_2] [i_1] [i_0]) : (arr_4 [i_2] [i_1])))))));
                }
            }
        }
        arr_19 [i_0] = (((max((min((arr_3 [i_0] [i_0]), (arr_2 [i_0]))), ((((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) || (arr_11 [i_0] [i_0] [i_0] [i_0])))))) != (((((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]) * (arr_6 [16] [i_0] [i_0] [3])))))));
    }
    #pragma endscop
}
