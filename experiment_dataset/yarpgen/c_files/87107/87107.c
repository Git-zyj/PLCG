/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, 5456381747456117907));
    var_13 ^= (255 >> (var_6 + 136));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_14 *= (max((arr_2 [0]), 1849506580));
        var_15 = (min(var_15, ((min(((-(((arr_0 [10] [6]) ? (arr_2 [4]) : (arr_0 [1] [i_0]))))), (((!((((arr_0 [14] [i_0]) ? var_11 : (arr_3 [i_0 + 2] [1]))))))))))));
    }
    #pragma endscop
}
