/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_10 = ((~(arr_3 [i_0])));
        var_11 = (max(var_11, (((-((-(arr_2 [i_0]))))))));
    }
    var_12 = ((((((var_8 ? 4294967279 : 1)))) ? (((1 ? 132 : 104))) : ((-4294967291 ? var_6 : ((1 ? 5768528506978247418 : var_9))))));
    var_13 = ((((((((2367723565639956734 ? 136 : 145))) ? ((var_6 ? var_2 : 211)) : var_0))) ? 95 : (!var_6)));
    #pragma endscop
}
