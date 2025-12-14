/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 4; i_2 < 9;i_2 += 1)
                {
                    var_13 = (max(var_13, var_0));
                    var_14 = 17;

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            var_15 = (min(var_15, ((((-126 == -2) + ((5881346464761916054 ? var_3 : 84)))))));
                            var_16 = (max(var_16, (((1 ? -45 : 41587)))));
                            arr_13 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] = ((var_4 << (((arr_3 [i_1] [i_1 + 2] [i_4]) - 182))));
                        }
                        for (int i_5 = 0; i_5 < 0;i_5 += 1)
                        {
                            var_17 = (var_6 ? (59 - 2147483647) : (11389 | var_4));
                            arr_16 [12] [i_1] [i_2] [i_3] [i_2] = (arr_8 [i_2] [i_1 - 2] [i_1 - 2]);
                        }

                        for (int i_6 = 0; i_6 < 0;i_6 += 1)
                        {
                            var_18 = (((arr_7 [i_2]) ? 1 : (arr_4 [i_0])));
                            var_19 = (max(var_19, (((114 | (arr_9 [i_6 + 1] [6] [i_6 + 1] [i_6] [i_6] [i_6 + 1]))))));
                            var_20 = (max(var_20, (4095 | 6497835313483475642)));
                            var_21 = (((arr_7 [i_2]) ^ (arr_14 [i_2] [4] [i_2])));
                        }
                        for (int i_7 = 2; i_7 < 11;i_7 += 1)
                        {
                            arr_21 [i_2] [i_1] = 0;
                            arr_22 [12] [i_1] [i_2] [i_2] [6] [i_2] = (arr_10 [i_2] [i_2] [i_2 - 1] [i_7]);
                            arr_23 [i_0] [i_2] = (((6077673502276275692 ? (arr_7 [i_2]) : var_9)));
                        }
                    }
                    var_22 = (max(var_22, (((var_3 ? (arr_15 [i_0]) : (arr_15 [i_0]))))));

                    for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
                    {
                        var_23 = (!71);
                        var_24 = (max(var_24, ((((arr_20 [i_8] [i_8] [i_2 - 1] [i_0]) - 0)))));

                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            var_25 = (arr_20 [1] [1] [i_2] [i_8]);
                            arr_32 [i_9] [i_2] [i_2] [i_2] [6] = (((((1 << (var_9 - 70)))) ? 6316956250575297919 : var_12));
                            var_26 = (min(var_26, ((((((arr_29 [i_9] [i_8] [i_8] [i_9] [i_1] [i_1] [i_0]) >= -7241237442981395771)) ? 16383 : (((arr_26 [i_9] [i_8] [0] [i_1] [0]) | var_1)))))));
                            arr_33 [8] [i_2] [i_9] [i_2] [i_2] = (((arr_8 [i_2] [i_1] [i_2 + 4]) & var_9));
                        }
                        for (int i_10 = 1; i_10 < 10;i_10 += 1)
                        {
                            var_27 = (max(var_27, (-20 | var_10)));
                            var_28 = (max(var_28, (((-(var_4 != 170))))));
                            var_29 = (123 != 562949953421312);
                        }
                        for (int i_11 = 2; i_11 < 12;i_11 += 1)
                        {
                            var_30 = (min(var_30, (4294967277 || 46772)));
                            arr_41 [10] [i_1] [i_0] [i_2] [i_1 - 1] = (arr_38 [i_0] [i_1] [1] [i_2] [1] [1] [i_8]);
                            arr_42 [i_0] [i_2] [i_2 - 4] [i_0] [12] = (((((arr_0 [1]) ? var_8 : var_10)) * (var_10 <= var_2)));
                            arr_43 [i_0] [i_1] [3] [i_8] [i_2] = (((arr_20 [i_2] [i_2 - 1] [i_2 - 2] [3]) | var_3));
                        }
                        arr_44 [i_0] [i_0] [i_2] [i_2] = (i_2 % 2 == zero) ? (((((((-109 + 2147483647) >> (((arr_5 [i_0] [0] [i_2] [i_8]) - 6739862178728201999))))) ? ((var_4 ? (arr_9 [i_0] [i_1] [i_0] [i_8] [i_8] [5]) : 1)) : (~11389)))) : (((((((-109 + 2147483647) >> (((((arr_5 [i_0] [0] [i_2] [i_8]) - 6739862178728201999)) - 15860634037662514397))))) ? ((var_4 ? (arr_9 [i_0] [i_1] [i_0] [i_8] [i_8] [5]) : 1)) : (~11389))));
                    }
                    for (int i_12 = 0; i_12 < 13;i_12 += 1) /* same iter space */
                    {
                        arr_47 [i_12] [i_2] [i_2] [i_0] = (arr_31 [i_12] [6] [6] [i_0]);
                        var_31 = ((~(arr_29 [i_1 + 2] [i_1 - 1] [5] [i_2] [i_2 + 3] [i_1 + 2] [i_12])));
                    }
                    for (int i_13 = 0; i_13 < 13;i_13 += 1) /* same iter space */
                    {
                        var_32 = (max(var_32, (arr_3 [i_2 - 1] [i_2 - 1] [i_2])));
                        var_33 = (max(var_33, 118));
                        arr_50 [i_0] [i_1] [i_0] [i_2] = 100;
                    }
                }
                /* vectorizable */
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    arr_53 [i_0] = 7;
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 13;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 13;i_16 += 1)
                        {
                            {
                                arr_60 [i_0] [i_1] [5] [i_15] [6] [i_16] = ((var_12 ^ (arr_40 [i_0] [i_1 + 2] [i_14] [i_0] [i_15] [i_16])));
                                arr_61 [1] [i_14] [i_1] [4] [i_16] [i_0] [i_15] = var_0;
                                arr_62 [i_0] [i_1] [i_14] [i_15] [i_0] [i_15] [i_14] = (var_3 ? -60 : (arr_3 [i_1 + 2] [i_1 + 2] [i_1 + 2]));
                            }
                        }
                    }
                }
                arr_63 [i_0] = (max((arr_36 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1 - 2]), (max((min(var_3, -11)), (44 << 0)))));
            }
        }
    }
    var_34 = var_3;
    #pragma endscop
}
