/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0] [i_0]) ? ((min(((((arr_0 [i_0] [i_0]) > 4294967283))), ((-54 % (arr_0 [i_0] [5])))))) : (arr_1 [i_0] [i_0])));
        arr_3 [i_0] [i_0] = var_4;
        var_17 = (min(((((-2147483647 - 1) + 2147483646))), (min((-2147483647 - 1), (min((arr_0 [i_0] [2]), -2147483646))))));
    }
    var_18 = (((-2147483647 - 1) >= ((((-2147483640 ? var_12 : var_5)) & (((!(-2147483647 - 1))))))));
    #pragma endscop
}
