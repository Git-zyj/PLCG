/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_16, var_11));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = min((((arr_1 [i_0]) ? (arr_1 [i_0]) : var_8)), (arr_1 [i_0]));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_7 [11] [1] [i_0] = (((!var_7) ? (min(var_11, var_14)) : ((((((var_7 ? var_3 : (arr_5 [i_1] [9] [0])))) ? (arr_6 [i_1] [i_1]) : (max((arr_4 [i_1] [i_0]), (arr_6 [i_0] [1]))))))));
            var_18 = (((!(((var_0 ? var_1 : var_8))))) ? (max(((28 ? var_10 : (arr_3 [8] [i_0]))), var_1)) : (((((var_10 ? (arr_6 [i_1] [i_1]) : var_2)) | (max((arr_4 [i_0] [i_1]), (arr_6 [10] [i_1])))))));
        }
        for (int i_2 = 3; i_2 < 11;i_2 += 1)
        {
            var_19 = ((-102 ? 1 : (4294967295 || 127)));
            var_20 = (((arr_4 [4] [i_2 + 3]) - (((!1) ? (((var_2 ? var_2 : (arr_5 [i_0] [i_2 - 3] [i_0])))) : ((-(arr_9 [i_0] [i_2] [i_2 + 2])))))));
            var_21 = (min(var_21, (((!var_2) ? (((arr_3 [i_2] [7]) / (((min(-110, var_14)))))) : (((((9223372036854775807 ? 1694345583 : 108))) ? (~var_5) : (((0 ? 0 : 0)))))))));

            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                arr_12 [i_3] [i_3] [i_3] = (!var_5);
                var_22 = ((((((255 ? (arr_4 [i_2 + 2] [i_2 - 3]) : var_6)) + 2147483647)) << (((((-115 ? var_14 : var_9))) - 67))));
                var_23 = ((((min((((1 ? 114 : -1))), ((3182526767 ? 4294967295 : var_13))))) ? -116 : ((5 >> (-115 + 134)))));
            }
            for (int i_4 = 1; i_4 < 13;i_4 += 1)
            {
                var_24 = (max(var_24, -1));

                for (int i_5 = 2; i_5 < 12;i_5 += 1)
                {
                    var_25 = (min(var_25, ((((((~(arr_9 [i_4] [i_4 - 1] [i_4])))) ? (((((1983204841088089168 ? 1 : -5901706953857245320))) ? ((71 ? 9 : 2013265920)) : (!var_12))) : 168)))));

                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        arr_21 [i_6] [i_0] [i_2] |= ((((arr_19 [10] [i_2] [i_4 - 1] [i_2]) == var_3)));
                        var_26 = (((((min(var_9, (arr_11 [i_0] [i_2] [i_4] [5]))) - var_1))));
                        var_27 = (((+-110) / ((var_3 ? (((arr_13 [i_4]) ? (arr_3 [11] [8]) : (arr_5 [i_5] [i_2 + 3] [i_2 + 3]))) : (arr_16 [i_4 + 1] [i_4 - 1] [i_4])))));
                        arr_22 [i_0] [i_2] [i_2 - 3] [i_4] [i_6] [i_6] = var_12;
                    }
                }
                for (int i_7 = 3; i_7 < 11;i_7 += 1) /* same iter space */
                {
                    arr_25 [i_0] [i_0] [i_2] [i_4] [i_4 + 1] [i_7] = 0;
                    var_28 -= var_14;
                    var_29 = (min(var_29, (arr_19 [i_7] [i_4] [i_2] [i_0])));
                    var_30 = (min(((max(0, -115))), (min(((var_14 ? (arr_5 [1] [i_2] [1]) : var_4)), ((min(-115, (arr_11 [i_0] [i_2] [i_0] [i_7]))))))));
                }
                for (int i_8 = 3; i_8 < 11;i_8 += 1) /* same iter space */
                {
                    arr_28 [10] [i_4] = (!0);
                    var_31 -= (arr_19 [i_0] [i_2] [i_4] [i_8]);
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    var_32 = (arr_16 [i_0] [i_9] [i_4 - 1]);
                    var_33 ^= var_1;
                }
                var_34 += (~(((max(var_10, var_5)))));
                var_35 = ((+(max((arr_13 [i_4]), 1694345583))));
                var_36 = (1 ? (((arr_0 [i_2] [i_2 + 3]) ? var_12 : var_9)) : ((max((arr_31 [i_4] [i_2 + 3] [i_2 + 2] [i_2]), (arr_0 [i_2] [i_2 + 3])))));
            }
            /* vectorizable */
            for (int i_10 = 3; i_10 < 12;i_10 += 1) /* same iter space */
            {
                arr_35 [i_0] [i_0] [i_10] = (!18);
                var_37 = (((arr_18 [i_10] [i_10 - 2] [i_10 - 3] [i_10]) ? (arr_18 [i_10] [i_10] [i_10 - 3] [i_10]) : (arr_18 [i_10] [i_10 - 3] [i_10 - 3] [i_10])));
            }
            for (int i_11 = 3; i_11 < 12;i_11 += 1) /* same iter space */
            {
                var_38 = 1;
                arr_39 [i_0] [i_2] [i_2] [i_0] &= var_13;
                arr_40 [3] [3] [i_11] [2] = (((arr_30 [i_2 + 1] [i_0] [i_11] [i_0]) ? var_13 : 49152));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        {
                            var_39 = (min(var_39, var_0));
                            var_40 |= (((((max(24, 1765184375958817963)) ? 0 : 1884946263))));
                            var_41 = (var_14 % var_15);
                            arr_47 [i_0] [i_2 + 3] = ((0 ? ((((var_11 ? var_12 : var_10)))) : ((~(~0)))));
                            arr_48 [i_0] [i_0] [i_0] [i_0] [i_0] |= ((((((max(0, -36))) > (arr_26 [i_11 - 1] [i_11 + 1] [i_11] [i_12] [i_12]))) ? var_11 : (((var_4 ? 2048578452 : var_12)))));
                        }
                    }
                }
            }
        }
        var_42 -= (min((max(32, (arr_42 [i_0] [i_0] [8] [8]))), (max(1048448, var_10))));
    }
    var_43 = (min(var_43, var_5));
    #pragma endscop
}
