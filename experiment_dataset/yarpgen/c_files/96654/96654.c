/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((30590 | ((22130 << (29003 - 28997)))));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_18 += var_16;
        var_19 = (max(var_19, ((min((arr_1 [8]), (((arr_1 [2]) % (arr_0 [0] [i_0 + 1]))))))));
        arr_2 [i_0] [i_0] = (arr_1 [i_0]);
    }
    var_20 = var_13;
    #pragma endscop
}
