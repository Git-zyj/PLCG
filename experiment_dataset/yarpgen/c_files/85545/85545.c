/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((max(var_8, 2044)))));
    var_12 = (~-var_2);

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        arr_2 [6] [i_0 - 1] &= -30;
        arr_3 [i_0] = (((((var_3 ? 1 : ((max(770, -9223)))))) ? (arr_1 [i_0]) : (max((arr_1 [i_0]), var_2))));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_13 = (var_2 + 1152919305583591424);
            var_14 = (((((((var_4 ? (arr_1 [i_0]) : 2147483647)) ^ (-127 - 1)))) ? (((-2147483647 - 1) * 1)) : (max((!var_3), -var_2))));
        }
    }
    #pragma endscop
}
