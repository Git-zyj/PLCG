/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_15, (((var_1 ? ((var_9 ? 1 : var_12)) : var_2)))));
    var_19 -= var_4;
    var_20 |= var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_21 = (((((max((arr_0 [i_0]), var_5)) > var_11)) ? (((-((var_7 & (arr_1 [i_0] [i_1])))))) : var_15));
                arr_6 [i_1] [i_0] = (((arr_5 [i_0] [i_0] [i_1]) ? 677942585 : (((arr_2 [i_0] [i_1]) | (((-32767 - 1) ? var_13 : var_1))))));
            }
        }
    }
    #pragma endscop
}
