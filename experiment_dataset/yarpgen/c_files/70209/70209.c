/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_16 = ((+(min((arr_4 [i_0 + 2]), var_12))));
                var_17 = (((arr_4 [i_0 - 1]) ? (((~8) ? ((4095 ? 65514 : 17301014226952183160)) : (!3839865971383125508))) : (max((arr_3 [i_0] [i_0 + 2] [i_0 + 2]), var_6))));
                var_18 = ((!(arr_4 [i_1])));
                arr_6 [i_0] = 65531;
            }
        }
    }
    var_19 = (min(var_3, (var_0 | var_13)));
    var_20 = 6445531855137155900;
    var_21 = 65530;
    #pragma endscop
}
