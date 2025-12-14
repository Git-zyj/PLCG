/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= ((104 - ((((max(240, 220))) - var_4))));
    var_16 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = ((((14 % 35) % 249)));
                var_17 = (((~var_12) - (((((36 ? var_5 : 560750930165760))) ? ((16 ? var_10 : 220)) : (arr_0 [i_0])))));
            }
        }
    }
    #pragma endscop
}
