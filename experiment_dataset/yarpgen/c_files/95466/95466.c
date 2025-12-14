/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((max(var_7, var_11))) / (var_7 / var_11))) < ((max(var_10, var_12)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_16 = (min(var_16, 1));
                var_17 = (min(((143 ? 0 : 634737830)), ((min((arr_2 [i_0 - 1]), (arr_2 [i_0 + 1]))))));
            }
        }
    }
    var_18 += (min(((-((107 ? 105 : var_7)))), (303038773 % var_5)));
    #pragma endscop
}
