/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 ^= ((~((((max(24, 55807))) ? ((~(arr_0 [i_0] [i_0]))) : (52774 - var_1)))));
        var_17 = (max(((((arr_1 [6] [i_0]) || var_0))), (max(10, 15646334043239158590))));
        var_18 = (((((~(~var_9)))) ^ 8173375057492591335));
    }
    var_19 ^= ((9223372036854775780 > (max(var_4, (max(var_11, 19))))));
    #pragma endscop
}
