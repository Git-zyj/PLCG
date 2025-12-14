/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_18 = (((0 != 113) ^ (1 >> 1)));
                var_19 = (1 - 4);
            }
        }
    }
    var_20 = (max(var_8, (-1328729444 != -5836)));
    #pragma endscop
}
