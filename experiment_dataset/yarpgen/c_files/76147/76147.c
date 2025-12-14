/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_12 = (((max(var_1, 9223372036854775807)) >= (!5342660398263702103)));
        arr_2 [i_0] = ((((~(min(14306701361323575591, (arr_0 [i_0]))))) >> (((min((min(var_7, 68)), var_11)) - 55))));
        var_13 = (!((min((arr_1 [i_0]), (arr_1 [i_0])))));
        var_14 = (((min(((~(arr_1 [i_0]))), ((min(var_11, (arr_0 [i_0])))))) << (((((arr_0 [i_0]) ? var_9 : (arr_1 [i_0]))) - 1980714357))));
    }
    var_15 = 16883589430135989886;
    var_16 = var_6;
    var_17 = var_11;
    #pragma endscop
}
