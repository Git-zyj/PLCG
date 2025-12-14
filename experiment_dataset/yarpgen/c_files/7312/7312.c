/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        arr_2 [1] [i_0] = (arr_1 [i_0] [i_0]);
        var_13 = 8535081053600153876;
        arr_3 [11] = var_5;
    }
    var_14 = 9911663020109397757;

    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_15 += ((((((arr_6 [i_1]) ? (arr_6 [i_1]) : (arr_6 [i_1])))) ? var_2 : (((((((arr_4 [11] [i_1]) / 1835008))) ? (max((arr_6 [i_1]), 112)) : 25)))));
        arr_7 [i_1] [i_1] = (arr_5 [i_1]);

        /* vectorizable */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_16 = (((arr_5 [i_1]) ? ((((arr_8 [i_1] [i_1] [i_2]) ? (arr_9 [i_1] [i_1] [i_2]) : (arr_4 [9] [9])))) : 7));
            arr_11 [i_2] [i_1] = ((var_11 ? 4602678819172646912 : (arr_4 [i_1] [i_1])));
        }
        arr_12 [i_1] [i_1] = var_8;
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 13;i_3 += 1)
    {
        var_17 = ((((var_4 ? (arr_1 [i_3 - 1] [i_3 + 1]) : var_0)) | (arr_0 [i_3 + 1])));
        arr_15 [i_3 - 1] = -var_3;
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            arr_21 [i_4] = ((233 ? 8535081053600153883 : 16323213987797827062));
            var_18 = ((26 ? 21 : (arr_9 [i_4] [10] [i_5])));
            var_19 = (((((((arr_6 [13]) ? var_8 : (arr_18 [i_4] [i_4])))) ? ((-(arr_10 [i_4] [i_5]))) : (arr_10 [i_4] [i_5]))));
        }
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            var_20 = ((((min(246, -4602678819172646922)) > ((var_10 ^ (arr_10 [i_4] [i_6]))))));

            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                var_21 = ((((min(2147483647, ((min(var_2, 25630)))))) ? (((((21 || (arr_8 [i_4] [18] [i_4]))) && var_9))) : (((((18446744073709551584 ? 9911663020109397727 : (arr_20 [i_6]))) != ((2147483638 ? (arr_20 [i_4]) : 6241611846669812138)))))));
                var_22 = (min(((((min((arr_10 [i_6] [0]), -9223372036854775802))) ? (((min(var_4, (arr_20 [17]))))) : (-38525835 * var_6))), (((min((arr_22 [16] [i_6] [i_7]), 9223372036854775800))))));
                var_23 = ((+(((arr_24 [i_7] [i_7] [i_7]) ^ var_8))));
            }
        }
        var_24 = (max(var_24, ((min((arr_19 [1] [1] [i_4]), ((min((arr_4 [i_4] [i_4]), (arr_4 [i_4] [i_4])))))))));
        var_25 = ((((!(arr_24 [i_4] [i_4] [i_4])))) - ((((var_7 ? -2147483634 : var_2)))));
    }
    #pragma endscop
}
