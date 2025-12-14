/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] = arr_3 [i_1] [i_1] [i_1];
                var_16 = arr_1 [i_0];
                arr_5 [i_1] = (min((((5457 ? 0 : -831960964))), (max((arr_1 [i_0]), var_1))));
            }
        }
    }
    var_17 = (((var_11 ? var_14 : (var_5 - var_11))));
    var_18 = (min(((((var_12 || var_1) ? var_7 : (max(var_9, var_10))))), (((~var_10) ? ((var_11 ? var_14 : var_11)) : 1))));
    #pragma endscop
}
