/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_3 ? ((min(var_6, var_3))) : (((var_2 != (((var_8 ? var_6 : 16490))))))));
    var_11 = ((((max((var_1 & 1), (var_8 | 65535)))) ? var_5 : var_9));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                var_12 = (max((var_0 + 65535), ((max((((var_5 && (arr_1 [i_0 + 2])))), var_1)))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        arr_9 [i_0] [i_2] = -var_0;
                        var_13 = (4294967295 / 18446744073709551615);
                        arr_10 [i_0] [i_0] = var_0;

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            var_14 = (arr_12 [i_1] [i_3 + 2] [i_0] [i_0 + 3] [i_4]);
                            arr_13 [i_0] [i_1 - 2] [i_2] [i_3] [i_4] = 93;
                            var_15 = ((5335254666583167056 + (arr_6 [i_0] [i_0] [i_2] [i_3])));
                            var_16 = (min(var_16, (arr_0 [i_0 + 3])));
                            arr_14 [i_0] [i_1 - 1] [i_0] [0] [i_0] = (arr_2 [i_0 - 1] [4]);
                        }
                    }
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        arr_17 [i_0] [i_1 - 2] [i_0] [i_5] [i_2] [i_5] = arr_5 [i_0 + 2] [i_0] [1];
                        arr_18 [i_0] = arr_15 [i_0 - 1] [2] [i_0] [i_0] [i_0];
                        var_17 += 50676;
                    }
                    arr_19 [4] [i_1] [i_2] [i_0] = (((arr_15 [i_0 + 1] [i_0 + 1] [i_1 - 3] [i_2] [i_2]) ? var_6 : var_0));
                }
                for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                {
                    var_18 = ((max((arr_3 [i_1] [5] [i_0]), (arr_3 [i_1 - 4] [i_1] [i_0]))));
                    var_19 = -98;
                }
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    arr_25 [i_0] [i_1] [i_1 - 4] [i_7] = var_3;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 4; i_9 < 10;i_9 += 1)
                        {
                            {
                                var_20 = (arr_27 [i_0] [6]);
                                var_21 ^= 931293098;
                                arr_30 [i_0] [i_1] [i_7] [i_1] [i_8] [i_9] = 1365855923166690565;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 11;i_11 += 1)
                        {
                            {
                                arr_37 [i_0] [i_10] [i_11] = var_6;
                                arr_38 [i_0] [i_0] [10] [i_1 - 4] = (min((((4055463628 || (arr_21 [i_0 + 2] [i_1] [i_0] [i_10])))), (min(0, var_3))));
                            }
                        }
                    }
                    var_22 += 34764;
                }
                for (int i_12 = 0; i_12 < 11;i_12 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 11;i_14 += 1)
                        {
                            {
                                arr_48 [i_14] [i_14] [i_0] [i_14] [i_14] = ((+(min((arr_39 [i_0] [i_0 + 1] [i_0 - 2] [i_1 - 3]), (arr_39 [i_0] [i_0 - 2] [i_0 - 1] [i_1 + 1])))));
                                var_23 = (min((max((var_8 != var_8), (arr_43 [i_0 - 1] [4] [i_0 + 1] [i_14] [9]))), 1));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 1; i_15 < 8;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 11;i_16 += 1)
                        {
                            {
                                var_24 = (max(var_24, ((((min((arr_3 [i_0 + 3] [1] [i_1]), -var_3)) < (arr_26 [i_0 + 3] [i_1] [i_16] [i_0 + 3]))))));
                                arr_56 [i_0] [i_0] [i_0 + 3] = (max(32767, 140252501));
                                var_25 = (max(var_25, (arr_16 [i_12] [9] [i_0])));
                                var_26 = (max(var_26, (((((arr_11 [i_0 + 1]) ? -102 : (arr_15 [i_0 + 2] [i_0 + 1] [i_0 + 3] [i_1 - 4] [i_15 + 3])))))));
                                arr_57 [0] [i_1] [i_0] [i_15] [i_16] [i_12] = 6033749542580959093;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        for (int i_18 = 2; i_18 < 9;i_18 += 1)
                        {
                            {
                                arr_64 [i_0] [i_1] |= ((((+(((arr_60 [i_17] [i_12] [i_12] [i_17]) ^ 4997550845904398390)))) <= ((min(-1543931068, (min(var_7, 1322830722)))))));
                                var_27 = arr_0 [i_17];
                                var_28 = (arr_42 [i_0] [i_1 - 4] [i_18 - 1] [i_18] [i_18] [i_18]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
