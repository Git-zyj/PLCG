/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = var_8;
        var_11 = (((1412530691 / var_3) ? (((!(arr_0 [i_0])))) : 24576));
    }
    var_12 = (!var_5);
    var_13 = ((~((-(-1 != 9509374628794611651)))));
    var_14 = (max(var_14, (!38128)));
    var_15 = (((min(var_3, var_1))));
    #pragma endscop
}
