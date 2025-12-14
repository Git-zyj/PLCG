/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((max(var_0, var_12)), var_12));
    var_20 = (min(var_6, (var_4 != var_4)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_21 = (min((max(-var_7, var_10)), (((var_0 + var_16) ? var_18 : var_10))));
                var_22 = (arr_2 [i_1]);
            }
        }
    }
    var_23 += var_3;
    var_24 &= (((~127) ? (140 - 65535) : (((max(0, 1)) ? ((2209529860484540274 ? var_10 : 125)) : var_12))));
    #pragma endscop
}
