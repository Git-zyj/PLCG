/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 = var_0;
                arr_6 [i_0] [i_1] = var_15;
            }
        }
    }
    var_19 = -var_9;
    var_20 = -var_11;
    var_21 = (min((max((max(var_13, -4818730)), var_7)), ((((~var_16) > var_6)))));
    #pragma endscop
}
