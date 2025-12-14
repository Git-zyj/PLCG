/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += ((-16027 ? (((1 ? var_16 : var_4))) : (max((var_12 / -25), (min(1993612534, 1993612537))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_21 = 17316410381335579342;
        var_22 = ((var_18 || ((min((arr_2 [i_0]), 1)))));
    }
    var_23 = ((var_10 > (((var_11 ? var_3 : (max(var_14, var_6)))))));
    var_24 = (min(((~((var_0 ? 32505856 : 49446)))), (((((min(21, var_17))) ? var_4 : var_13)))));
    var_25 = (((max((var_6 * 1), var_0)) != var_5));
    #pragma endscop
}
