/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 2062859533554598186;
    var_15 = (-2055593939011582029 / -6197681288675408911);

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = (min(((var_8 ? var_11 : (arr_0 [i_0 - 2]))), (((arr_1 [i_0 - 2]) / (arr_2 [i_0 + 1] [i_0 + 1])))));
        var_16 = (min((991837242316237210 + 6197681288675408911), (((((max((arr_1 [i_0]), var_3))) ? (((arr_0 [i_0 + 1]) << (2198889037824 - 2198889037813))) : var_6)))));
        var_17 ^= arr_0 [i_0 - 2];
        arr_4 [9] = arr_1 [i_0];
    }
    #pragma endscop
}
