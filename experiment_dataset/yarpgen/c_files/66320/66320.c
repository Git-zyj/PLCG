/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [1] &= (!24);
        arr_3 [i_0] = ((((!(arr_0 [i_0 - 1] [i_0 - 1]))) && ((min(var_10, (arr_1 [i_0] [i_0]))))));
        var_16 = var_4;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                arr_13 [i_1] [i_3] [i_3] = ((~(arr_7 [i_2] [i_3])));

                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_19 [i_3] = 0;
                        var_17 = (min(var_17, 987537775293988506));
                        arr_20 [i_3] [i_3] [i_3] = (((arr_10 [i_1] [i_2] [i_3]) && var_9));
                    }
                    var_18 &= ((((arr_14 [i_4] [i_4] [10] [i_2] [i_1]) & (arr_15 [0] [i_4]))));
                    var_19 = (min(var_19, (arr_8 [i_1])));
                    var_20 = (((arr_5 [i_4] [i_1]) * var_1));
                }
            }
            var_21 ^= var_8;

            for (int i_6 = 0; i_6 < 0;i_6 += 1)
            {
                arr_24 [i_6] [i_6] [i_6] = var_6;

                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    arr_29 [i_1] [1] [1] [i_6] [1] = var_3;
                    var_22 = (!var_9);
                }
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    arr_33 [i_1] [i_6] [i_8] = (1073741823 - 25734);
                    arr_34 [11] [i_2] [i_6] [i_1] [i_6 + 1] = (arr_25 [i_1] [i_6 + 1] [i_6] [i_6]);
                    var_23 ^= (((arr_23 [i_1] [i_2] [i_6 + 1]) ? var_7 : (arr_11 [i_8] [i_8])));
                }
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {

                    for (int i_10 = 1; i_10 < 10;i_10 += 1)
                    {
                        arr_39 [i_6] [i_6] [i_6] [i_6] [i_10 + 3] = (((arr_35 [i_6 + 1] [i_6 + 1] [i_6] [i_10 + 3] [i_2] [1]) & var_14));
                        var_24 = ((var_1 ? (arr_28 [i_10] [i_10] [12] [i_10 + 2] [i_10] [i_9]) : (arr_28 [i_1] [i_2] [i_1] [i_10 + 2] [i_10] [i_10])));
                        arr_40 [i_1] [i_9] [i_2] [i_6] [i_10] = (((arr_7 [i_1] [i_2]) & var_6));
                        var_25 = (min(var_25, (((33554424 % (arr_26 [i_6] [i_1] [i_6 + 1] [i_10 + 3]))))));
                    }
                    arr_41 [i_9] [i_9] &= (((arr_28 [5] [5] [i_6] [i_2] [i_2] [i_6 + 1]) ? var_10 : (arr_28 [i_6] [i_2] [i_6] [i_9] [i_1] [i_6 + 1])));
                    arr_42 [i_1] [i_6] [1] = var_6;
                }
                for (int i_11 = 3; i_11 < 11;i_11 += 1)
                {

                    for (int i_12 = 2; i_12 < 9;i_12 += 1)
                    {
                        var_26 |= (var_9 % var_0);
                        arr_49 [i_12] [i_2] [i_6 + 1] [i_11 + 2] [i_6] [12] [i_6] = ((!(arr_44 [0] [i_12 - 2] [i_12 - 2] [i_11 - 2] [i_6 + 1])));
                        var_27 = -33554424;
                    }
                    var_28 = (((arr_36 [i_6 + 1] [i_11 + 1] [i_11 - 3]) ? var_11 : var_7));
                    var_29 *= ((arr_28 [i_1] [i_6 + 1] [i_6] [i_11 - 1] [i_1] [i_11]) ? (var_2 * 65533) : (var_8 < var_6));
                    arr_50 [i_6] = ((~(arr_48 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1])));
                }
                arr_51 [i_1] [i_2] [i_2] [i_6] = (((!102) ? (arr_27 [i_6 + 1] [i_6 + 1]) : (17459206298415563109 - var_7)));
                var_30 = (min(var_30, ((var_13 < (arr_23 [i_6 + 1] [i_6 + 1] [9])))));
            }
            var_31 ^= (~0);
        }

        for (int i_13 = 1; i_13 < 11;i_13 += 1)
        {
            arr_54 [i_13 + 2] [i_13] = 3;
            arr_55 [i_13] = (min((arr_44 [i_13 + 2] [i_13 + 2] [i_13 - 1] [0] [0]), -3887160845444706059));
        }
        arr_56 [1] [3] = ((243 * (((!(((var_13 ? var_14 : 0))))))));
        var_32 = (min(var_32, ((((!-var_10) % (((max(3887160845444706070, (arr_46 [i_1] [i_1] [i_1] [i_1]))) / var_8)))))));
    }
    var_33 = (min(var_33, var_1));
    #pragma endscop
}
