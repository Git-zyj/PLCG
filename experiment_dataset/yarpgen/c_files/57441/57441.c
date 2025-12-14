/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= var_9;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_11 = (min((65535 % 32763), (~var_6)));
        arr_2 [i_0] = (min(((~(arr_0 [i_0]))), (!var_6)));
    }
    var_12 = (min(var_12, ((max(-6102, 10500)))));
    #pragma endscop
}
