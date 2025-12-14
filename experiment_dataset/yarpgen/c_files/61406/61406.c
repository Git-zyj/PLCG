/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 8762334179041303435;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [i_0] = (((((~(~var_13)))) ? ((var_17 & (~16278082421869582735))) : ((var_19 ? -94 : 13621148460548731516))));
                var_21 = (min(var_21, ((((((~(~var_19)))) ? (16598 | 1116460918) : var_12)))));
            }
        }
    }
    #pragma endscop
}
