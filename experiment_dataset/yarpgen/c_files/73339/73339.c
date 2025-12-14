/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_2;
    var_17 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                arr_7 [i_0] = var_5;
                arr_8 [i_0] [i_0] [i_1] = ((((min(-var_0, var_7))) || var_0));
                var_18 = (min(var_18, (arr_2 [i_0])));
                var_19 ^= -var_4;
            }
        }
    }
    #pragma endscop
}
