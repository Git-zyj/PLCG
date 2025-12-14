/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_14 *= (((arr_4 [i_0] [0]) ? (arr_1 [i_0 + 1]) : (min(845504809, ((31048 ? (arr_3 [i_0 + 2] [i_0]) : (arr_4 [i_0] [18])))))));
                var_15 = (min(var_15, (min(((((min((arr_2 [i_0 - 1]), (arr_1 [i_1])))) ? 37 : (((min(255, (arr_0 [i_0] [i_0]))))))), ((((((min(0, 34487)))) < (arr_4 [4] [4]))))))));
            }
        }
    }
    var_16 ^= (var_8 & var_0);
    #pragma endscop
}
