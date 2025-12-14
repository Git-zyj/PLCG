/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_13;
    var_20 |= (min((((((var_7 ? var_2 : var_5))) ? (min(var_7, var_13)) : var_14)), var_1));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_21 = (min(var_21, (arr_1 [i_0])));
        var_22 |= (((((var_18 ? (((arr_1 [11]) ? 3 : -985316955)) : (((arr_1 [i_0]) - var_18))))) ? (arr_1 [i_0]) : ((((max((arr_1 [1]), 18446744073709551615))) ? ((~(arr_0 [i_0]))) : ((~(arr_1 [i_0])))))));
    }
    #pragma endscop
}
