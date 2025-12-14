/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += (min((((var_8 && (var_13 > var_13)))), ((((var_7 ? 1 : var_6)) - var_4))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_15 = -1000186533;
                var_16 = var_11;
            }
        }
    }
    var_17 = var_5;
    var_18 = (var_9 > var_2);
    #pragma endscop
}
