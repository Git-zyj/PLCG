/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (((((-var_18 ? ((var_7 ? -6 : var_2)) : (var_14 <= var_7))) | (max(((var_6 ? 79 : 4611686018427387903)), 225)))))));
    var_21 = ((-((var_7 / (var_2 | var_19)))));

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((~var_19) ? 50 : ((~(var_2 | var_1)))));
        var_22 |= var_6;
    }
    var_23 = (min((max(2481987197, ((var_8 ? var_0 : 9463893347714765509)))), ((((var_12 | var_4) ? -var_6 : var_10)))));
    var_24 = var_10;
    #pragma endscop
}
