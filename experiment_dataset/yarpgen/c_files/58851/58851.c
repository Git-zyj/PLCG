/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_10 = (((arr_0 [i_0] [i_0]) >= (16128 / 4503599627370495)));
        var_11 = (min(var_11, ((min((arr_0 [i_0] [i_0]), (((arr_1 [i_0]) ? 4082995060446731291 : -4503599627370496)))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_12 = (max(var_12, (max(((((((4503599627370495 > (arr_3 [i_1])))) == (~var_7)))), var_6))));
        arr_4 [17] = var_3;
        arr_5 [i_1] [i_1] = (min((~var_4), ((~(((-555894087 < (arr_3 [i_1]))))))));
    }
    var_13 = (max(var_13, var_2));
    var_14 = var_2;
    var_15 = (max(var_15, var_0));
    var_16 = ((var_5 + (max(((min(26784, 22))), (var_3 / var_3)))));
    #pragma endscop
}
