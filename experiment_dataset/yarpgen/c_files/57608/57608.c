/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_17 = (min(var_17, var_8));
        var_18 += (max(-9223372036854775807, -1929194087));
        var_19 = (min(var_19, (!1792)));
        arr_4 [8] [1] = ((((!(arr_3 [i_0 - 2] [i_0]))) ? ((41 >> (3700643100 - 3700643085))) : ((max(-1764, 18632)))));
        arr_5 [i_0 + 1] [i_0 - 1] = var_3;
    }
    var_20 = (min(var_20, ((max(var_9, (((~((var_4 >> (var_8 + 25538)))))))))));
    var_21 = var_2;
    var_22 = ((~((var_10 ? (24735 / 217) : var_7))));
    #pragma endscop
}
