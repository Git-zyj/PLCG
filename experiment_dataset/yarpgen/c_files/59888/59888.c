/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_19 = (((((((65535 ? 0 : 0))))) + -8562047405430525350));
                var_20 = 1;
                var_21 = (((((65535 ? 11 : 11))) ? (1 != -14) : ((4648107742966362235 ? 18 : ((0 ? 6431950783358197740 : 6431950783358197730))))));
            }
        }
    }
    var_22 = (((12014793290351353875 ? (!1) : (!1))));
    #pragma endscop
}
