/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 1085664982;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_12 = var_5;
                var_13 ^= min((~234898652), (((((var_5 ? -475303144 : (arr_2 [i_0] [i_1])))) ? 613368676 : (var_3 + var_7))));
                arr_5 [i_1 + 3] = 234898652;
            }
        }
    }
    #pragma endscop
}
