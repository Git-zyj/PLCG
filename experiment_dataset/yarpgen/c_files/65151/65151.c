/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_13 |= var_2;
                var_14 *= ((!((((((65535 ? (arr_3 [i_0] [i_1]) : (arr_2 [15] [10])))) ? (arr_2 [i_0] [i_1 + 2]) : (arr_2 [i_1 - 1] [i_1 - 1]))))));
            }
        }
    }
    var_15 = (max(var_15, var_2));
    #pragma endscop
}
