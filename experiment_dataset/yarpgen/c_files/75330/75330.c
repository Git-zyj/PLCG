/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= 1;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_16 = ((~(((arr_0 [i_0]) ? (max(-1209994109, 177)) : var_8))));
                arr_5 [i_0] [i_0] = ((var_0 ? (min(((-(arr_3 [i_0 - 1] [i_1]))), (177 & 1209994109))) : var_14));
            }
        }
    }
    var_17 = (min(var_17, var_10));
    #pragma endscop
}
