/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_1] [1] = (((((150 ? 63 : -115))) - ((var_4 ? var_17 : 63))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_15 [7] [i_1] [i_2] [i_1] [i_1] [8] = ((31425 ? ((max(var_1, var_5))) : -1200));
                                arr_16 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1] [i_0] = (arr_4 [i_4] [15]);
                                arr_17 [i_4] [i_4] [i_1] [i_1] [i_1 - 1] [i_0] = (((((((((arr_9 [i_0] [i_0] [i_2] [1] [i_4]) ? 112 : var_16))) ? var_15 : (arr_6 [i_1 - 1] [i_2 + 1] [i_3 + 2] [i_3 + 1])))) ? (arr_10 [i_3 - 1] [i_1]) : (arr_12 [i_1] [i_1] [i_1])));
                            }
                        }
                    }
                    arr_18 [i_1] = (max(-1, (arr_10 [0] [i_1])));
                    var_18 = 6;
                }
            }
        }
    }
    var_19 = (~1199);
    #pragma endscop
}
