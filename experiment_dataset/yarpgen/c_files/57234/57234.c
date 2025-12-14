/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_10 = (max(var_10, ((((min((arr_0 [i_1]), var_5)) == (((2023423205 ? 2023423205 : (arr_1 [i_0])))))))));
                arr_4 [i_1] [i_0] [i_0] = ((2023423205 & ((47657 ? var_5 : (~var_8)))));
            }
        }
    }
    var_11 = (min((((var_3 ? var_3 : var_1))), 2952366199));
    var_12 = var_6;
    #pragma endscop
}
