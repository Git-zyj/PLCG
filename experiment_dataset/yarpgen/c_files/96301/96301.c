/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_10 |= arr_0 [i_0];
        var_11 = ((((~(min(11030490629588922166, 11030490629588922182)))) * var_2));
    }
    var_12 = (1 ^ -4943926811669655338);
    #pragma endscop
}
