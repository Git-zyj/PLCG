/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] = (((((min((arr_2 [i_0] [i_0] [i_0]), var_2)))) ? ((((max((arr_4 [i_0 - 1] [i_1] [i_2]), 110))))) : (((!141) ? (~10134538401883639784) : 164))));
                    arr_9 [i_0] [22] = var_8;
                    arr_10 [i_2] [i_0] [i_2] [i_2] = 48;
                }
            }
        }
    }
    var_16 &= (var_3 ? ((var_3 ? (((141 ? 1 : 2))) : (max(var_1, var_14)))) : (var_10 - 9055183900568989917));
    var_17 = var_5;
    #pragma endscop
}
