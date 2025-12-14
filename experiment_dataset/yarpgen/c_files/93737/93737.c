/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += (min(var_4, var_0));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_20 = (min(var_20, 1430985355));
                                arr_11 [i_0] = ((!((max(15698, (arr_9 [i_3 + 2] [i_2] [i_2] [i_1 + 3] [i_1 - 1] [i_0]))))));
                                var_21 = (((var_1 ? (arr_3 [i_0] [i_3 - 3] [i_1 + 3]) : 61093)));
                                var_22 += ((70368744177663 ? 24041 : 320405939));
                                arr_12 [i_0] [i_0] [i_0] [i_0] = (arr_7 [i_4] [i_3] [i_2] [i_1] [i_0]);
                            }
                        }
                    }
                    arr_13 [i_1] [i_0] = (((((((15698 ? -1430985356 : (arr_10 [17] [17] [i_1] [17])))) ? (arr_10 [i_0] [i_0] [i_1] [i_2]) : (arr_8 [i_2] [i_2] [i_2] [i_1 + 3] [i_0]))) < (arr_5 [i_1] [i_0])));
                }
            }
        }
    }
    var_23 = var_0;
    #pragma endscop
}
