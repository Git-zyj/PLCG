/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(0, 18420468163196357678));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_10 [i_0] = var_4;
                    arr_11 [i_0] [i_0] [i_2] = 133693440;
                }
            }
        }
        var_14 = ((((((max(var_10, 0)) ^ (~1)))) ? (max(1, var_3)) : var_6));
    }
    var_15 ^= var_12;
    var_16 = ((var_4 ? var_11 : ((((58305 != (max(1, 0))))))));
    var_17 |= (1 / var_9);
    #pragma endscop
}
