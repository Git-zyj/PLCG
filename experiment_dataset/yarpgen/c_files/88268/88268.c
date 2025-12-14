/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((29 ? -116 : 206)));

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_19 = (min(var_19, (((((((arr_0 [i_0 + 2] [i_0 + 2]) != (arr_0 [i_0 + 2] [i_0])))) * (((!(arr_0 [i_0 + 2] [i_0 - 2])))))))));

        /* vectorizable */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            var_20 += 32767;
            var_21 = ((~(arr_1 [i_0 + 2] [i_1 + 1])));
        }
    }
    var_22 = (min((((~29307) % ((var_12 ? 30 : var_15)))), (((~759606048) ? ((var_9 ? var_1 : 30)) : (max(-759606048, var_1))))));
    #pragma endscop
}
