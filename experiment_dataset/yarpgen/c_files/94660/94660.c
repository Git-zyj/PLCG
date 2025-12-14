/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_12 = (max(var_12, ((max(-8899824768832143024, 0)))));
                    var_13 = (((min((arr_5 [i_0]), var_5)) >= 118863129));
                }
            }
        }
    }
    var_14 = (max(var_14, (~var_1)));
    #pragma endscop
}
