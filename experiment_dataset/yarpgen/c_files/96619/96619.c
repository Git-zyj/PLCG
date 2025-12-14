/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= var_7;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_18 *= 1;
                var_19 *= (var_12 ? (((((-47 ? var_15 : var_11))) ? 56263 : (arr_2 [i_0]))) : ((((!(arr_1 [i_0 + 1]))))));
            }
        }
    }
    #pragma endscop
}
