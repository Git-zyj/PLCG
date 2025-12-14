/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((~(max(var_14, var_14))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_20 = var_9;
        arr_3 [i_0] = ((+((((arr_1 [i_0]) == (arr_1 [i_0]))))));
        var_21 = (((arr_1 [i_0]) / var_14));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_22 = ((((min((arr_6 [i_1] [i_2]), var_0))) ^ (((max(4398046511103, 449618787))))));
                    var_23 = (max((min((arr_7 [i_2] [i_0] [i_0]), -1981)), (((~(arr_4 [i_2 + 1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_3] [i_0] [i_0] [13] [0] = ((+(max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_3])))));
                                var_24 = (((((((((arr_12 [i_4] [7] [i_3] [i_2] [i_1] [i_0]) + (arr_2 [i_1] [i_1])))) ? (arr_2 [i_2 + 1] [i_2 - 1]) : (arr_11 [i_0] [i_2 + 2])))) || (((((arr_5 [i_1]) << (1969 - 1962)))))));
                            }
                        }
                    }
                    arr_14 [i_2] [8] [i_2] = 1981;
                    arr_15 [i_1] [i_1] [i_0] [i_0] |= (arr_7 [i_2 - 1] [i_1] [i_0]);
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                arr_31 [i_5] [i_5] [i_5] [i_5] [i_5] = (134217728 < 63545);
                                arr_32 [i_9] = (min(65535, 4092));
                                var_25 = (max(var_25, (((((-2 >> (((arr_26 [13] [i_8] [i_7] [i_7]) - 1874666322)))) % (~63555))))));
                            }
                        }
                    }
                    var_26 = ((((var_14 || (arr_24 [i_5] [i_5]))) ? ((((((arr_22 [i_5]) <= (arr_24 [i_5] [i_5])))))) : (min((var_0 - var_3), (min(var_6, (arr_21 [i_5] [i_6] [i_6])))))));
                }
            }
        }
        arr_33 [i_5] = ((((((65533 + (arr_17 [i_5])))) ? var_11 : (arr_24 [i_5] [i_5]))));
        var_27 = ((!(((arr_21 [i_5] [i_5] [i_5]) >= (arr_19 [i_5] [i_5] [i_5])))));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 21;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                {
                    arr_39 [i_5] [i_5] [i_10] [i_11] = (((!(arr_23 [i_11] [i_10] [i_10] [i_5]))));

                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        arr_43 [i_12] [15] [i_10] [i_5] = (arr_22 [8]);
                        var_28 = (min(var_28, (arr_26 [i_5] [i_10] [i_11] [8])));
                        arr_44 [i_11] &= ((~(arr_40 [19] [i_10] [i_10] [i_10])));
                        arr_45 [i_5] [i_11] [9] [i_5] [i_5] |= var_6;
                        arr_46 [i_5] [10] [i_5] [15] = var_3;
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        for (int i_14 = 1; i_14 < 20;i_14 += 1)
                        {
                            {
                                arr_52 [i_5] [i_5] [i_11] [i_14] [17] [i_10] [i_14] = ((var_1 ? (arr_24 [i_5] [i_10]) : (arr_24 [i_5] [i_5])));
                                arr_53 [i_5] [i_5] [i_5] [i_14] [i_5] [15] [i_5] = ((((max((arr_49 [i_5] [i_10] [i_11] [i_13] [i_14] [i_5]), (arr_49 [i_5] [i_10] [i_11] [i_13] [i_14 - 1] [i_14 + 1])))) - (~-32761)));
                                arr_54 [i_10] [i_14] [i_14] [i_5] = (((((arr_40 [i_5] [17] [i_11] [17]) ? 32760 : var_4))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
