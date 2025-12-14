/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, (((((arr_2 [2]) ? var_4 : -468790168909487067))))));
                    arr_11 [14] [16] [2] |= 14932;
                    var_14 += var_7;
                }
            }
        }
    }
    #pragma endscop
}
