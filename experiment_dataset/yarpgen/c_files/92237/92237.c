/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_14 = min(((((((arr_4 [i_0] [i_1] [i_2]) ? (arr_11 [i_0] [i_1 - 1] [i_1 - 1] [i_3] [i_2] [5]) : (arr_0 [i_1 - 1] [i_0])))) ? (arr_3 [2] [i_1 + 1] [1]) : (((!(arr_0 [i_1] [i_2])))))), (((!(arr_11 [i_3] [i_3] [i_3 - 4] [i_3] [i_3 - 2] [i_3 + 1])))));
                            var_15 -= ((((((!(arr_2 [i_1 + 1] [i_1]))))) * (((arr_11 [i_1] [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 - 1]) ? (arr_2 [i_3 - 2] [i_2]) : var_7))));
                            arr_12 [i_0] [i_1] [i_3] = (min(((var_4 / (arr_5 [i_0] [i_1 - 1] [i_1] [i_0]))), (min((arr_5 [i_1] [i_1 + 1] [i_0] [i_0]), var_9))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_16 = (var_12 ? (arr_4 [i_0] [i_1 - 1] [i_1 - 1]) : (arr_4 [i_0] [1] [i_5]));
                            var_17 = (arr_2 [5] [i_1 + 1]);
                            var_18 -= ((!((max(1236019156, 1822082873)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 9;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 11;i_7 += 1)
                    {
                        {
                            arr_22 [i_1] = (arr_0 [i_0] [i_0]);
                            arr_23 [i_0] [i_1] [i_6] = (max(((((arr_21 [i_0] [i_6 + 2] [i_6 + 2] [i_6 + 2] [1]) ? var_1 : (arr_10 [i_0] [i_0] [i_0] [i_0])))), (((var_5 <= (min((arr_11 [i_0] [0] [i_1 - 1] [i_6] [i_7 + 1] [i_6]), (arr_21 [i_0] [i_6] [i_0] [i_6] [i_6 + 2]))))))));
                            arr_24 [i_1] [i_7] [i_6] [i_1] [6] [i_1] = ((-(((arr_10 [i_6 - 3] [i_6 - 3] [i_1] [i_1]) ? (arr_10 [i_6] [i_6 + 1] [4] [i_0]) : (arr_10 [i_7] [i_6 + 1] [i_1] [i_1])))));
                            var_19 = (min(var_19, ((min((arr_4 [i_7] [i_6 - 2] [i_1]), (((arr_21 [i_0] [i_0] [i_6 - 1] [i_7 + 1] [i_7]) ? (arr_8 [i_6 - 1] [1] [i_6]) : (arr_8 [i_0] [i_1] [i_6]))))))));
                        }
                    }
                }
                arr_25 [i_1] [1] [i_1] = ((~(((arr_4 [i_1 - 1] [i_1 - 1] [1]) ? (arr_4 [i_1 + 1] [i_1 - 1] [i_1 + 1]) : (arr_4 [i_1 + 1] [i_1 + 1] [i_1 - 1])))));
            }
        }
    }
    var_20 = (var_7 ^ var_7);
    var_21 = var_3;
    #pragma endscop
}
