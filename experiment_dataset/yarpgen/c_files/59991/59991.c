/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_20 = (!var_19);
                var_21 ^= ((((max(205, 199))) ? -7847553637607122410 : (((max((((arr_4 [i_0] [i_1] [i_1]) || var_16)), 0))))));
            }
        }
    }
    var_22 = (~var_19);
    #pragma endscop
}
