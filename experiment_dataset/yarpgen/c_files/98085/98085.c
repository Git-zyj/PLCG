/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_10 = ((!((((arr_1 [i_0]) * (arr_1 [i_0]))))));
        var_11 = ((arr_0 [i_0]) && (-35 ^ 63));
        var_12 &= (((arr_0 [12]) || ((min(var_5, var_3)))));
    }
    var_13 = 1;
    var_14 = (((var_8 ? var_8 : 49)));
    var_15 += (((((((min(var_8, -2154491221587242008))) ? (var_3 || var_5) : (var_1 || 2154491221587242008)))) ? ((var_4 << (var_2 - 1840493866))) : 3336714081));
    var_16 = var_5;
    #pragma endscop
}
