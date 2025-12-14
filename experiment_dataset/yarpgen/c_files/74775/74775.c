/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_12;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 *= ((!((max(var_2, (((arr_2 [1]) ? var_7 : var_7)))))));
        arr_3 [i_0] |= 535115196;
        var_21 += (arr_2 [i_0]);
        var_22 = (max(var_22, (((-((max(var_8, -32763))))))));
    }
    #pragma endscop
}
