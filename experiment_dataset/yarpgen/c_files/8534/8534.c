/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((~var_7) ? (~9) : (max(var_3, ((var_3 ? var_3 : var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_11 = ((max((0 * 18446744073709551606), (~18446744073709551615))));
                var_12 = ((((min((76 ^ var_5), (~27499)))) ? ((((var_9 ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 - 1]))) + 3812284729841431735)) : -27490));
            }
        }
    }
    #pragma endscop
}
