/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_7 [0] [i_0] [i_0] [i_0] = ((((max(var_7, ((127 ? 112 : var_6))))) ? var_13 : (max((arr_6 [i_0] [i_1] [i_2 - 1] [i_0]), ((var_6 ? var_9 : 132))))));
                    arr_8 [i_0] [8] [8] [i_0] = ((((max((!var_5), var_5))) ? ((var_2 ? var_2 : (arr_6 [i_2] [i_2] [i_2] [i_2 - 1]))) : ((((!((min(1061597324953088657, 127)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_1] [i_2 + 1] [i_3] [i_4] = 13437710776715639484;
                                arr_15 [i_3] = ((var_11 ? (((-(1573062830 * 1)))) : (max(4294967295, 127))));
                                arr_16 [i_1] [i_2 - 1] [i_3] [i_4] = ((136 ? 31 : -31797));
                                arr_17 [i_0] [i_1] [i_2] [i_1] [i_3] [i_3] [i_4] = (arr_4 [i_1] [i_1]);
                            }
                        }
                    }
                    arr_18 [i_1] [i_1] = -126;
                }
            }
        }
    }
    var_14 = var_1;
    #pragma endscop
}
