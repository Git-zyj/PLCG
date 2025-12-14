/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = min(var_9, var_5);
    var_16 |= ((!(((((min(var_2, var_1))) ? var_13 : ((var_9 ? var_10 : 268435454)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] [i_0] = var_8;
                var_17 = (min(var_17, var_10));
            }
        }
    }
    var_18 = (min((max(-1764272846923196305, var_2)), ((((!363) ? ((var_4 ? 3606730295 : -268435454)) : var_4)))));
    #pragma endscop
}
