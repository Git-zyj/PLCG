/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        var_18 = (max(var_18, ((max(((-((var_12 ? 1436894366 : var_13)))), (((((371817919 << (29162 - 29162))) <= 1432))))))));
        var_19 = (min(var_19, ((max((arr_2 [i_0] [i_0]), 89)))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        var_20 = var_6;
        arr_5 [i_1] = (((~252) ? 17179836416 : 51471));

        for (int i_2 = 3; i_2 < 15;i_2 += 1)
        {
            var_21 ^= 202;
            var_22 = 238;
            arr_10 [i_1 + 1] [i_1] = (i_1 % 2 == zero) ? ((((((arr_9 [i_1] [i_1 - 1] [i_2 + 1]) + 2147483647)) >> 29))) : ((((((((arr_9 [i_1] [i_1 - 1] [i_2 + 1]) - 2147483647)) + 2147483647)) >> 29)));
        }
    }
    var_23 = (max(var_23, (((var_6 > (max(((26345 ? var_7 : var_9)), var_16)))))));
    var_24 = (8872185623283448788 <= var_7);
    #pragma endscop
}
