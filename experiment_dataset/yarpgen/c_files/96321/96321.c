/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 20887;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_11 = (max(var_11, -9830));
        var_12 = ((var_9 ? (var_0 != 61) : (((!(((15707153120919218311 ? var_3 : -2467977848611134149))))))));
        var_13 &= (arr_0 [i_0] [i_0]);
    }
    #pragma endscop
}
