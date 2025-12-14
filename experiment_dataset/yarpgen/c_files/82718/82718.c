/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -24;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                var_20 = ((~(~var_16)));
                arr_7 [i_0] = max(27631, 9772);
            }
        }
    }
    var_21 = var_7;
    #pragma endscop
}
