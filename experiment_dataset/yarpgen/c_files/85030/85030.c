/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -var_11;
    var_18 = ((18446744073709551593 - (!var_15)));
    var_19 = (max(var_0, (((!var_2) ? (50 - 4268282610147202086) : (max(18446744073709551593, var_3))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = 1608797784;
                arr_5 [i_0] [i_1] [i_1 - 2] &= var_15;
                var_20 = (arr_0 [i_1 - 2]);
            }
        }
    }
    #pragma endscop
}
