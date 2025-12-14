/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 -= (((((min(65531, var_7))) >= (max(-1, 17511410438819780342)))) ? ((max((max(17396, var_2)), 1))) : (max(1, (max(1, var_5)))));
                var_20 = (-2147483647 - 1);
                arr_5 [i_0] [i_1] &= (((-9223372036854775783 ? (min(909433928, var_5)) : (((var_10 ? (-32767 - 1) : var_12))))));
            }
        }
    }
    var_21 = 1;
    #pragma endscop
}
