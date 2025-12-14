/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((max(var_7, var_15)));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] |= var_9;
        var_17 = (min(var_17, (((+(((arr_2 [i_0]) ? (arr_1 [i_0] [i_0]) : var_9)))))));
    }
    #pragma endscop
}
