/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_14 = arr_0 [i_0];
                            var_15 = (max(var_15, ((max((arr_0 [i_1]), (min(254, 5)))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_16 = ((((2399435573 ? var_3 : var_7))));
                            var_17 = (max(var_17, ((max(((((1031233659 ? 181 : 1031233658)))), (~254))))));
                            var_18 = var_10;
                            var_19 = max((((((246 ? -22893 : 87))) ? ((var_1 ? (arr_16 [i_5 + 1] [i_4]) : -6293781433923944710)) : (((min((arr_15 [i_4] [i_0] [i_4] [i_5]), (arr_7 [i_0] [4] [i_0]))))))), ((((arr_12 [i_5 + 1] [i_0] [i_5 + 2] [i_5 - 1]) ? (arr_9 [i_5] [i_5 + 1] [i_5 - 1] [i_5]) : var_12))));
                            arr_17 [i_0] = ((((!(((107 ? 239 : 75))))) ? (arr_0 [i_0]) : ((-((min(var_3, 21)))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        {
                            var_20 = var_4;
                            arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (!var_13);
                            arr_24 [i_0] = var_11;
                        }
                    }
                }
                var_21 = (arr_13 [i_1] [i_0] [i_0] [i_1]);
                var_22 = min(var_4, (arr_18 [i_0]));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 0;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 17;i_12 += 1)
                        {
                            {
                                var_23 = var_4;
                                arr_38 [i_8] [i_8] [i_8] = ((-(((2 ? 248 : 157)))));
                                var_24 = ((+((((min((arr_34 [i_9] [i_10 + 1] [i_12]), var_1))) ? ((max(var_11, -38))) : (arr_26 [i_8] [i_9])))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_13 = 0; i_13 < 19;i_13 += 1)
                {
                    for (int i_14 = 2; i_14 < 15;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 19;i_15 += 1)
                        {
                            {
                                arr_47 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] = -1;
                                var_25 = (max(var_25, (((41309 ? (238 == 2399435558) : 81410538)))));
                                var_26 = (max(var_26, ((((min(1895531735, 1895531714)) == 7)))));
                                var_27 = ((((((arr_37 [i_15] [i_15] [i_14 + 4] [i_14 + 4] [i_14] [i_14]) ? (arr_37 [i_15] [i_14] [i_14 + 3] [i_14 + 4] [i_13] [i_8]) : (arr_37 [i_15] [i_14 - 2] [i_14 - 2] [i_14 + 3] [i_14 - 2] [i_14])))) ? ((var_12 - (arr_37 [i_15] [i_15] [i_14 + 3] [i_14 + 3] [i_9] [i_8]))) : (((arr_37 [0] [i_14] [i_14 - 2] [i_14 + 1] [i_13] [i_13]) ? (arr_37 [i_15] [i_15] [i_14 + 4] [i_14 + 1] [i_14 - 1] [i_14]) : (arr_37 [i_15] [i_15] [i_14 - 1] [i_14 + 4] [i_13] [i_8])))));
                            }
                        }
                    }
                }
                arr_48 [i_8] [i_9] [i_9] = (min((((arr_11 [i_9]) ? (arr_20 [4] [i_8] [i_8] [i_8]) : 280561369)), 2));
                arr_49 [i_9] = ((((min((max(190, var_6)), 204))) ? 152 : (max(85, (arr_11 [i_9])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_16 = 0; i_16 < 1;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 15;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 15;i_18 += 1)
            {
                {
                    arr_57 [i_16] [i_17] [i_17] = (arr_26 [i_16] [i_18]);
                    /* LoopNest 2 */
                    for (int i_19 = 2; i_19 < 12;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 15;i_20 += 1)
                        {
                            {
                                arr_63 [i_16] [i_16] [i_18] [i_19] [i_20] [i_19] = (max((((((max(-399564993, 5493416615357751030))) ? (((arr_42 [i_19] [i_19 - 2] [i_19 - 2] [i_19 - 2]) ? 177 : var_12)) : (!var_2)))), ((((((((var_8 ? (-9223372036854775807 - 1) : (arr_54 [i_20] [i_19] [i_16]))) + 9223372036854775807)) + 9223372036854775807)) << ((((~(arr_10 [i_17] [i_18] [i_17]))) - 29))))));
                                var_28 = (max(var_28, (((var_2 >= (((var_13 >> 5) ? -61 : (max((arr_41 [i_18]), var_11)))))))));
                                arr_64 [i_16] [i_16] [i_16] [i_17] [i_16] [i_19 + 1] [i_19] = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 = 84;
    #pragma endscop
}
