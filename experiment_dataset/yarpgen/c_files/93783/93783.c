/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= (((var_10 ? -205 : (var_11 < var_12))));
    var_16 = (min(var_16, var_13));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_17 = var_3;
                arr_6 [i_1] [3] [i_0] = var_7;
                var_18 |= (max((arr_4 [i_0]), (~var_11)));
            }
        }
    }
    var_19 = (max(165, -6965699064142016384));
    #pragma endscop
}
