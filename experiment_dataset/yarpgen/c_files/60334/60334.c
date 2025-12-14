/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = -77;
                arr_7 [i_0] = (min(var_6, 4294967294));
            }
        }
    }
    var_12 = (!1);
    var_13 = (((((~(var_3 == var_9)))) ? -5879512914151140711 : var_2));
    var_14 = ((!(((5879512914151140711 ? 2033284587 : -2029366528)))));
    var_15 = var_3;
    #pragma endscop
}
