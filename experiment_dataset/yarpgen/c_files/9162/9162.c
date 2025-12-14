/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((var_7 ? (var_10 || 242) : ((var_3 >> (536866816 - 536866792))))) >= ((min(0, 51)))));
    var_16 = max((((var_14 <= ((((-2147483647 - 1) && 6)))))), (max(-var_6, (min((-2147483647 - 1), 6120682492092269091)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_17 = (34359738367 ? (108 || 730064280015103101) : 27);
                    arr_7 [i_1] = (((-2147483647 - 1) >= var_3));
                }
            }
        }
        var_18 = ((((var_1 ? var_6 : 2147483647)) << (((193 * var_6) - 2310))));
        var_19 = (((var_4 > 2054992532) ^ var_6));
        var_20 = ((var_5 ? ((var_11 ? 16144852112047301218 : 1536)) : var_1));
    }
    #pragma endscop
}
