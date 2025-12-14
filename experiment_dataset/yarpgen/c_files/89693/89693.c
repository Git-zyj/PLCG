/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_15 = (max(-227, var_1));
                var_16 = (arr_2 [i_1] [i_0]);
                var_17 = (max(var_17, ((((((min(var_9, 0)))) ? -58 : 0)))));
            }
        }
    }
    var_18 = var_2;
    #pragma endscop
}
