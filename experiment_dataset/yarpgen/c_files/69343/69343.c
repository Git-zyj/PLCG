/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (((((var_8 >= 0) ? var_7 : (-5 / 1)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 &= (~32749);
                var_12 *= 14;
            }
        }
    }
    var_13 ^= (((-((987830908 ? 8 : var_6)))));
    #pragma endscop
}
