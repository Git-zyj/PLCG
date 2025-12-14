/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-((((max(49, 0))) ? (var_17 * var_18) : var_11))));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_21 = var_12;
        var_22 += (1973765144 & 1342416464);
        arr_2 [i_0] = ((((((~(var_0 | var_16))) + 2147483647)) >> ((((min(1342416464, -1342416457)) != 0)))));
    }
    #pragma endscop
}
