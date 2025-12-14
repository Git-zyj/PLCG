/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0 - 2] [i_0 - 1] = ((!((min(var_11, -228)))));
        var_14 = (0 - 19);
        var_15 = ((((-((-74 ? -9223372036854775804 : (arr_0 [i_0]))))) >= ((((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : 1)))));
        var_16 = max(((var_8 ? (var_1 & 65525) : (-751657524 & 25))), var_9);
    }
    var_17 = var_6;
    var_18 = ((var_10 + ((((min(524287, -524288)) + 21)))));
    #pragma endscop
}
