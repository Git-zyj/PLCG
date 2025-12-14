/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_14 = (min(3, (((arr_4 [i_0]) + (arr_4 [i_0 + 3])))));
                    var_15 = (arr_6 [i_1] [i_1] [i_1]);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 16;i_5 += 1)
            {
                {
                    var_16 = (min((arr_9 [i_5 - 1] [i_5 - 1]), (~173)));

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_17 += (arr_0 [i_4]);
                        var_18 = (min((min(var_2, -1656311232)), (((-(arr_0 [i_5]))))));
                        arr_17 [i_5] [i_5] [i_4] [i_5] = (arr_2 [i_5]);
                        var_19 = 1656311232;
                    }
                    for (int i_7 = 1; i_7 < 19;i_7 += 1) /* same iter space */
                    {
                        arr_21 [i_5] = arr_15 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_5] [i_7 - 1];
                        var_20 = (arr_5 [i_5] [i_5] [i_5]);
                        var_21 = (arr_15 [i_3] [i_4] [i_4] [i_5] [i_5]);
                    }
                    for (int i_8 = 1; i_8 < 19;i_8 += 1) /* same iter space */
                    {
                        arr_24 [i_3] [i_5] [i_5] [i_8] = (((max((((!(arr_20 [i_3] [i_5] [i_5] [i_3] [i_3] [i_5])))), ((100 ? 31 : (arr_20 [i_3] [i_5] [i_3] [i_5] [i_5] [i_4]))))) >= 75));
                        arr_25 [i_5] [i_5] [i_5] = (4294967276 | 1);
                        arr_26 [i_5] [i_5] [i_5] [i_4] = var_12;
                        arr_27 [i_5] [i_5] [i_5] [i_5] = (((((~((min(22517, 49)))))) + (min((arr_5 [i_5] [i_5 + 1] [i_5 + 4]), (arr_5 [i_5] [i_5 - 2] [i_5 + 1])))));
                    }
                }
            }
        }
    }
    var_22 += var_1;

    for (int i_9 = 1; i_9 < 20;i_9 += 1)
    {
        var_23 = ((+((((arr_6 [i_9 - 1] [i_9 + 1] [i_9 - 1]) <= (arr_7 [i_9] [i_9 + 1] [i_9 + 1]))))));
        arr_31 [i_9] = ((-34920 <= (max((arr_29 [i_9]), var_12))));
    }
    for (int i_10 = 3; i_10 < 14;i_10 += 1)
    {

        for (int i_11 = 0; i_11 < 15;i_11 += 1)
        {
            arr_39 [i_10] = (max((arr_29 [i_10 - 2]), ((-(arr_33 [i_10])))));
            var_24 = (min(var_24, (((((((var_9 <= (arr_15 [i_10] [i_10] [i_11] [i_11] [i_10]))))) | ((72 ? 75 : 72)))))));
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 15;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 15;i_13 += 1)
                {
                    {
                        arr_46 [i_10] [i_10] [i_10] [i_13] [i_10] = (167 ? 99 : (((!(arr_4 [i_12])))));
                        arr_47 [i_10] [i_10] [i_12] [i_10] = (arr_20 [i_10] [i_11] [i_12] [i_10] [i_11] [i_11]);
                        var_25 -= (arr_14 [i_11] [i_10 - 1] [i_11]);
                    }
                }
            }

            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                var_26 = 3022450320;
                var_27 = (((((arr_9 [i_10 - 1] [i_10 - 1]) <= (arr_9 [i_10 - 1] [i_10 + 1])))) <= (!92));
                arr_51 [i_10] [i_10] [i_10] [i_10] = (((arr_15 [i_10] [i_10] [i_10] [i_11] [i_10]) ? (((((3829 >> (7656 - 7628)))) % (arr_3 [i_11] [i_10 + 1] [i_14]))) : (arr_2 [i_11])));
            }
            for (int i_15 = 2; i_15 < 14;i_15 += 1) /* same iter space */
            {

                for (int i_16 = 0; i_16 < 15;i_16 += 1)
                {
                    arr_57 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] = ((-(arr_7 [i_15] [i_15] [i_15])));
                    var_28 = var_6;
                    var_29 = (min(var_29, (arr_38 [i_10] [i_10])));
                    var_30 = 26940;
                }
                var_31 = (arr_11 [i_11] [i_15]);
                var_32 = 54;
            }
            for (int i_17 = 2; i_17 < 14;i_17 += 1) /* same iter space */
            {
                arr_62 [i_10] [i_10] [i_10] [i_10] = (((((arr_20 [i_17 - 2] [i_11] [i_10 - 3] [i_17 - 2] [i_17] [i_10]) + (arr_20 [i_17 + 1] [i_17] [i_10 + 1] [i_17] [i_17 + 1] [i_17]))) - ((-72 - (arr_20 [i_17 - 2] [i_17] [i_10 + 1] [i_10 + 1] [i_17] [i_17])))));
                arr_63 [i_10] [i_10] [i_10] = (((arr_52 [i_10 - 1] [i_10 - 1] [i_10 - 1]) | ((24435 ? 32 : 80))));

                /* vectorizable */
                for (int i_18 = 1; i_18 < 14;i_18 += 1)
                {
                    var_33 = (+-363203095);
                    var_34 = 1073741792;
                    var_35 = (arr_44 [i_17 + 1] [i_17 + 1] [i_17 - 2] [i_17 + 1]);
                    arr_66 [i_18] [i_18] = ((((~(arr_12 [i_10]))) <= (((arr_52 [i_10] [i_10] [i_10]) * (arr_22 [i_10] [i_10] [i_10] [i_10] [i_10] [i_18])))));
                    arr_67 [i_10] [i_10] [i_10] [i_18] = ((~(arr_29 [i_10])));
                }
            }
        }
        arr_68 [i_10] = 39;
    }
    #pragma endscop
}
