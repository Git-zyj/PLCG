/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((var_14 ? var_5 : (max(var_14, 5997094665419472706))))) ? ((((var_2 ? var_10 : var_8)))) : var_8);

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_20 = (max(var_20, (arr_2 [i_0] [i_1])));
            var_21 = (min(var_21, ((max((((arr_4 [i_0 - 1] [i_0 - 1]) ? (arr_4 [i_0 + 3] [i_1]) : (arr_4 [i_0 + 3] [i_0]))), (((arr_4 [i_0 + 2] [i_1]) ? (arr_2 [i_0 + 3] [i_0 + 2]) : (arr_2 [i_0 + 1] [i_0 + 1]))))))));
            arr_5 [i_1] [i_0] = (max((((-(arr_3 [i_1])))), (((((max((arr_0 [i_1]), (arr_4 [i_1] [i_0]))))) > ((18446744073709551615 ? 18446744073709551615 : (arr_1 [i_0])))))));
            arr_6 [i_0] = var_10;

            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                var_22 |= ((((!(arr_10 [i_1] [i_0 - 1])))));
                arr_11 [i_0 + 1] [i_1] [i_2] = (min(15, (arr_2 [i_0] [i_0 + 2])));
            }
            /* vectorizable */
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                var_23 = 0;
                var_24 += (39644 >> 21);
            }
        }
        var_25 |= max((((-(arr_0 [i_0 + 3])))), (((-1860072329073291656 * var_11) - 1479169067)));
        var_26 *= arr_14 [i_0] [i_0] [i_0];
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    {
                        var_27 = (max((((((15960807222091545406 > (arr_4 [i_0 + 2] [i_4])))))), ((-(arr_14 [i_0] [i_0 + 2] [i_0 + 2])))));
                        arr_23 [i_4] [i_4] [i_4] [i_4] [i_4] [i_6] = (((((~(arr_1 [i_6])))) ? ((((((arr_16 [i_0 + 3] [i_4] [i_5]) ? (arr_19 [i_4] [i_6]) : (arr_21 [i_6] [i_5] [i_4] [4])))))) : (max((((arr_20 [i_4] [i_4] [i_4] [i_4] [i_4]) ? (arr_9 [i_0]) : 93)), (~18182952556732813286)))));
                        var_28 *= (arr_9 [6]);
                        var_29 = 8546;
                    }
                }
            }
        }
        var_30 = (130944 ? (((18446744073709551615 ^ 2368) ? (arr_4 [i_0 + 2] [i_0 + 2]) : ((3 + (arr_10 [i_0 - 1] [i_0]))))) : (arr_16 [i_0 + 1] [i_0 + 3] [i_0 + 3]));
    }
    var_31 = var_15;

    /* vectorizable */
    for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
    {
        var_32 = (max(var_32, (arr_1 [i_7])));
        var_33 = ((!(arr_1 [i_7])));
    }
    for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
    {
        arr_32 [i_8] = (-(arr_29 [i_8]));
        arr_33 [i_8] = max(((((((arr_19 [2] [i_8]) << (var_4 + 1244218263)))) < (max((arr_22 [i_8] [i_8] [i_8] [i_8]), -5240157173716781052)))), (((((arr_27 [i_8] [i_8]) - (arr_22 [i_8] [i_8] [i_8] [i_8]))) < (((((arr_19 [0] [0]) >= (arr_16 [i_8] [i_8] [i_8]))))))));
        var_34 = -56989;
        var_35 = ((-4160827709427126429 && (((var_17 ? (arr_14 [i_8] [i_8] [5]) : ((((arr_4 [i_8] [i_8]) ? (arr_15 [13] [i_8] [i_8]) : (arr_24 [i_8])))))))));
    }
    for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
    {
        var_36 = (max(var_36, ((((((25912 ? 14321425505271637607 : 264921129882100268)) / (4294836351 ^ 1481888863239204948)))))));
        arr_37 [i_9] = min((((arr_0 [i_9]) ? (arr_0 [i_9]) : (arr_0 [i_9]))), ((max((arr_0 [i_9]), (arr_0 [i_9])))));
    }
    #pragma endscop
}
