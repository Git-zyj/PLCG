/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_18 *= min(((max(-774618602159637967, var_2))), (max((arr_0 [i_1] [i_0 - 3]), 4038519152)));
                var_19 = ((((max(var_15, var_16))) ? (~var_14) : (!9510607410812792983)));
                var_20 = ((max((arr_0 [i_0 - 2] [i_0 - 1]), ((((arr_2 [13] [13] [13]) / var_16))))));
                arr_5 [i_0] [i_0 - 3] = ((var_0 ? (((((var_4 ? var_6 : var_5))) ? (arr_4 [i_0] [i_1]) : var_15)) : -15482946186151572856));
            }
        }
    }
    var_21 = (!var_11);
    #pragma endscop
}
