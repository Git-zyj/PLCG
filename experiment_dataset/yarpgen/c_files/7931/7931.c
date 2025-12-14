/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_15 = ((((max(0, 1))) << ((((3474 ? (arr_1 [i_0]) : 1)) - 79))));
                var_16 = (min(15, (((var_3 + 2147483647) >> (var_4 - 18555)))));
            }
        }
    }
    #pragma endscop
}
