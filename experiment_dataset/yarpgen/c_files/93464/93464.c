/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((min(((0 ? 1 : 531925115)), 10592732931648341581)), var_5));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_13 ^= ((7854011142061210054 < (arr_3 [i_1])));
                var_14 += (((10592732931648341581 ? 0 : (arr_5 [i_1]))) * ((((~9082490813280617927) > (!1)))));
            }
        }
    }
    #pragma endscop
}
