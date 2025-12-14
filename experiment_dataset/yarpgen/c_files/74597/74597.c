/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(((min(var_9, var_9))), (var_7 & var_9)));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_12 = (min(var_12, 41745));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] [i_3] [1] [i_3] = (((((3127675828444185938 ? (arr_0 [i_0 - 1]) : var_3))) ? (min(var_5, (arr_2 [i_0] [i_0]))) : 0));
                            var_13 = var_3;
                        }
                    }
                }
                arr_12 [i_0] = 1;
            }
        }
    }
    #pragma endscop
}
