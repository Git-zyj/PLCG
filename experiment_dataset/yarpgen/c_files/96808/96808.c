/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((max(-var_2, (max(-3401793606082909910, var_5)))), (((max(8986515070788076449, 194)) << (var_7 - 7759000301888226755)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, (arr_3 [i_1])));
                    var_16 = (min(var_16, (~123)));
                    var_17 = (max(var_17, (~123)));
                }
            }
        }
    }
    var_18 -= 132;
    var_19 = var_7;
    #pragma endscop
}
