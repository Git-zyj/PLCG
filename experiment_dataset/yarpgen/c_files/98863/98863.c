/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= var_0;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            var_15 ^= 14486;
            var_16 = (min(var_16, (arr_3 [i_0] [i_0])));
        }
        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            var_17 = (max(var_17, ((((var_6 ^ var_3) - 14481)))));
            var_18 = (max(var_18, (var_1 != var_8)));
            arr_8 [i_2] = (~1);
        }
        var_19 *= ((-((25346 ? var_0 : var_7))));
        var_20 *= ((-1 ? ((var_9 ? 1 : 28)) : 236));
    }
    var_21 -= (min((var_2 != 240), var_12));
    #pragma endscop
}
