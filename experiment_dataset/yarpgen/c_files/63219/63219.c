/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((min((~var_11), var_16)) + 2147483647)) >> (((12 & 49065) >> ((var_13 ? var_15 : var_0))))));
    var_18 = var_6;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (~107);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_19 = ((~(arr_3 [7] [i_1])));
            arr_6 [i_1] = -3078630643946887426;
            arr_7 [i_1] [i_1] = (((-3078630643946887426 < (arr_1 [i_0 - 2]))) ? (arr_4 [i_0] [i_1]) : var_6);
            var_20 = (min(var_20, ((var_4 + ((148 ? (-9223372036854775807 - 1) : -162500557))))));
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_21 = ((arr_0 [i_0 - 1]) + (arr_0 [i_0 - 1]));
            arr_10 [16] [16] [i_2] = var_14;
        }
        var_22 = ((var_3 ? var_4 : var_9));
        arr_11 [i_0] [i_0] = ((-(arr_4 [i_0] [i_0])));
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        arr_14 [i_3] [i_3] = ((+(min((arr_12 [i_3] [i_3]), (arr_13 [i_3])))));
        var_23 ^= ((-(((-2147483647 - 1) ? (((0 - (arr_8 [i_3] [i_3])))) : (max(var_7, 94))))));
        arr_15 [i_3] [i_3] = ((((((6106726092888588753 ? var_11 : 0))) ? 8918475380759187378 : (min((arr_4 [i_3] [i_3]), 4535369198077298445)))));
    }
    #pragma endscop
}
