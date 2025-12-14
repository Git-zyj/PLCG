/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_7 ? ((max(var_17, ((534604413 ? var_10 : var_12))))) : ((((var_6 ? var_14 : var_11)) ^ 6055662681034935482))));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_20 &= (min(11, 10865));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_21 = var_17;
            arr_4 [i_0] = 73;
            var_22 += ((!(arr_0 [i_0 - 1] [10])));
        }
    }
    var_23 = var_1;
    #pragma endscop
}
