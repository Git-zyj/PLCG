/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = ((((max(((1612320751 ? var_16 : var_10)), ((max(var_17, 308910634)))))) ? (max((max(var_16, var_13)), ((min((arr_3 [i_0] [i_1]), var_4))))) : (max(7570623230625220625, 10876120843084330996))));
                arr_5 [20] |= (max(((((arr_0 [1]) != (!var_2)))), (((arr_2 [0] [i_1 - 1]) ? (arr_2 [12] [i_1 - 1]) : 542495002))));
            }
        }
    }
    var_21 -= (max(1, (~10876120843084330991)));
    #pragma endscop
}
