/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= var_0;
    var_17 -= -0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_18 = (max(var_18, (arr_3 [i_0] [i_0])));
                var_19 += (max(((14697 ? (arr_4 [i_0] [i_0] [i_1]) : 14697)), ((max(-31196, (arr_4 [i_0] [1] [10]))))));
            }
        }
    }
    var_20 += var_13;
    #pragma endscop
}
