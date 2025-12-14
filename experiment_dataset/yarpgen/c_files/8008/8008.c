/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 13692108924379695454;
    var_20 = var_17;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_21 -= arr_4 [i_0] [i_1];
                    var_22 -= -15300;
                    arr_11 [i_0] [i_0] [i_0] [i_2] = ((min(var_9, (max(4083556238, var_2)))));
                }
            }
        }
    }
    #pragma endscop
}
