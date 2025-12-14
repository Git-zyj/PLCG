/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += -var_5;
    var_11 = 50;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0 - 4] [i_0]);
        var_12 = ((112 ? ((((!(arr_0 [i_0]))))) : ((var_7 ? -112 : (arr_1 [i_0] [i_0])))));
    }
    #pragma endscop
}
