/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, ((max((~50623), ((min(((var_10 ? var_9 : var_1)), (var_0 ^ -1113285180)))))))));
    var_15 = (((-(!var_12))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = min(var_8, var_10);
                var_17 = (max((min((arr_3 [i_1] [i_0]), var_11)), ((min((arr_0 [i_0]), (arr_3 [i_1] [i_0 - 1]))))));
            }
        }
    }
    var_18 = var_6;
    var_19 = (max(var_12, (var_8 + -1113285180)));
    #pragma endscop
}
