/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_18 *= ((1 * (var_8 > 0)));
        var_19 *= (((arr_0 [i_0]) << (((arr_0 [i_0]) >> (((arr_1 [2]) + 686960309))))));
    }
    var_20 = max(136, 24488);
    #pragma endscop
}
