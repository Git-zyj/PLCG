/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;
    var_18 = (((((127 ? var_13 : 1))) ? (4118444023 && 9223372036854775807) : ((0 ? 0 : var_3))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_19 = var_4;
                arr_5 [i_0] = ((176523272 + (((min(-18298, (max((arr_2 [i_0]), (arr_1 [i_1] [i_0])))))))));
            }
        }
    }
    #pragma endscop
}
