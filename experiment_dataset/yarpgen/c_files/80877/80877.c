/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((var_3 ? var_5 : var_6)));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_17 = (max(var_17, var_12));
        arr_3 [i_0] = (((((var_9 == (arr_1 [i_0])))) < (arr_1 [i_0])));
    }
    #pragma endscop
}
