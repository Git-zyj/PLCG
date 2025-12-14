/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((~((max(var_6, var_0)))))) ? var_6 : (var_4 || var_0)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0 + 1] [11] = (min(4072330720, (var_4 / 1782527487)));

                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    var_13 ^= ((((!1) <= ((var_0 / (arr_7 [i_0]))))));
                    arr_8 [1] = (((-((max(-31029, 0))))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    var_14 = var_11;
                    arr_11 [i_3] [i_1 - 1] [i_3] = ((-(((arr_2 [i_3 + 1] [i_1]) ? (arr_0 [i_3] [i_0]) : var_3))));
                    arr_12 [i_3] [i_3] [i_0] [i_3] = ((!(arr_0 [2] [i_1])));
                }
                for (int i_4 = 3; i_4 < 14;i_4 += 1)
                {
                    arr_16 [1] = ((-((~(!var_5)))));
                    arr_17 [11] [i_1 + 3] [i_4 + 1] [i_4 - 1] = (-((var_9 ? ((var_1 / (arr_10 [i_4] [8] [8] [i_0 + 1]))) : var_0)));
                    arr_18 [1] [i_1] [1] = (arr_3 [13] [i_1]);
                }
                var_15 += ((~(((((var_1 ? (arr_14 [i_0] [i_0] [i_1]) : (arr_15 [i_0] [i_0] [i_0])))) ? (arr_0 [i_0] [i_0]) : 114))));
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {
                            var_16 = (max(-19810, 18446744073709551615));
                            arr_23 [6] [i_1] [i_5] [6] [i_6] = (min(((min((~26170), (-16675 | 20586)))), (min(8058562980657173592, 73))));
                            var_17 = (max(var_17, ((((((((14374 ? 8233311587547076427 : -8760265313847819507)) > var_9))) <= (arr_1 [i_0 + 1] [12]))))));
                        }
                    }
                }
                arr_24 [i_0] = ((((min(var_0, var_5)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 16;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 1;i_8 += 1)
        {
            {
                var_18 = (max(234, 1));

                /* vectorizable */
                for (int i_9 = 2; i_9 < 16;i_9 += 1)
                {
                    var_19 -= (arr_29 [i_7] [i_7]);

                    for (int i_10 = 2; i_10 < 14;i_10 += 1) /* same iter space */
                    {
                        arr_33 [i_7] [i_7] = ((arr_26 [i_9 - 2]) ? (3659 / 2799656082) : 98);
                        var_20 = (~var_0);
                    }
                    for (int i_11 = 2; i_11 < 14;i_11 += 1) /* same iter space */
                    {
                        arr_36 [i_7] [i_7] [i_7] [i_8] [i_9 - 2] [i_11] = arr_27 [i_7];
                        var_21 += ((((((arr_26 [i_8]) ? var_2 : (-2147483647 - 1)))) ? (arr_34 [i_7 - 1] [i_11] [i_9 - 1]) : (arr_28 [i_9 + 1] [i_9] [i_9 - 1])));
                    }
                    arr_37 [i_7] = -14374;
                }
                for (int i_12 = 3; i_12 < 16;i_12 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 17;i_14 += 1)
                        {
                            {
                                var_22 *= var_0;
                                arr_45 [i_7] [16] [i_7] [i_8] [16] = 26138;
                                var_23 = ((-(arr_26 [i_8 - 1])));
                                arr_46 [i_7] [i_13] [6] [i_8 - 1] [i_7] = var_8;
                            }
                        }
                    }
                    arr_47 [16] [i_8] |= ((((((((min(-34006869, (arr_40 [14])))) >= (arr_44 [i_7 + 1] [i_7 + 1] [i_8 - 1] [i_8] [i_7 + 1] [i_12 - 3]))))) <= 23443));
                }
                /* vectorizable */
                for (int i_15 = 3; i_15 < 16;i_15 += 1) /* same iter space */
                {
                    arr_51 [i_7] [i_8] [i_7] [i_7] = ((var_10 ? (arr_27 [i_7]) : 98));
                    arr_52 [i_7] = -1080863910568919040;
                }

                for (int i_16 = 2; i_16 < 14;i_16 += 1)
                {
                    var_24 = (min(((~(arr_39 [i_7] [i_7] [i_7]))), ((((arr_34 [i_16 + 2] [i_7] [i_7]) == (max(var_4, 2351022649)))))));
                    arr_55 [i_7] [i_8] = (((18446744073709551615 <= 219) && ((((arr_43 [i_7 - 1] [i_7] [i_7] [i_7 - 1] [i_8] [1]) ? 9223372036854775807 : 134954236781228833)))));
                }
                for (int i_17 = 0; i_17 < 17;i_17 += 1)
                {
                    arr_58 [i_17] [i_8] [i_8] |= (min((!26140), (arr_40 [i_17])));
                    var_25 = (max(var_25, var_3));
                    var_26 = ((-((max(var_7, var_4)))));
                }
                var_27 ^= max((!7776970518160655184), 11258);
            }
        }
    }
    #pragma endscop
}
