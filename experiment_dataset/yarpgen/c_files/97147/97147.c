/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_18 = -var_13;
                var_19 = (((((((1 ? 916725067 : 916725067)) && var_7)))));
            }
        }
    }
    var_20 = min(var_1, (((-89 < 10295) ? var_7 : (min(var_4, 1)))));
    var_21 = (((min(-var_17, (((var_2 ? 50792 : var_14))))) >= ((var_1 ? (var_10 / -916725088) : var_16))));
    #pragma endscop
}
