/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 31908;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_21 = (min(var_21, ((max(33628, var_6)))));
        arr_3 [i_0] = 33620;
    }
    var_22 = var_12;
    #pragma endscop
}
