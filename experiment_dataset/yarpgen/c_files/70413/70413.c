/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -1345674392;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [4] = (((9223372036854775807 ? (arr_4 [i_0] [i_0] [i_0]) : (var_3 < var_13))) * (((-9223372036854775801 ? 4830605356577417313 : (-9223372036854775807 - 1)))));
                var_18 = -var_1;
            }
        }
    }
    #pragma endscop
}
