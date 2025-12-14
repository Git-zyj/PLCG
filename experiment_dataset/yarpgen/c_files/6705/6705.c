/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 8;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_2] [7] = (((((((var_8 ? (arr_1 [i_2 + 4]) : -6524424703092473067))) ? 6524424703092473071 : 70)) * (((-127 ? 0 : (148 > -6))))));
                    var_15 = (((!var_12) ? ((140736951484416 ? -6524424703092473073 : 111)) : 70));
                }
            }
        }
    }
    var_16 = (((127 ? (-6524424703092473078 / 70) : var_9)));
    #pragma endscop
}
