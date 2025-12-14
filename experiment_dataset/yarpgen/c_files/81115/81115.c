/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
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
                                var_15 = (min(var_15, var_6));
                                arr_14 [i_1] [i_2] [3] [i_1] = (-126 && -66);
                            }
                        }
                    }
                    arr_15 [i_0 - 2] [i_1] [i_1] [i_2] = arr_7 [i_1] [i_2];
                    arr_16 [i_1] = var_11;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_16 = (!(arr_9 [i_0] [i_1]));
                                var_17 = var_14;
                                var_18 = ((((max((arr_6 [i_0] [10] [i_1]), ((var_9 ? (arr_4 [2] [i_1] [i_2]) : (arr_4 [i_6] [i_1] [i_6])))))) ? (122 / var_3) : (arr_9 [i_0 - 1] [i_1 - 1])));
                            }
                        }
                    }
                    arr_23 [i_0 + 1] [i_1 + 1] [i_1] [i_2] = (!16383);
                }
            }
        }
    }
    var_19 = var_10;
    #pragma endscop
}
