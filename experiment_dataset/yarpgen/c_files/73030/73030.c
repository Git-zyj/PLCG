/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [11] [11] = -var_10;
                var_16 = var_3;
            }
        }
    }
    var_17 = (-9223372036854775807 - 1);
    var_18 = (min(-var_2, ((((max(-2735204106407502720, var_2))) ? (-2735204106407502711 + 2735204106407502698) : var_6))));
    var_19 ^= var_6;
    #pragma endscop
}
