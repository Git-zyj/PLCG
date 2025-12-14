/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_1] [i_4] [i_0] [i_4] = (((var_9 ? var_2 : 203)));
                                arr_17 [i_1] [i_2] [i_3 + 1] [i_4] = 8185243775204197571;
                                arr_18 [i_4] [i_2] [i_1] [i_4] = ((!(-127 - 1)));
                                var_11 -= ((((((arr_10 [i_0] [i_1] [i_1] [i_3 - 2] [i_4]) / var_7))) ? ((((!(arr_14 [i_0] [21] [21] [21] [21]))))) : (((arr_10 [i_1] [i_1] [i_1] [i_1] [i_1]) ? (arr_10 [i_0] [i_1] [i_2] [i_3 + 1] [i_4]) : var_9))));
                                var_12 = ((+(min((arr_12 [i_3 + 1] [i_3] [i_3 + 2] [i_3 - 2] [i_3 + 1]), (arr_12 [i_3 + 2] [i_3 - 1] [i_3 - 2] [i_3 - 2] [i_3 + 1])))));
                            }
                        }
                    }
                    arr_19 [23] [i_1] [i_2] = (!(((0 ? ((var_7 - (arr_8 [i_2] [4] [i_2] [i_0] [4] [i_0]))) : (!var_0)))));
                }
            }
        }
    }
    var_13 = (((31854 || -var_6) > (((-127 - 1) ? (-127 - 1) : var_9))));
    #pragma endscop
}
