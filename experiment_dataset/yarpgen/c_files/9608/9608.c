/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_18 = -822;
                    var_19 -= ((-(((var_8 ^ var_5) % (((-16 ? var_15 : var_10)))))));
                }
            }
        }
    }
    #pragma endscop
}
