/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= (max(var_12, var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_18 = (max(var_18, -23450));
                var_19 -= 3725890574;
                var_20 &= (((arr_0 [2] [i_1]) * (((((var_0 ? 2013 : 92)))))));
                var_21 = (max((10928111978834639078 + 522962067), 1689734626));
                var_22 &= ((((-522962081 + 2147483647) << (arr_1 [1] [1]))));
            }
        }
    }
    #pragma endscop
}
