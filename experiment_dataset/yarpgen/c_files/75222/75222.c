/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= (min(((-var_1 ? ((var_1 ? var_1 : -576460752303423488)) : (((10076 ? 123 : 114))))), (((min(var_6, var_8))))));
    var_13 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_14 = (-100 & -12114);
                var_15 = (min(var_15, var_11));
            }
        }
    }
    var_16 = ((((~var_2) <= 2)));
    #pragma endscop
}
