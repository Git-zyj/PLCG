/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_0 || (((-var_7 ? var_8 : ((max(268435448, var_10))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_12 = (max(var_12, ((((106 % (2477898102 ^ var_0)))))));
                    var_13 *= ((min(63761, 1765)));
                }
            }
        }
    }
    #pragma endscop
}
