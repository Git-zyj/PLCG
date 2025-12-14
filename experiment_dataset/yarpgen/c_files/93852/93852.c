/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += var_15;
    var_17 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_1] = (arr_1 [i_1]);
                var_18 = (min(var_18, (((((min((arr_2 [i_0 + 2] [i_0 + 2]), (arr_1 [i_0 - 2])))) ? (arr_0 [i_0 - 1] [i_1]) : var_3)))));
                arr_7 [i_0] [i_1] [i_1] = -75;
                var_19 *= ((((min((((arr_2 [i_0] [i_0]) ? 1 : var_4)), ((var_9 ? var_0 : var_5))))) ? ((((var_5 ? var_5 : -13042)) / (arr_3 [i_0]))) : ((min(1, (arr_0 [i_0 - 2] [i_1]))))));
            }
        }
    }
    #pragma endscop
}
