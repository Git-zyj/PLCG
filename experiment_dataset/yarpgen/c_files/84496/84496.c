/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((((1 ? (arr_1 [i_0 - 1] [7]) : -943594116))) ? ((-259042301987901592 ? (arr_1 [i_0 + 1] [i_0]) : var_14)) : ((9223372036854775807 ? 9223372036854775807 : 1))));

        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            arr_5 [i_0] = -854589862379268338;
            arr_6 [i_0] [1] [i_0] = 854589862379268338;
            var_15 = -854589862379268317;
            var_16 = (min(var_16, (arr_0 [i_0 + 2])));
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                var_17 = ((arr_3 [i_0 + 3] [i_0] [i_0 + 2]) ? (arr_10 [11] [i_0 - 1] [11] [11]) : ((9223372036854775807 << (854589862379268317 - 854589862379268317))));
                var_18 = (((arr_10 [i_0] [i_2] [i_3] [i_2]) ? (arr_10 [i_0] [i_0] [i_2] [i_3]) : -9223372036854775807));
            }
            for (int i_4 = 2; i_4 < 12;i_4 += 1)
            {
                var_19 -= (((arr_8 [8]) & ((489968817669942609 >> (9223372036854775807 - 9223372036854775798)))));
                var_20 = ((-(arr_9 [i_0])));
            }
            var_21 = ((~(!255)));
            var_22 = ((arr_3 [i_0 + 1] [i_0 + 1] [i_2]) != (arr_10 [i_0 - 1] [i_2] [i_2] [i_2]));
            var_23 *= ((!(arr_8 [i_0 + 1])));
        }
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            var_24 ^= ((-854589862379268317 * (arr_3 [i_0 + 3] [i_0 + 1] [i_0 + 1])));
            arr_15 [i_0] = (arr_12 [i_0 + 2] [i_0 - 1] [i_5]);
        }
    }
    for (int i_6 = 1; i_6 < 10;i_6 += 1) /* same iter space */
    {
        var_25 ^= (((arr_4 [i_6] [i_6 + 3] [i_6 + 2]) ? ((((arr_1 [i_6 + 1] [i_6 + 2]) != (arr_17 [i_6 + 1] [i_6 + 2])))) : (arr_1 [i_6 - 1] [i_6 + 1])));
        var_26 = ((489968817669942609 ? (((((!192) > -854589862379268326)))) : (arr_12 [i_6] [i_6 + 3] [i_6])));
        var_27 = (max((arr_11 [i_6] [i_6]), (((max(91, -5880914335614136666)) | var_9))));
        var_28 &= (min(((((min(52, (arr_17 [i_6 + 1] [i_6])))) ? (arr_1 [i_6] [i_6 + 2]) : (arr_8 [i_6]))), ((((arr_1 [i_6 + 1] [i_6 + 3]) || 113)))));
    }
    for (int i_7 = 1; i_7 < 10;i_7 += 1) /* same iter space */
    {
        var_29 = (min(-1, (arr_3 [8] [1] [11])));
        var_30 *= (max(((-((854589862379268338 ? 0 : (arr_13 [i_7 + 1] [i_7 + 1]))))), (min((((arr_9 [8]) ? var_6 : 192)), 1))));
    }
    var_31 += 1;
    var_32 = (max((min((var_4 && 9223372036854775807), (var_10 || -6688655514046462724))), var_9));
    #pragma endscop
}
