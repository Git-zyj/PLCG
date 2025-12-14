/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_17 = (arr_1 [5]);
        var_18 = ((((((arr_1 [i_0]) || 1))) % (arr_0 [i_0])));
        var_19 = (arr_1 [6]);
        var_20 ^= (arr_1 [19]);
    }
    var_21 -= ((var_15 == ((var_2 ? 18 : ((max(var_8, var_15)))))));
    var_22 &= min(var_8, var_15);
    #pragma endscop
}
