/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_18 &= (((arr_1 [8]) || (arr_1 [14])));
        arr_2 [i_0] [i_0] = ((-1535952554222350815 ? 1 : -6300246434369125018));
        var_19 = (((((0 ? 1 : -9153318424291031177))) ? (arr_1 [i_0]) : (((arr_1 [i_0]) | (arr_1 [i_0])))));
    }
    var_20 -= (max(var_8, ((((var_14 == var_9) ^ (min(var_0, var_1)))))));
    var_21 *= (((var_16 + 9223372036854775807) << ((((((((var_17 ? var_12 : var_16))) || var_17))) - 1))));
    #pragma endscop
}
