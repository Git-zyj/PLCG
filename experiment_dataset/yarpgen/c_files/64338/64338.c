/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (~7027029063117274413);

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        var_11 = ((((max((arr_1 [i_0 - 1]), var_5))) && (424391110 ^ 22479)));
    }
    #pragma endscop
}
