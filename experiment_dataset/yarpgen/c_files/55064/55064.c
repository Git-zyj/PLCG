/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_13 [i_4 - 2] = 1;
                                arr_14 [0] [i_0] [i_1] [i_1] [i_3] [15] [i_4 - 1] = ((~(((~var_17) / var_12))));
                                arr_15 [i_4] [i_3] [i_2 - 1] [i_0] [i_0] = 1;
                                var_20 = (max(var_20, ((((var_18 || var_9) ? var_18 : ((min(1, 176))))))));
                                var_21 = (1 <= var_5);
                            }
                        }
                    }
                    arr_16 [i_0] [i_1] [i_2] [i_2 + 1] = (arr_6 [i_0] [i_1] [i_2]);
                    var_22 *= (min((!2989868531), (((((~(arr_10 [i_0] [i_0] [i_0] [12] [13] [i_0])))) ? (arr_3 [i_2 + 3]) : (!1)))));
                }
            }
        }
    }
    var_23 = (min(((min(var_1, (var_0 || 5032330835640412852)))), -25768));
    #pragma endscop
}
