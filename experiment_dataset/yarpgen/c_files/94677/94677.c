/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] = (arr_1 [i_0]);
                var_16 |= 176;
            }
        }
    }
    var_17 = var_2;
    var_18 = (min(var_18, (max(var_6, (((-88 + 2147483647) >> ((((64 ? 3977283428296643160 : var_4)) - 3977283428296643139))))))));
    #pragma endscop
}
