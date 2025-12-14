/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_11 = (max(var_11, ((min(((var_7 ? (arr_4 [i_0]) : (((arr_4 [i_0]) ? (arr_10 [i_0 + 3] [i_0] [i_0] [8]) : (arr_9 [11] [i_1] [i_1] [i_1]))))), var_7)))));
                                arr_13 [i_4] = ((((-(arr_8 [i_0 + 1])))) ? ((790446078879774463 ? (arr_8 [i_0 + 1]) : (arr_8 [i_0 + 1]))) : (!16647175994874825961));
                            }
                        }
                    }
                    arr_14 [i_0] [i_0 - 1] [i_0] = ((!(((562949953421311 ? 817338431 : -1)))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_0] [i_0] [i_0 - 2] [i_5] = var_0;
                                var_12 = (max(var_12, ((((~(arr_1 [i_0 - 1] [i_0])))))));
                                var_13 = var_5;
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        arr_26 [i_0] = (~56);
                        arr_27 [i_0] [i_0] [i_0] [i_0] = ((16647175994874825948 ? 817338445 : -817338429));
                    }
                }
            }
        }
    }
    var_14 = var_7;
    var_15 = var_1;
    var_16 = var_6;
    #pragma endscop
}
