/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_8;
    var_16 = var_0;
    var_17 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_18 = (((var_9 / var_2) ? ((((min(1, var_14))) ? ((var_0 ? 127 : 0)) : var_14)) : (((((257 == var_7) != ((var_2 ? var_5 : -127))))))));
                var_19 = (min(((-116 ? (-257 ^ -18041) : ((1 ? 30393 : -1)))), (((-23369 ? var_13 : 104)))));
            }
        }
    }
    #pragma endscop
}
