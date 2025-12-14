/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= ((81902211 ? 251 : -1348104402));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_14 *= 1;
        var_15 = (min(var_15, (arr_1 [i_0 - 1] [i_0 - 1])));
        var_16 &= (max(var_10, (arr_1 [i_0 + 1] [i_0 + 1])));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_17 = (max(var_17, ((min(-var_5, (arr_3 [i_1]))))));
        arr_4 [i_1] [i_1] = (16 % 1);
        var_18 = ((((max(((var_9 ? 89706535 : (arr_2 [i_1] [i_1]))), -1498867005))) ? (!-30310) : (max(4124623118, -970560231519175438))));
        var_19 = var_9;
        var_20 = (arr_1 [i_1] [i_1]);
    }
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        var_21 = (min(var_21, ((((((~(arr_0 [i_2 - 1])))) ? (arr_0 [i_2 - 1]) : ((((arr_0 [i_2 + 1]) ? (arr_2 [i_2 - 1] [i_2 - 1]) : var_7))))))));
        var_22 -= (((-866824496426101967 ? (!var_6) : ((0 ? 2013782048 : 1)))));
        var_23 = (min(var_23, (~var_7)));
        arr_8 [i_2 - 1] [i_2] = ((((((var_6 ? 3 : (arr_2 [i_2 + 1] [i_2 - 1])))) ? (max(8343276203125538971, var_12)) : (max(var_1, var_1)))));
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        var_24 = (((!953284821) ? 17248655833049604597 : -528482304));
        var_25 = var_0;
    }
    var_26 = -var_5;
    #pragma endscop
}
