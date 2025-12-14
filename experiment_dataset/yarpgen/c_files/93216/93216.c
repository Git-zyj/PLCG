/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, 15713072559882062075));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_15 = (~6);
        var_16 -= 1;
        arr_2 [i_0] = ((!(arr_1 [i_0])));
        var_17 ^= (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_18 ^= (((arr_5 [i_1]) >> ((((arr_4 [i_1] [i_1]) && (arr_5 [i_1]))))));
        var_19 = 281474976710655;
    }
    var_20 = (max(var_20, (!var_0)));
    #pragma endscop
}
