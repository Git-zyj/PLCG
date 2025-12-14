/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= 15;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0 - 1] = (((arr_2 [3]) ? (min((arr_2 [i_0 - 1]), (arr_2 [i_0 - 1]))) : (var_15 || 6)));
        arr_4 [i_0] &= (min((((((arr_2 [i_0 - 1]) >> (17014356960371509715 - 17014356960371509714))) | 218)), ((((((var_9 ? (arr_2 [i_0]) : var_9))) ? (((17014356960371509727 <= (arr_1 [i_0])))) : ((var_12 ? var_0 : (arr_1 [i_0]))))))));
        arr_5 [i_0] [i_0] = (~15560719606874961617);
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        arr_8 [1] = (((((arr_6 [9] [12]) % var_3)) ^ (var_11 | var_8)));
        arr_9 [6] = (((arr_6 [15] [i_1]) != var_9));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            arr_16 [i_3] = (var_16 <= var_10);
            arr_17 [i_2] [3] [5] = (((arr_14 [i_3]) ? ((-(arr_15 [i_2]))) : (arr_10 [i_3] [i_2])));
        }
        for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
        {
            arr_21 [i_2] [i_2] |= -2284317707256378384;

            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    arr_26 [i_2] [i_2] = (arr_25 [i_5]);
                    arr_27 [6] [6] [6] [i_6] = (arr_11 [i_4]);
                    arr_28 [i_2] [i_4] [i_4] [0] [i_6] = (1432387113338041900 > 0);
                }
                for (int i_7 = 3; i_7 < 9;i_7 += 1)
                {
                    arr_33 [i_2] [0] = (((arr_13 [2] [i_5] [i_7 + 2]) ? (arr_10 [i_2] [i_7 - 2]) : (arr_10 [i_2] [9])));
                    arr_34 [i_2] [i_2] = (((((var_12 / (arr_2 [i_5])))) ? (((arr_32 [i_7] [8] [i_2] [i_2]) / (arr_6 [i_2] [i_4]))) : (arr_7 [16])));
                    arr_35 [i_2] [1] = (((((var_1 ^ (arr_25 [i_4])))) ? (1 / -23027) : (((arr_10 [i_2] [i_2]) - 239))));

                    for (int i_8 = 1; i_8 < 10;i_8 += 1)
                    {
                        arr_38 [9] [8] [9] [8] [i_7] [i_7] [i_8] = (-var_10 + 139637976727552);
                        arr_39 [i_2] [i_2] [i_5] [i_7 - 2] [i_8] = ((!(arr_11 [i_8])));
                        arr_40 [i_2] [2] [i_5] [i_7] [7] [2] [i_8] = 17014356960371509725;
                    }
                }
                arr_41 [i_2] [3] = (((arr_14 [i_4]) || (var_4 && -1)));
            }
            arr_42 [i_2] [1] [i_2] = 1445269778;
            arr_43 [i_2] [i_2] = (arr_14 [i_2]);
        }
        for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
        {
            arr_46 [i_2] = 139637976727558;
            arr_47 [i_2] = (((arr_32 [i_9] [i_9] [i_9] [i_9]) ? (arr_32 [i_9] [i_9] [i_9] [i_9]) : (arr_32 [i_2] [i_2] [i_9] [i_9])));
            arr_48 [1] [i_9] [1] = ((arr_30 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) ? (arr_25 [i_2]) : (((arr_12 [i_2]) ? (arr_2 [8]) : var_2)));
            arr_49 [5] = (arr_20 [i_2] [i_2]);
            arr_50 [i_2] [i_2] [6] = ((var_12 <= (arr_11 [i_2])));
        }
        for (int i_10 = 0; i_10 < 11;i_10 += 1) /* same iter space */
        {
            arr_53 [i_10] [i_10] = var_0;

            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                arr_57 [i_10] [i_10] = ((arr_20 [i_10] [i_2]) & (arr_44 [i_11]));

                for (int i_12 = 0; i_12 < 11;i_12 += 1)
                {
                    arr_62 [i_10] [i_11] = ((!(arr_19 [i_12])));
                    arr_63 [i_2] [i_10] [i_10] [i_2] = arr_31 [i_11] [i_11] [i_11] [i_11] [i_2];
                    arr_64 [i_10] [i_10] [i_10] [i_10] [i_2] = arr_56 [i_10] [i_11] [i_11];
                }
            }
            arr_65 [7] [i_10] = (arr_18 [i_2] [i_10]);
        }
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 11;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 11;i_14 += 1)
            {
                {
                    arr_70 [i_13] [i_13] [i_14] [i_14] = (((arr_20 [i_2] [i_2]) ? ((((arr_20 [i_2] [i_2]) ? (arr_36 [i_2] [i_2] [i_2]) : var_15))) : var_6));
                    arr_71 [10] [i_14] = (((arr_55 [i_14] [i_13] [i_2] [i_2]) >> (-2284317707256378366 + 2284317707256378375)));
                    arr_72 [i_2] [i_13] [i_14] = ((~(arr_0 [i_14])));
                }
            }
        }
    }
    var_18 = var_0;
    #pragma endscop
}
