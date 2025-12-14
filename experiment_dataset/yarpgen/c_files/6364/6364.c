/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= (min(10575, var_3));
    var_21 |= ((((((var_14 || (-127 - 1))))) ? ((var_14 & ((var_5 ? var_5 : var_6)))) : 10570));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_22 = 10598250815593407053;
                var_23 += ((-(!41)));
            }
        }
    }
    var_24 = (var_2 > var_14);
    var_25 &= (min(var_18, 5615));
    #pragma endscop
}
