/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_19 = (max(var_19, (((255 + 3570723254) ? ((((31 ? (arr_0 [i_0] [i_0]) : var_9)) - (((min(var_16, var_14)))))) : (((~(arr_1 [i_0]))))))));
        var_20 *= (((max(-31, 340065506))) ? (((var_1 ? ((min(170, 8689))) : -var_15))) : ((7580 ? -31 : 1078459661)));
        var_21 *= (min(((min((!var_16), (max(1078459664, 33))))), (min(((var_9 ? var_3 : -31)), (arr_0 [13] [i_0])))));
    }
    var_22 = (((-6 || 873075760) && ((((~var_3) - (var_10 || var_10))))));
    var_23 = (min(((((min(2205158188501874901, (-32767 - 1)))) ? ((var_8 ? var_8 : var_13)) : (32767 % 59))), var_13));
    #pragma endscop
}
