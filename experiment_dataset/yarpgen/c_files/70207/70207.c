/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_19 = (~-4319444370233737147);
                arr_6 [1] = var_3;
            }
        }
    }
    var_20 = (!-var_16);
    var_21 = (min(var_3, var_4));
    #pragma endscop
}
