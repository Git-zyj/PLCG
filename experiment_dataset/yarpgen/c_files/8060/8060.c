/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((max(var_15, var_11)))) ? ((max((32754 | var_3), var_13))) : ((var_5 ? var_11 : (max(var_13, 29))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 6;i_1 += 1)
        {
            {
                arr_6 [5] [i_1] = (min((((!((((arr_5 [i_1]) ? -23 : (arr_3 [i_0]))))))), (arr_2 [6] [i_1])));
                arr_7 [6] = ((~(arr_3 [i_1 + 2])));
                var_21 = ((~(((arr_1 [i_1 + 2] [i_1 + 2]) ? (arr_1 [i_1] [i_1 - 2]) : -6))));
                var_22 = (max(var_22, (((-((min(71, -16035))))))));
            }
        }
    }
    var_23 = var_11;
    var_24 = 712192395;
    #pragma endscop
}
