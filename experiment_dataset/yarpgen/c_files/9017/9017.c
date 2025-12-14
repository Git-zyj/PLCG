/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = min((var_8 == var_2), var_1);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_11 = 76;
                var_12 = (max(var_12, 9223372036854775807));
            }
        }
    }
    #pragma endscop
}
