/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_13;
    var_18 -= ((var_16 ? (-2391816676781481566 < -84) : (min(var_15, var_16))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [8] [i_1] [i_1] = (max(((max(8639315624544175405, (((arr_2 [i_0 + 2] [i_1]) && 1435199753691558871))))), (max(31, ((1435199753691558872 ? -1435199753691558872 : 6671421256228327757))))));
                var_19 = ((-(((~-1435199753691558871) % (arr_4 [i_0 - 2])))));
                arr_7 [i_0] = var_14;
            }
        }
    }
    #pragma endscop
}
