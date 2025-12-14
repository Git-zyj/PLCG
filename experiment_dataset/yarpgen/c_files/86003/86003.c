/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= var_8;
    var_17 *= (7280692911043564153 + 112);
    var_18 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_19 &= ((min(18446744073709551615, 549755813887)));
                arr_4 [10] [i_1] &= 18446744073709551615;
                arr_5 [10] &= 6;
            }
        }
    }
    var_20 = var_10;
    #pragma endscop
}
