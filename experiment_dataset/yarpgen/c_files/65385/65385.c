/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_13;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (((max(((min((arr_1 [i_0]), (arr_1 [i_0])))), -var_8)) == ((max((((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))), (arr_1 [i_0]))))));
        var_18 = ((1 << (((((arr_0 [i_0]) + ((var_14 ? (arr_0 [i_0]) : 1)))) - 358))));
    }
    var_19 = ((+((var_3 ? (var_12 || 1) : (~var_10)))));
    #pragma endscop
}
