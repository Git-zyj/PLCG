/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((755352939 >> (-9219330735502402817 + 9219330735502402840))) - var_18)));
    var_21 = -755352939;
    var_22 = (((((-(755352959 & var_16)))) <= 4038686525));
    var_23 = ((((755352960 != 3550759691) | -var_2)));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_24 = (min((((!((max((arr_2 [i_0]), 14016)))))), ((-(max((arr_0 [i_0]), -8454436837039862103))))));
        var_25 = -1;
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_26 = ((max(((-(arr_3 [6])), (arr_6 [i_1])))));
        var_27 = ((-9080895807749968884 ? (((((!(arr_3 [i_1]))) && ((min(var_0, (arr_5 [i_1]))))))) : ((max((!-5801), (4393050642548400800 && 1))))));
        arr_7 [i_1] &= var_12;
    }
    for (int i_2 = 1; i_2 < 8;i_2 += 1)
    {
        var_28 += (max((max((~var_1), (((arr_6 [i_2]) | var_14)))), (arr_9 [i_2])));
        var_29 = (((min((arr_9 [i_2]), (arr_6 [0])))) >= 2147483642);
    }
    #pragma endscop
}
