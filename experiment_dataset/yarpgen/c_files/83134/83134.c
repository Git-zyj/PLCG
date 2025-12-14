/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((((((0 & (arr_0 [i_0 + 1])))) ? (arr_1 [i_0 - 1]) : (((arr_1 [i_0]) ? 1 : var_1))))) || var_5));
        var_11 = (max(var_11, (((((((var_1 || (arr_1 [i_0]))))) ? (arr_0 [1]) : 1)))));
        var_12 = (max(var_12, (((((min(29, ((max((arr_0 [10]), (arr_0 [i_0]))))))) ? (arr_0 [i_0]) : ((((arr_0 [i_0 + 2]) || (arr_0 [i_0 + 2])))))))));
        var_13 = ((~((max((arr_0 [i_0 - 1]), (arr_1 [i_0 + 2]))))));
    }
    var_14 = ((((min(var_3, -var_7))) ? ((~((32761 ? 2890476983596210828 : 1)))) : var_3));
    var_15 = var_8;
    #pragma endscop
}
