/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((max(((min(var_16, 1))), ((1 ? 224 : -1258510399))))) ? 0 : ((((max(2308097621, var_5))) ? -1 : -var_17))));
    var_21 = ((var_3 != (var_16 && var_14)));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_22 = (max(((((((1 ? var_6 : 1))) ? (((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0]))) : (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0])))))), ((((!(arr_0 [i_0]))) ? (((arr_1 [i_0]) ? 4214480662 : (arr_0 [i_0]))) : ((max(var_18, var_15)))))));
        arr_2 [i_0] [i_0] = min((((arr_0 [i_0]) * (min(1, 4821572)))), -var_2);
    }
    #pragma endscop
}
