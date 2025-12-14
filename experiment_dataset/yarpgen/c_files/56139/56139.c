/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += (max(var_7, ((min(var_5, var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_13 = (max(var_13, 0));
                var_14 -= var_0;
            }
        }
    }
    var_15 -= ((((((min(var_3, -32753))) ? ((max(0, var_11))) : var_6))) ? -1 : ((max((min(129, var_0)), 22))));
    var_16 = (max(var_16, ((((min(var_6, (max(var_4, var_10)))) == (min((16760832 + var_1), ((var_2 ? var_10 : var_4)))))))));
    #pragma endscop
}
