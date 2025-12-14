/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_5 [i_0] [i_2] [i_3] [i_2]);
                                var_12 = ((((max((arr_9 [i_3 + 2] [i_3 - 3] [i_3 - 2] [i_3] [i_3 + 2] [1] [i_3 + 2]), (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) << (((arr_5 [i_0] [i_0] [i_0] [i_0]) - 32395))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 9;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 6;i_6 += 1)
                    {
                        {
                            var_13 = (min(var_13, (~3066190053058985911)));
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 15380554020650565684;
                        }
                    }
                }
            }
        }
    }
    var_14 = var_3;
    #pragma endscop
}
