/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_20 = (min(var_20, ((((arr_5 [i_1 + 2]) / (max((-112 / -1647943682), 576700817)))))));
                arr_6 [3] = (((~var_1) == ((var_12 ? (arr_2 [i_1 - 1]) : (arr_1 [i_0])))));
                var_21 += (min(7312931096043055151, 576700822));
                arr_7 [i_0] [i_0] = var_15;
            }
        }
    }
    var_22 = ((var_9 ? (min(var_16, ((min(var_9, var_15))))) : (min((min(var_7, var_10)), (((var_16 ? var_1 : var_6)))))));
    var_23 = ((~var_4) ? ((min(var_4, (var_3 && var_6)))) : (!var_1));
    var_24 += (-((~((max(66, 251))))));
    #pragma endscop
}
