/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((-(var_6 >= var_13))) <= var_11));
    var_19 = (max(var_19, ((min(((-((var_16 ? 61 : 18446744073709551615)))), var_9)))));
    var_20 *= ((var_4 ? var_3 : var_0));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_21 = 184;
        var_22 = ((!(arr_1 [i_0 - 1] [i_0 - 2])));
        var_23 = (!-185);
    }
    #pragma endscop
}
