/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_11 = (arr_0 [i_0] [i_0 - 1]);
        var_12 = ((~(arr_0 [i_0 + 2] [i_0 - 2])));
        arr_2 [i_0] [i_0] = (arr_1 [i_0]);
        var_13 = (min(var_13, (arr_1 [i_0 - 1])));
    }
    #pragma endscop
}
