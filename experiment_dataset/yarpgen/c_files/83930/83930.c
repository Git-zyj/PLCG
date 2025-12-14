/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    var_12 = max(-var_5, 14);
    var_13 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_1 - 1] [7] [i_0] = var_9;
                            var_14 = ((-(520192 && 1)));
                            var_15 = var_1;
                        }
                    }
                }
                var_16 = ((-(((((-(arr_8 [6] [i_0] [i_0] [i_0])))) ^ (((arr_9 [i_0] [24] [24] [i_1 - 1] [i_0] [i_0]) ? (arr_5 [i_0] [i_1]) : 20))))));
            }
        }
    }
    var_17 = 1;
    #pragma endscop
}
