/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_10 = 29789;
                var_11 *= (((min((min(-134217728, var_8)), -7973479388421934656)) / ((max(var_3, var_3)))));
                var_12 = -1;
            }
        }
    }
    var_13 = ((((((var_6 < var_3) && var_8))) | ((((max(0, var_6))) ? (6359 ^ 1) : -5))));
    var_14 = ((((((var_0 ? 1 : -29794) == (var_0 < var_2))))));
    #pragma endscop
}
