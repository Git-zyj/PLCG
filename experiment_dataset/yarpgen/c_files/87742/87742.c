/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_18 |= (~65535);
                var_19 = ((((max(-1883971804, 17849) * (arr_2 [i_1] [i_0 - 1])))));
            }
        }
    }
    var_20 = var_11;
    #pragma endscop
}
