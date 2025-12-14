/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((((((-var_12 ? (max(var_0, var_3)) : (var_13 & var_12)))) ? -5261969598118916473 : ((var_9 ? 15704201723295981092 : 95)))))));
    var_16 = ((var_4 ? (max((min(var_11, var_2)), var_4)) : (!-6381490104731753069)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (max((max(var_5, (min((arr_3 [i_0] [i_1]), var_1)))), (arr_4 [i_1] [i_1])));
                var_17 = var_6;
            }
        }
    }
    var_18 = var_12;
    #pragma endscop
}
