/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_20 &= var_12;
                var_21 = (((((((var_7 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_1 + 1])))) ^ (max(var_16, var_7)))) - var_0));
            }
        }
    }
    #pragma endscop
}
