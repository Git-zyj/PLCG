/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_18 = (min(var_18, 3243197523));
                var_19 = (((27223 ? var_0 : (-127 - 1))));
            }
        }
    }
    var_20 = ((56299 ? var_16 : ((((min(var_2, 18446744073709551615))) ? ((27223 ? 38312 : 137438953472)) : -18014398492704768))));
    #pragma endscop
}
