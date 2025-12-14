/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_2 [0] &= (9223372036854775807 ? -499782969 : 6605);
        arr_3 [i_0] = var_15;
        var_19 = ((-9223372036854775801 ? 65517 : (arr_0 [i_0 - 1])));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        arr_7 [1] = (((arr_0 [i_1 - 1]) ? 9223372036854775801 : (((arr_6 [4]) ? var_16 : 0))));

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_20 = (min(var_20, (((-9223372036854775807 ? (((arr_5 [i_1 - 2] [i_2]) & (arr_5 [i_2] [i_1]))) : (arr_5 [i_1 - 1] [i_1 + 1]))))));
            arr_10 [i_1 - 1] [i_2] = ((((9223372036854775801 ? 2986 : 2982)) % 2982));
            var_21 = ((~(arr_0 [i_2])));
            var_22 = ((~(arr_1 [i_1 - 1])));
            var_23 = (max(var_23, (((arr_4 [i_1 - 2]) ? (arr_9 [i_1 + 1] [i_1 + 1] [i_1]) : 9))));
        }
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
            {
                var_24 = (~var_7);
                var_25 = (min(var_25, ((((127 ? 1 : 2986))))));
                arr_17 [i_1] [i_1 + 1] = (arr_8 [i_1] [i_3 - 1] [i_4]);
                var_26 &= 3544289280;
            }
            for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
            {
                arr_21 [i_1] [i_1 + 1] [i_1 - 1] &= (((((4294967280 ? 1 : 4294967279))) ? (9223372036854775795 || 4203575225310444320) : (arr_16 [i_5] [i_3] [i_1] [i_1])));
                var_27 = (((arr_11 [8] [i_3 + 1] [i_1 - 2]) % (arr_1 [i_1 + 1])));
            }

            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                var_28 = (min(var_28, (~-894542033)));
                arr_24 [i_1 - 1] [i_1 - 1] [i_6] [i_3 + 1] = (((arr_18 [i_1 - 2]) ? (arr_18 [i_1 - 2]) : var_9));
            }
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                var_29 = ((27039 == (arr_1 [i_3 + 1])));
                var_30 = (min(var_30, (arr_5 [i_1 - 1] [i_3 + 1])));
            }
            var_31 ^= (~102);
        }
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            var_32 = (max(var_32, -34));
            var_33 *= (arr_11 [i_1] [i_8] [i_8]);
        }
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            arr_34 [i_1] |= ((((((arr_5 [i_9] [i_1]) * 38))) ? (arr_9 [i_9] [i_9] [i_1 + 1]) : 255));
            arr_35 [i_9] [i_9] = (arr_28 [12] [i_1 + 1]);
            var_34 ^= 32;
            arr_36 [i_9] [i_9] = 13194139533312;
        }
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 22;i_10 += 1)
    {
        var_35 = (((arr_37 [i_10]) ? (arr_37 [i_10]) : (arr_37 [i_10])));
        arr_39 [i_10] [i_10] = (5783172377602470277 ? -9223372036854775801 : 27042);
    }
    #pragma endscop
}
