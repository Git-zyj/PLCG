/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 5;
    var_13 = var_10;
    var_14 = (~-var_5);

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_15 = ((0 << (((max(((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))), (max((arr_0 [i_0]), 4096)))) - 4294967243))));
        var_16 = (min(var_16, var_2));
    }
    var_17 = ((((min((9223372036787666944 & 74), ((min(var_3, var_4)))))) ? var_1 : ((~(-994570246 <= var_6)))));
    #pragma endscop
}
