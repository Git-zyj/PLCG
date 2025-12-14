/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (1 <= -7);
    var_13 = (min(var_13, ((min(171, (1 << 0))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_0 + 1] [i_0 + 1] = (arr_2 [5] [i_1]);
                arr_5 [i_1] [i_0] = ((6 ? (((arr_3 [i_0 + 1]) ? (arr_3 [i_0 - 2]) : 1)) : (arr_3 [i_0 - 2])));
                var_14 -= (((~1) & (((1600681206 * 1) ? (arr_2 [i_0] [i_0]) : var_9))));
                var_15 = (1 && var_3);
            }
        }
    }
    #pragma endscop
}
