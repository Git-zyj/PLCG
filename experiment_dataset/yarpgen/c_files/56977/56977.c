/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(-910012909, 40750));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_11 = (max((max(3400946474069176810, 14756826056477568724)), (3038902889207442290 - var_1)));
        arr_4 [15] = ((((max(((((-2147483647 - 1) <= var_1))), var_5))) && (((-(arr_2 [i_0] [8]))))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_7 [9] [9] = ((var_9 && ((min((arr_2 [i_1] [i_1]), (arr_2 [i_1] [i_1]))))));
        var_12 = (((-(max(var_5, var_0)))));
        var_13 = (min(var_13, (arr_3 [i_1])));
        var_14 = (max(var_14, ((((((arr_1 [i_1]) >= var_7)) && ((min(var_4, var_0))))))));
    }
    var_15 = ((3891 ? 8996894551119226845 : 26497316));
    var_16 = (!3689918017231982892);
    var_17 = -1;
    #pragma endscop
}
