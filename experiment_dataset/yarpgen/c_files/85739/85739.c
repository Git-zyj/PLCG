/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= ((((max(var_3, var_0))) != 15210727401637513752));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_18 = (((((~((-(arr_1 [19])))))) ? ((var_12 ? (arr_1 [i_0]) : (min(-3273222510387476808, 0)))) : 116));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_19 = (((arr_4 [i_1]) ? (arr_5 [i_1]) : ((((!(arr_4 [i_1])))))));
            var_20 = (min((((!((min((arr_0 [i_1] [19]), var_2)))))), (((arr_4 [i_0]) % var_9))));
            var_21 = (arr_1 [i_0]);
        }
    }
    var_22 = var_6;
    #pragma endscop
}
