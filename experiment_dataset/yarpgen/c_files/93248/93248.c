/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((var_6 ? var_16 : var_2)) - var_3)));
    var_21 = (((~2832418506) % -115));
    var_22 = (min(var_22, (((min((min(var_9, var_18)), var_11))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_23 = var_11;
                var_24 = -1907621264;
                var_25 = (min(((max(4183039081, ((min(var_17, var_0)))))), var_10));
                arr_7 [i_0] = (((~var_19) / -77079398));
            }
        }
    }
    #pragma endscop
}
