/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~var_0);
    var_15 = var_2;
    var_16 = (max(((max(var_3, var_10))), ((~(max(var_0, var_13))))));

    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
        {
            var_17 = (max(var_17, (((+(((-9223372036854775807 - 1) ? (arr_3 [i_1] [22]) : var_11)))))));
            arr_5 [i_0] = (arr_1 [i_0] [i_0]);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
        {
            var_18 = (var_6 ? (var_4 || var_10) : var_11);
            var_19 |= (((arr_6 [0] [0]) || var_8));
            var_20 = (((((var_7 ? var_6 : 7))) ? var_13 : (arr_6 [i_0] [i_0])));
            var_21 -= (((arr_1 [i_0 - 3] [i_0]) * var_4));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
        {
            var_22 = var_3;
            arr_12 [i_0] = ((var_1 ? (arr_10 [i_0] [i_0 - 1]) : (arr_3 [i_0 - 2] [i_0])));

            for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
            {
                var_23 *= (arr_2 [i_3]);
                var_24 ^= (((arr_2 [i_3]) ? (arr_2 [i_3]) : (arr_2 [i_3])));
            }
            for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
            {
                var_25 = (((arr_9 [i_0 - 3] [i_0 - 3]) | (arr_16 [14] [i_3])));
                var_26 = (max(var_26, (~var_9)));
            }
            var_27 ^= arr_17 [i_0] [i_3] [i_3];
        }
        for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
        {
            var_28 = (min(var_28, ((((arr_13 [i_0 - 2] [i_0 - 1] [i_0 - 2] [i_0 - 3]) / (var_4 != var_8))))));
            var_29 = (arr_19 [i_0]);
        }
        arr_21 [i_0] = (((((65535 ? 16103985998059733398 : (820359239 % 38)))) ? 4294967276 : 18446744073709551615));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        arr_26 [i_7] = var_8;
        var_30 = (arr_16 [22] [i_7]);
        arr_27 [i_7] = ((!(arr_7 [i_7] [i_7])));
        var_31 = (max(var_31, ((((arr_6 [i_7] [i_7]) || 96)))));
    }
    var_32 ^= var_12;
    #pragma endscop
}
