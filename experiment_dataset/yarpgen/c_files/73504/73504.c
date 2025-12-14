/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_0));
    var_17 = (((!var_4) && (((!var_0) || (!var_11)))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_18 = (((((~(~var_6)))) ? (min((arr_2 [i_0] [i_0]), (arr_1 [i_0] [i_0]))) : (((((7976395182371074603 ? -7976395182371074603 : 1)))))));
        var_19 *= (((((arr_1 [i_0] [i_0]) ? 7976395182371074602 : (arr_1 [i_0] [i_0]))) == 127));
        var_20 = (max(var_20, var_6));
    }
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        var_21 -= ((!(((-(arr_5 [i_1 - 1]))))));
        var_22 = (max(var_22, (((((((1 ? (arr_3 [i_1]) : 0)))) >= ((min((1 > var_0), var_10))))))));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        arr_10 [i_2] [i_2] = var_1;
        arr_11 [i_2] = ((((~var_7) == (arr_8 [i_2]))));
    }
    var_23 = 3069057938342945524;
    var_24 = ((var_0 | (-127 - 1)));
    #pragma endscop
}
