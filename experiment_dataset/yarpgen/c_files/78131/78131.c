/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_20 = ((var_19 ? (((arr_1 [i_0 - 1]) ? (arr_4 [i_0 + 1]) : var_14)) : ((((arr_2 [i_0 - 1]) == (arr_2 [i_0 - 1]))))));
                arr_5 [10] [10] [i_0 + 2] = arr_3 [6] [i_0];
            }
        }
    }
    var_21 = (((1 ? 6607796934760511776 : 0)));
    var_22 = var_3;
    var_23 = ((((min(0, var_8))) - (var_5 - -var_15)));
    #pragma endscop
}
