/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] [i_0] = 254;
                arr_6 [i_0] [i_1 + 1] [i_1 + 1] = ((((max(-303104977, var_9) + -303104968))));
                arr_7 [i_1] = 12512;
            }
        }
    }
    var_13 = ((((min((((var_11 ? 1 : var_12))), ((303104967 ? 2147483647 : 17179869168))))) ? -100 : 53024));
    #pragma endscop
}
