/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (!var_8)));
    var_12 = (min(var_12, 1313756107));
    var_13 = (min(var_13, ((((((997174441 ? -1698223030 : 12))) ? var_6 : (((-1698223000 ? 127 : 4845641291343708649))))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_14 -= (((min((arr_3 [i_0 + 1] [i_0 + 1]), (arr_3 [i_0 - 2] [i_0 + 1]))) - (((min((arr_4 [i_0]), 161))))));
                    var_15 = ((((-1313756113 ^ -25230) * (!1698223030))));
                }
            }
        }
    }
    var_16 = var_9;
    #pragma endscop
}
