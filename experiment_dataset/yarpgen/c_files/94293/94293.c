/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 8257;
    var_16 = 1;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_17 = (~-8258);
        var_18 ^= -11768;
    }

    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_19 = (arr_0 [i_1]);
        arr_6 [i_1] [i_1] = -5199433348902955892;
        var_20 ^= ((-705731279087162548 & (((max((arr_5 [i_1]), (arr_5 [i_1])))))));
    }
    for (int i_2 = 2; i_2 < 22;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = 47;
        var_21 = 8282;
    }
    #pragma endscop
}
