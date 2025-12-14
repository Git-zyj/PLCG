/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;
    var_12 = ((((!(var_2 / var_5)))));

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (1 <= 20);
        var_13 = (min(var_13, -67));
    }
    var_14 = var_5;
    #pragma endscop
}
