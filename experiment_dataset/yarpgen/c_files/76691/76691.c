/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-6752607637060197415 ? -var_5 : var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_21 *= (max((((!(arr_5 [i_0] [i_0] [i_0])))), -6752607637060197403));
                var_22 = (max(var_22, (min((((var_12 - (arr_4 [i_0])))), var_10))));
                arr_6 [i_0] [i_0] [5] = (((max(-115, 3757101912387568621)) % (((-1 ? (arr_0 [i_0]) : 197)))));
                var_23 = (min(var_23, (((!(((-(!var_17)))))))));
            }
        }
    }
    var_24 = var_3;
    #pragma endscop
}
