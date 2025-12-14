/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, 0));
    var_16 ^= ((((max((53 / 37), 0))) && ((((max(var_7, -8857475951240882243)) / -5919870526029310693)))));
    var_17 ^= -var_9;
    var_18 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_19 = (((~2627712643) * ((5 / (~8857475951240882242)))));
                arr_5 [i_1] = (((-54 | 46468) >= (61 < 8857475951240882242)));
            }
        }
    }
    #pragma endscop
}
