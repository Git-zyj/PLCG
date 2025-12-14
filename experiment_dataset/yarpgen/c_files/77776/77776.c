/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(1, (102 - -103)));
    var_20 = (min(var_20, var_15));
    var_21 = ((115 ? 82 : (((!((max(102, -93))))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_22 = (max((((65535 ? (max(var_17, 3256961842)) : var_3))), ((var_10 ? (((var_8 ? var_1 : var_6))) : (arr_3 [i_1])))));
                var_23 = (max(var_23, ((((min(var_3, 10)) & (max((((arr_1 [i_1]) ? 0 : (arr_3 [i_0 - 1]))), ((min(var_7, var_15))))))))));
            }
        }
    }
    #pragma endscop
}
