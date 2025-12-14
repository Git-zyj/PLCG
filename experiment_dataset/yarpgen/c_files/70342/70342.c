/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, ((min(var_3, var_14)))));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (min((((arr_0 [i_0 + 2]) ^ (arr_1 [i_0 + 2] [i_0]))), ((~(arr_1 [i_0 + 2] [i_0 + 1])))));
        var_17 -= var_5;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_18 ^= (~var_11);

        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            var_19 = (((~-6097568475658291421) - ((((arr_4 [i_1]) - 1)))));
            var_20 = var_15;
            var_21 = (!61631);
            var_22 = 42892;
            var_23 = ((var_3 < (var_3 != var_15)));
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            var_24 = var_8;
            arr_12 [i_1] [i_3] = (var_7 * var_13);
            var_25 ^= (-1 && var_3);
        }
    }
    #pragma endscop
}
