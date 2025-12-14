/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 248;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (((arr_2 [i_0]) ^ var_0));
                var_16 -= (max(-var_12, (14 || 308001919955337435)));
            }
        }
    }
    var_17 = var_1;
    var_18 = ((((-(22547 == var_0))) < (var_1 > -8592717828726237012)));
    #pragma endscop
}
