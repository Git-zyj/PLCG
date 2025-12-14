/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, var_9));
    var_18 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_19 ^= (((-((min(var_2, var_3))))));
                var_20 = ((!(~var_8)));
                arr_6 [i_0] [i_0] [i_0] = (max((arr_0 [i_0 - 1]), ((16 << (var_10 > var_4)))));
                var_21 -= var_4;
                var_22 = var_6;
            }
        }
    }
    var_23 = var_1;
    #pragma endscop
}
