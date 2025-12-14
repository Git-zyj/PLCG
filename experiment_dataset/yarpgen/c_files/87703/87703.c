/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_14 >> (var_3 - 177111326)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_20 = (max((18446726481523507200 > 4), (!-var_9)));
                var_21 = ((-((~(~var_14)))));
                arr_5 [i_0] [i_0] = ((-var_0 * (16912737075018893935 | 2409955284)));
            }
        }
    }
    #pragma endscop
}
