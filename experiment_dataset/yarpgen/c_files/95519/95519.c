/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 56;
    var_14 = 80;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_15 *= ((80 ? ((((!5572212523008985120) & (((arr_2 [i_0] [21]) * 0))))) : var_6));
                var_16 = (min(var_16, 5572212523008985120));
            }
        }
    }

    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_17 = 4096;
        var_18 *= 70;
        var_19 *= -56;
    }
    #pragma endscop
}
