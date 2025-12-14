/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = var_4;
                arr_6 [i_0] [i_0 + 1] = ((((max((arr_2 [i_0 + 1]), (arr_4 [i_0 + 1])))) ? ((var_2 ? (arr_4 [i_0 - 2]) : (arr_2 [i_0 - 1]))) : (((max(var_15, var_7))))));
                arr_7 [i_1 - 1] [i_1 + 1] [i_0] = (arr_2 [i_0 - 1]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_13 [i_1] [i_2] [i_1] [i_1] [i_2] [i_0] = (max((arr_1 [i_2] [i_3]), (arr_10 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1])));
                            arr_14 [i_0 + 1] [i_0 + 1] [i_2] [i_2] [i_0 - 2] = -1;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_18 -= var_8;
                            arr_20 [i_1] [i_4] [i_5 - 1] = (arr_19 [i_0] [i_1 + 2] [i_4] [i_5]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
