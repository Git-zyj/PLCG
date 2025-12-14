/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    var_12 = ((var_2 ? var_8 : ((var_9 ? var_8 : var_6))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_2 [13] [i_0] = (arr_0 [i_0] [i_0]);
        arr_3 [21] = (max(1, 1));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_13 [i_3] [1] [1] [i_0] |= (max((arr_5 [i_0] [i_0] [i_0]), (arr_12 [22] [22])));
                        var_13 ^= (arr_7 [i_2]);
                        var_14 = (arr_10 [i_1] [i_1]);
                    }
                }
            }
        }
        arr_14 [i_0] [i_0] = ((+(((arr_10 [i_0] [i_0]) % (arr_6 [i_0] [i_0])))));

        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            var_15 = (max(var_15, -1));
            arr_18 [i_0] = (arr_0 [i_0] [i_4]);
            var_16 = ((+(((arr_16 [i_4]) ? (arr_16 [i_4]) : (arr_16 [i_4])))));
        }
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 22;i_9 += 1)
                    {
                        {
                            arr_35 [i_6] [i_6] [i_5] [i_8] [i_5] = (arr_34 [i_5] [i_5] [i_5] [i_8] [i_9]);
                            arr_36 [i_7] [i_8] [i_5] = (arr_6 [i_5] [i_6]);
                            var_17 = (((arr_31 [i_9 - 3] [i_5] [i_9] [i_9 + 2]) ? (((arr_34 [i_5] [i_9 + 1] [i_5] [i_9 + 1] [i_9 + 2]) ? (arr_31 [i_9 + 1] [i_5] [1] [i_9 - 1]) : (arr_34 [1] [i_9 + 2] [i_5] [i_9 - 3] [i_9 - 1]))) : (arr_34 [i_9] [i_9 - 1] [i_5] [i_9 - 1] [i_9 - 1])));
                        }
                    }
                }
            }
            var_18 -= ((!(arr_9 [i_5] [i_6] [i_6] [i_6])));
        }
        for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
        {
            var_19 = (((arr_28 [i_5] [i_5] [i_5] [i_5]) ? (((arr_28 [i_5] [i_5] [i_10] [i_10]) ? (arr_28 [i_5] [i_10] [1] [i_10]) : (arr_28 [i_5] [i_5] [i_10] [i_10]))) : ((var_4 ? (arr_28 [i_10] [i_10] [i_10] [i_10]) : (arr_28 [i_5] [i_5] [i_10] [i_10])))));
            var_20 = ((var_2 ? (((((((arr_1 [i_5] [i_5]) ? (arr_19 [i_5]) : (arr_31 [18] [i_5] [i_5] [i_10])))) ? (arr_0 [i_5] [i_10]) : (arr_8 [i_5] [19] [i_10] [i_10])))) : (arr_29 [i_5] [i_5] [i_5] [i_5] [i_10])));
            arr_39 [i_5] = (~1743142857568734973);
        }
        for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
        {
            arr_44 [i_5] [i_5] [i_11] = var_4;
            var_21 = (arr_38 [i_5]);

            for (int i_12 = 0; i_12 < 24;i_12 += 1)
            {
                arr_48 [i_5] = ((~(min((arr_12 [i_5] [i_12]), (((arr_26 [i_5] [i_11] [i_12]) ? (arr_31 [i_5] [i_5] [i_5] [i_12]) : (arr_25 [1] [i_11] [i_11])))))));
                arr_49 [i_5] [i_5] [i_12] = (-((-(arr_6 [i_5] [i_5]))));
                var_22 = (-160867346 & 18446744073709551615);
            }
            for (int i_13 = 1; i_13 < 23;i_13 += 1)
            {
                arr_52 [i_5] [i_5] [i_11] [i_5] = (max((min((arr_1 [i_13 - 1] [i_11]), (arr_51 [i_13 - 1]))), 1));
                var_23 ^= ((-(((arr_6 [i_13] [i_13 + 1]) ? (arr_26 [2] [2] [i_13 - 1]) : (arr_8 [i_5] [i_11] [i_5] [i_5])))));
                var_24 = (max(((~(arr_33 [i_5] [i_5] [i_13 + 1] [i_13] [i_13]))), ((var_10 | ((-(arr_26 [i_5] [i_11] [i_5])))))));
            }
            arr_53 [1] [1] [i_5] = (((~(arr_29 [i_5] [i_11] [i_5] [i_5] [i_5]))));
            arr_54 [i_5] [i_11] = (((min((arr_9 [i_5] [i_5] [i_5] [i_11]), var_3)) | (((122 ? 37 : 1193622639)))));
        }
        var_25 ^= (min((((arr_27 [i_5] [10] [i_5]) ? (arr_27 [i_5] [14] [i_5]) : (arr_27 [i_5] [16] [8]))), (arr_27 [i_5] [20] [i_5])));
        arr_55 [i_5] [i_5] = (arr_31 [i_5] [i_5] [i_5] [i_5]);
        var_26 += ((~(arr_50 [i_5] [18])));
    }
    #pragma endscop
}
