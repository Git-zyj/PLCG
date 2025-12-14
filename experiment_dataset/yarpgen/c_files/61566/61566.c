/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;
    var_17 = (max(var_17, ((((((((max(var_14, -18452))) ? var_0 : var_12))) ? (((var_15 >> (var_12 - 189)))) : var_11)))));
    var_18 = -var_13;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [1] [i_1] [i_3] [i_4] [7] = ((((((((-1 ? (-127 - 1) : 18451))) ? ((var_14 ? (arr_10 [1] [i_1] [i_2] [i_2] [i_1]) : var_8)) : (arr_4 [1] [4])))) ? ((max((arr_7 [i_0 - 1] [i_0] [i_0]), (arr_7 [i_4] [1] [i_2])))) : (max(((((arr_6 [i_0 - 2] [0] [i_3] [i_1]) ? (arr_7 [7] [5] [1]) : var_13))), (arr_5 [i_3] [1] [i_3 - 1] [2])))));
                                arr_13 [i_1] [i_1] [i_2] [i_2] [9] [i_4] = (max((((var_5 & (max((arr_6 [i_0] [i_1] [i_2] [i_1]), (arr_6 [i_0] [i_0] [i_0] [i_1])))))), (((arr_9 [i_3] [i_3] [i_3] [i_1]) ? (arr_9 [i_3] [4] [6] [i_1]) : (arr_9 [0] [i_3] [i_3 - 1] [i_1])))));
                            }
                        }
                    }
                    var_19 = ((((((var_0 ? (arr_6 [i_0 - 1] [0] [i_1] [i_1]) : var_5)) == (((~(arr_11 [i_0 - 2] [i_1] [i_2] [3])))))) ? (((~var_10) ? (~var_2) : (arr_6 [i_0 - 3] [i_0 + 1] [i_2] [i_1]))) : ((((arr_3 [i_0 - 3] [i_0 + 1]) ^ (arr_3 [i_0 - 2] [i_0 - 1]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_19 [i_1] = ((((arr_4 [i_5 + 1] [i_5 + 1]) ? (arr_4 [i_5 - 2] [10]) : var_3)));
                                arr_20 [i_0] [i_2] [i_0] [i_0] [i_0] &= 0;
                                var_20 = (min(((((~var_1) ? ((max((arr_4 [i_1] [0]), var_9))) : (((arr_7 [i_1] [i_2] [1]) ? 4194304 : var_14))))), (max(((-6423 ? 3432604301 : -1961892020)), ((max((arr_10 [i_0] [10] [i_0] [8] [i_1]), (arr_18 [3] [i_1] [i_2] [9] [10]))))))));
                                arr_21 [i_0] [3] [i_1] [i_5] [i_6] = min((max((arr_9 [i_1] [i_5 + 1] [0] [i_1]), (arr_9 [i_1] [i_5 + 1] [i_5] [i_1]))), (((arr_9 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_1]) ? (arr_9 [i_0] [i_5 + 1] [3] [i_1]) : (arr_9 [3] [i_5 + 1] [i_6] [i_1]))));
                                arr_22 [i_1] = ((!(((arr_14 [8] [8] [i_2] [1]) == var_7))));
                            }
                        }
                    }
                    arr_23 [i_2] [i_2] [i_1] [i_2] &= var_2;
                }
            }
        }
    }
    var_21 = ((3432604301 ? 3432604301 : 0));
    #pragma endscop
}
