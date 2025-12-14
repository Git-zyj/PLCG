/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_15 = var_10;
                var_16 = (max(var_16, (((!(!255))))));
                var_17 = ((-(~1)));
            }
        }
    }
    var_18 = 255;
    #pragma endscop
}
