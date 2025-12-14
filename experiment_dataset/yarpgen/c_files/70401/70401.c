/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += var_9;
    var_11 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                var_12 = (min((268402688 > 6548364550755223603), ((var_9 >> (var_9 - 8749)))));
                arr_5 [i_1 - 4] [7] [i_0] = (((((~((63477 ? (arr_0 [i_1] [i_1]) : 29465))))) ? (arr_4 [i_0] [i_1 + 1]) : (((arr_1 [i_0] [i_0]) ? (min((arr_4 [11] [i_0]), (arr_0 [i_0] [i_1]))) : ((((arr_4 [i_0] [i_0]) * 0)))))));
                var_13 = -7994178016561665495;
                var_14 = (min((((~(((arr_4 [i_0] [i_1 - 2]) ^ 59356))))), (min(((((arr_2 [i_0]) ? 43501 : (arr_3 [13] [4] [8])))), ((var_8 ? 62843 : (arr_0 [i_1] [i_1 - 2])))))));
            }
        }
    }
    var_15 = ((var_6 ? (((!(var_0 == 65530)))) : (min(((var_0 ? var_2 : var_2)), (var_3 & 36305)))));
    #pragma endscop
}
