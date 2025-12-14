/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -var_6;
    var_12 |= (((var_9 + var_0) - var_10));
    var_13 = var_8;

    for (int i_0 = 2; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = (max((((min(var_8, 0)) - (((-(arr_2 [9])))))), ((max(29, (((arr_2 [i_0]) ? 58 : (arr_0 [i_0] [i_0]))))))));
        var_14 &= (+(min((arr_3 [i_0] [15]), (min((arr_3 [i_0] [0]), 9223372036854775803)))));
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_15 = (max(var_15, var_10));
            var_16 *= ((+((((arr_10 [i_1 - 1] [i_2]) && (arr_10 [i_1 + 2] [i_1 + 2]))))));
            var_17 = ((-1 + 0) ? var_5 : 33);
            arr_11 [i_1] [i_1] = var_9;
        }
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            arr_15 [i_1 - 2] [i_1 - 2] [i_1 - 2] = ((1 ? -31 : -99));
            arr_16 [i_1] = ((-((-885480990 ? 52547 : -1889741857011760805))));

            /* vectorizable */
            for (int i_4 = 3; i_4 < 13;i_4 += 1) /* same iter space */
            {
                arr_19 [i_1] [i_1] [6] [i_1 - 2] = (arr_3 [i_1 - 1] [i_1 + 2]);
                arr_20 [i_4] [i_3] [i_1] = (arr_3 [i_4 + 1] [i_1 - 1]);
                var_18 *= (arr_8 [i_1 + 1] [i_3] [i_4 + 4]);
                arr_21 [i_1] [i_1] [i_1] |= ((var_7 / ((var_4 ? var_6 : 110))));
            }
            /* vectorizable */
            for (int i_5 = 3; i_5 < 13;i_5 += 1) /* same iter space */
            {

                for (int i_6 = 3; i_6 < 15;i_6 += 1)
                {
                    var_19 = (min(var_19, var_0));
                    var_20 = (((arr_6 [i_1 - 2]) ? (arr_25 [i_1 + 1] [i_3] [i_3] [i_6 + 2] [13] [i_6]) : (arr_25 [i_1] [i_3] [i_3] [i_6] [i_5] [i_5])));
                }
                arr_26 [i_1 + 1] = (((((arr_2 [i_1 - 2]) ? var_8 : var_8)) ^ (arr_14 [i_5 + 3] [i_3])));
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                arr_30 [i_1 - 1] [i_3] [i_7] [i_1 - 2] = (arr_5 [8]);
                arr_31 [i_1] [i_3] [i_7] = ((var_1 ? (arr_29 [i_7] [i_1] [i_7] [i_3]) : (arr_24 [i_1 + 1] [i_3])));
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                arr_36 [11] [i_3] [i_1] = ((arr_13 [i_1 + 2] [i_1 + 2]) == (arr_18 [i_1 - 2] [i_1 + 1] [i_1 + 2]));
                var_21 = (((262143 + 8649231386912282227) != (((~(arr_23 [i_1] [i_3] [i_8]))))));
                arr_37 [i_8] [i_3] |= ((var_3 || ((((arr_23 [i_1] [i_3] [0]) >> (121 - 117))))));
            }
        }
        var_22 = (arr_18 [i_1] [i_1] [i_1]);
    }
    var_23 = (((((min(var_1, var_9)))) ? var_9 : ((((var_1 != (var_9 == var_6)))))));
    #pragma endscop
}
