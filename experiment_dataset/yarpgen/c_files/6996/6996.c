/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += var_12;
    var_17 = var_13;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = (((((-508314174 ? (((arr_2 [i_0]) / var_3)) : (!var_13)))) ? ((-(arr_0 [i_0]))) : (((!(((var_7 ? (arr_3 [i_0] [i_0]) : var_4))))))));
        var_18 = var_13;
        var_19 = -508314171;
        var_20 += (max(var_1, (((((0 ? (arr_0 [2]) : var_8))) ? (~var_9) : (((48221 ? 50937 : -91)))))));
        arr_5 [i_0] [i_0] = (min(((var_14 ? ((var_2 ? var_12 : var_2)) : (!91))), ((((arr_1 [i_0]) >= (((11187950510577809290 ? 1 : var_13))))))));
    }
    var_21 = var_2;
    #pragma endscop
}
