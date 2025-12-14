/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 = (!2363294334);
                var_12 = (min(var_1, ((min((!var_3), var_0)))));
                var_13 = (((((!((max(2363294334, 11147443367555398369)))))) > var_9));
            }
        }
    }
    var_14 -= 0;
    #pragma endscop
}
