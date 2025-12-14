/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= (min(((min(var_6, var_4))), ((((((var_8 + 9223372036854775807) << (var_4 - 7055031464789313482)))) | 15735300219575352032))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = (min(var_14, 3));
                var_15 = (min(((min(var_10, (arr_0 [i_0])))), var_4));
            }
        }
    }
    #pragma endscop
}
