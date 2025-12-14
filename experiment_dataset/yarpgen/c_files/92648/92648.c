/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_5;
    var_18 = min((min(var_7, var_13)), var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [i_0] = ((((((arr_0 [i_1 - 1]) & (arr_0 [i_0])))) ? (~var_11) : (max((arr_0 [i_1 - 1]), -75))));
                var_19 -= 5346309244139879254;
            }
        }
    }
    #pragma endscop
}
