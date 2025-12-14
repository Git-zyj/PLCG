/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_15 *= ((~((var_12 ? (arr_0 [i_0 - 1]) : (!40918)))));
                var_16 = (min(var_16, var_12));
            }
        }
    }
    var_17 &= var_14;
    var_18 = var_2;
    var_19 |= (((~var_10) << ((((24617 ? var_14 : ((2386217172 ? 54917 : var_13)))) - 29961))));
    #pragma endscop
}
