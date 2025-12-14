/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-((((-13 * var_10) != var_9)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_14 = (((var_0 && (arr_1 [i_0]))));
        var_15 = (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_8 [i_2] [15] [15] = (arr_3 [i_2]);

            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                var_16 += (arr_2 [i_1]);
                arr_12 [2] [i_2] [i_2] [i_1] = (((~var_0) + (arr_4 [i_2])));
            }

            for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
            {

                for (int i_5 = 1; i_5 < 20;i_5 += 1)
                {
                    var_17 = (((65 ? 9 : 159)));
                    arr_18 [i_2] [i_2] = var_5;
                    arr_19 [i_4] [i_2] = (((126 + (arr_2 [i_2]))));

                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        arr_24 [i_1] [1] [i_4] [i_1] [i_2] [i_5] [i_5 - 1] = 197;
                        arr_25 [i_2] [i_2] = (((~122) ^ (arr_20 [1] [i_5 - 1] [i_5 - 1] [17] [i_5 - 1] [i_5])));
                        arr_26 [i_2] = (arr_7 [i_2] [i_2] [i_2]);
                    }
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        var_18 = 130;
                        var_19 = ((!(arr_2 [i_1])));
                    }
                }
                for (int i_8 = 1; i_8 < 19;i_8 += 1)
                {
                    var_20 = (min(var_20, (((~(arr_23 [i_8 - 1] [i_8 + 3]))))));
                    var_21 = ((-(arr_29 [i_1] [i_8 + 2] [5])));
                }
                for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
                {

                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        var_22 = (((arr_5 [i_2] [i_2]) + (((16 == (arr_11 [i_2]))))));
                        arr_36 [i_2] [i_2] [2] [11] = (arr_6 [i_2] [i_9] [i_2]);
                        arr_37 [i_1] [i_1] [i_1] [i_1] [i_10] &= ((var_9 || (arr_21 [1] [i_10] [i_10] [i_10] [i_10])));
                    }
                    var_23 -= (arr_33 [i_9] [i_4] [i_4] [i_1]);
                    var_24 = 128;
                }
                for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
                {

                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        arr_45 [i_2] [i_2] [i_12] = ((((var_0 + (arr_34 [i_1] [5] [i_4] [i_11] [i_12] [i_12]))) + (arr_10 [i_1] [i_2] [i_11] [i_11])));
                        var_25 = (arr_42 [i_1] [i_2] [i_2] [i_4] [i_4] [i_11] [i_2]);
                    }
                    for (int i_13 = 4; i_13 < 21;i_13 += 1)
                    {
                        var_26 += (arr_5 [i_4] [i_13 - 2]);
                        var_27 *= (arr_11 [i_4]);
                    }

                    for (int i_14 = 3; i_14 < 21;i_14 += 1)
                    {
                        var_28 += (~31052);
                        var_29 ^= (((arr_28 [i_1] [i_2] [i_14 - 3] [i_1] [i_14 - 3]) ? (arr_28 [1] [i_2] [i_14 - 3] [i_4] [i_2]) : (arr_28 [i_11] [i_11] [i_14 + 1] [i_11] [i_14 + 1])));
                    }
                    for (int i_15 = 0; i_15 < 22;i_15 += 1)
                    {
                        var_30 &= var_7;
                        var_31 = (arr_31 [i_2] [i_2] [i_15]);
                        var_32 = (arr_21 [i_1] [i_1] [i_1] [i_1] [i_1]);
                        arr_54 [i_2] [21] [i_4] = 73;
                        var_33 = (arr_14 [i_1]);
                    }
                    arr_55 [i_1] [i_4] [i_1] [i_1] &= ((1 ? var_12 : ((var_9 / (arr_34 [i_1] [i_1] [i_2] [i_2] [i_4] [i_11])))));
                }
                var_34 = (((arr_38 [i_2] [i_2] [i_2] [i_2] [i_2]) && (arr_4 [i_2])));
            }
            for (int i_16 = 0; i_16 < 22;i_16 += 1) /* same iter space */
            {
                var_35 = (((arr_3 [i_16]) >> 0));
                var_36 = (max(var_36, (((var_11 ? 1 : (arr_50 [i_16] [i_16] [i_2] [i_16] [i_1]))))));
                arr_58 [i_2] [i_2] [i_2] [i_1] = arr_57 [i_16];
            }
            for (int i_17 = 1; i_17 < 20;i_17 += 1)
            {
                arr_61 [i_2] [i_2] [i_2] = (arr_1 [i_1]);
                arr_62 [i_2] [i_2] [i_2] = var_9;
            }
        }
        for (int i_18 = 0; i_18 < 22;i_18 += 1)
        {
            var_37 = (max(var_37, (((((1 ? 8753 : -1849818220307889025)) | (arr_6 [i_18] [i_18] [i_18]))))));
            arr_66 [i_1] [i_1] [19] = (arr_42 [i_1] [i_1] [i_1] [i_1] [i_1] [8] [i_18]);
        }
        for (int i_19 = 0; i_19 < 22;i_19 += 1)
        {
            var_38 = 47044;
            /* LoopNest 2 */
            for (int i_20 = 0; i_20 < 22;i_20 += 1)
            {
                for (int i_21 = 4; i_21 < 21;i_21 += 1)
                {
                    {
                        arr_74 [i_21] [i_19] = (0 < -26217);
                        var_39 = var_0;
                    }
                }
            }
            arr_75 [i_1] [i_19] = ((arr_15 [i_1] [i_1] [i_19] [i_19] [i_19] [2]) >= (arr_23 [i_1] [i_1]));
        }
        for (int i_22 = 0; i_22 < 22;i_22 += 1)
        {
            var_40 = (arr_79 [13] [i_1] [i_1]);
            arr_80 [i_1] [i_1] [i_1] = (((94 && var_0) != 51));
        }
        var_41 = (arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
        var_42 = 68;
    }
    var_43 = var_12;
    #pragma endscop
}
