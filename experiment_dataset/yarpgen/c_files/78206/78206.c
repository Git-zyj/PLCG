/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0 + 2] = ((+(((arr_1 [i_0 - 3]) + (arr_1 [i_0 - 1])))));
        var_19 = (max(var_19, (((!((max((arr_0 [i_0 - 1]), (arr_1 [4])))))))));
    }

    /* vectorizable */
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {

        for (int i_2 = 3; i_2 < 16;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                var_20 = ((var_12 - (((arr_8 [i_1] [i_1 + 1]) / (arr_1 [i_1])))));

                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    arr_11 [i_3] [i_3] [i_3] = (((arr_8 [i_1 - 2] [i_2 - 1]) ? (arr_0 [i_1 - 2]) : (arr_4 [i_4])));

                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        arr_14 [i_1] [i_2] [i_1] [i_4] [i_5] = (arr_7 [i_1 - 2] [i_1 - 2]);
                        var_21 = ((arr_12 [13] [13] [i_3] [12] [i_1]) ? (arr_12 [i_2] [i_2] [10] [i_4] [i_5]) : (arr_12 [i_4] [i_2 + 1] [5] [i_4] [i_3]));
                        var_22 ^= (((((!(arr_3 [i_1] [i_1])))) >> (((arr_6 [i_1] [9]) - 1871826236))));
                        arr_15 [i_1] [i_2 - 1] [i_3] [i_4] [i_5] = ((~(84 <= 210)));
                        var_23 = var_8;
                    }
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        arr_20 [i_2] [i_4] |= (((((-(arr_10 [i_1])))) != (arr_7 [i_1] [i_1])));
                        var_24 = (min(var_24, (arr_19 [i_3] [i_3])));
                    }
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        var_25 = (min(var_25, ((((~var_9) - (((arr_10 [i_1]) ? var_4 : 121)))))));
                        var_26 += ((-(3787658833 & 1073741824)));
                    }

                    for (int i_8 = 2; i_8 < 16;i_8 += 1) /* same iter space */
                    {
                        arr_25 [i_1] [i_1] [i_3] [i_3] [i_8] = ((-(~134)));
                        arr_26 [i_1] [i_2 - 2] [i_3] [8] [i_8] = (((!855634725) > var_0));
                        arr_27 [i_1 + 1] [i_3] [i_4] [i_8 - 1] = (((~15) ? (arr_9 [i_1 + 1]) : ((~(arr_5 [i_1] [i_2 - 1])))));
                    }
                    for (int i_9 = 2; i_9 < 16;i_9 += 1) /* same iter space */
                    {
                        var_27 = ((-((var_10 ^ (arr_30 [i_1] [i_2 - 1] [i_9])))));
                        arr_31 [i_4] = ((var_15 ? var_7 : (arr_13 [i_2] [i_4] [i_9 - 2])));
                        arr_32 [i_1] [i_1] [i_1] [i_1] |= ((arr_19 [i_1 - 2] [i_1 + 1]) << (((arr_19 [i_1 + 1] [i_1 - 2]) - 817159097)));
                        var_28 ^= var_5;
                    }
                    for (int i_10 = 2; i_10 < 16;i_10 += 1) /* same iter space */
                    {
                        arr_35 [i_1 - 2] [i_2] [i_2] [i_3] [5] [7] [i_10 + 1] = (((arr_22 [i_10 - 1] [i_1 - 1] [i_3] [i_2 - 3]) & (arr_12 [i_4] [2] [i_2 - 2] [i_4] [i_1 - 2])));
                        arr_36 [i_1] [5] [i_3] [i_4] [i_10] = ((~(arr_30 [i_10 + 1] [i_2 + 1] [i_1 - 1])));
                        var_29 = -var_16;
                        var_30 = (arr_5 [i_3] [i_4]);
                        arr_37 [i_1] [i_2] [i_1] [i_4] [13] = ((~(arr_21 [i_1 + 1])));
                    }
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        var_31 = (min(var_31, var_7));
                        arr_40 [i_4] [i_1] = (~var_5);
                        arr_41 [1] [i_2] [i_3] [i_11] [i_11] [2] = (~var_4);
                        arr_42 [8] [8] [i_3] = (arr_38 [14]);
                    }
                }
                var_32 = ((23 ? (231 && var_15) : (!var_9)));
            }
            arr_43 [i_1 - 2] [i_1 - 2] = (((var_8 <= var_1) / (arr_33 [i_2 - 3] [i_2] [i_2] [i_2] [i_2 - 3] [15])));
            arr_44 [i_1] [i_1] = (((arr_10 [4]) > (arr_9 [i_1 - 1])));
            arr_45 [i_1] [7] |= (arr_30 [i_1 - 1] [i_2 - 1] [i_2 - 3]);
            arr_46 [i_1] [5] = -var_11;
        }
        for (int i_12 = 1; i_12 < 15;i_12 += 1)
        {
            var_33 = (+((var_5 ? (arr_16 [i_1] [i_12] [i_12]) : var_18)));
            var_34 = (((arr_23 [i_1 - 2] [i_1] [i_1 - 1] [i_12 + 1] [i_12]) ? (~var_11) : var_14));
            var_35 = ((~(arr_7 [i_1] [i_1 - 2])));
            var_36 &= var_4;
        }

        for (int i_13 = 0; i_13 < 17;i_13 += 1)
        {
            arr_55 [i_1 - 2] [i_1] [i_1] = ((!(arr_21 [i_13])));
            arr_56 [i_1] = ((((arr_18 [i_1] [16] [16] [i_13] [11]) << (var_4 - 3491525069))) & (arr_51 [i_1 - 1] [i_1 + 1] [i_1 - 2]));
            var_37 = var_1;
        }
        arr_57 [9] = (((arr_38 [i_1 - 2]) ? (arr_5 [i_1 - 2] [i_1]) : (arr_0 [i_1 + 1])));
    }
    for (int i_14 = 0; i_14 < 17;i_14 += 1)
    {
        arr_60 [i_14] = (((arr_30 [11] [i_14] [i_14]) ? (((!var_0) ? var_2 : ((var_14 ? var_7 : var_0)))) : (((var_8 % (arr_3 [i_14] [i_14]))))));
        var_38 = var_2;
        var_39 = (max(var_39, var_6));
    }
    var_40 ^= (((min((((var_6 ? var_3 : var_10))), (var_13 | var_16))) < ((((((var_15 ? var_9 : var_1))) ? ((var_17 << (var_13 - 2638220604))) : (!var_2))))));
    #pragma endscop
}
