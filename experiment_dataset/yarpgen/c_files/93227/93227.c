/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_17 = (((arr_0 [i_0]) ? var_0 : (-127 - 1)));
                    arr_8 [i_0] [i_1] [i_0] = min(59, (arr_1 [i_0]));
                }
            }
        }
    }
    var_18 &= -96;
    var_19 = min(var_15, (-127 - 1));
    #pragma endscop
}
