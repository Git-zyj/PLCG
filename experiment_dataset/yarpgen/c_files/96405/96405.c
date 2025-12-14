/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_19 += ((var_4 ? ((((arr_1 [i_0]) ? ((45611 ? 0 : 0)) : var_0))) : ((var_16 ? (min(2662547154617471816, 14721)) : (((max(-2, 32767))))))));
        var_20 = ((40674 ? 15784196919092079799 : 2662547154617471816));
        var_21 = (((((-((var_17 ? 1022 : 19925))))) + ((((min(133, var_0))) ? var_9 : var_13))));
    }
    var_22 = ((!((max(-0, ((var_6 ? var_7 : var_7)))))));

    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_23 = ((var_4 >> (15784196919092079799 != 14721)));
        var_24 = ((15784196919092079799 ? 0 : -var_15));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_25 = (~(var_16 * 3810494143));
        var_26 = (max(var_26, (((0 ? 3668164103 : 1)))));
        arr_8 [i_2] = (max(((((arr_2 [i_2]) > (max(var_13, var_6))))), ((-2 ? (((-46 != (arr_3 [i_2])))) : 0))));
    }
    for (int i_3 = 1; i_3 < 9;i_3 += 1)
    {
        var_27 = ((((-(max(0, -1806115397932130609)))) + ((((((var_16 ? var_7 : (arr_10 [i_3]))) > (!6871253461104007685)))))));
        arr_12 [i_3] [i_3] = (max(0, -var_0));
    }
    #pragma endscop
}
