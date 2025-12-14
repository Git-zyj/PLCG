/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_15 = (((((((max(-122, 103)))) % var_3)) >= 1426813829));
        arr_3 [i_0] &= (min((min((min(16435872798518031006, -64)), var_10)), (65535 ^ 48)));
    }
    var_16 = (max(var_16, 103));
    var_17 = (min(var_17, var_0));
    #pragma endscop
}
