/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 1210841777;

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_18 = (max(((8554552615145675105 ? (1210841777 & -9114929080066182181) : var_10)), 9007199237963776));
                    var_19 = (min(var_19, var_3));
                }
            }
        }
        var_20 = ((((var_15 ? var_16 : var_7))));
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_21 = ((!((((36782 / var_12) ? var_11 : (var_8 || var_2))))));
                            arr_19 [i_3 + 1] [i_3] [i_5] [8] = (arr_10 [i_3] [i_3]);
                            arr_20 [i_0] &= ((0 ? (arr_14 [i_0 + 2] [i_0] [i_0 - 1] [i_0]) : (arr_18 [i_0 + 1] [i_0 - 1] [i_0 + 1] [18] [i_0])));
                            var_22 ^= ((((((arr_9 [i_4] [i_5] [i_6]) ? ((max(var_13, 24))) : (241 == 241)))) ? ((var_7 ? (min(var_2, (arr_1 [i_0]))) : (~var_10))) : (((((((~(arr_10 [i_0] [i_0])))) && 16))))));
                        }
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            var_23 = (arr_3 [1] [1]);
                            var_24 = var_11;
                            var_25 -= (((~var_9) ? var_10 : (max(-9114929080066182181, var_9))));
                            arr_24 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0] [i_0] &= 99;
                            arr_25 [i_0 + 1] [i_3] = ((((((arr_18 [i_3] [i_3 - 1] [10] [i_4] [i_3]) ? var_6 : var_1))) && (var_1 ^ var_2)));
                        }
                        var_26 = (max(var_26, 3227475910));
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 16;i_11 += 1)
                {
                    {

                        for (int i_12 = 0; i_12 < 16;i_12 += 1) /* same iter space */
                        {
                            var_27 = (arr_31 [i_11] [i_10] [i_9]);
                            var_28 = var_7;
                            arr_40 [i_12] [i_11] [i_10] [i_11] [i_12] = (var_14 ? ((min((var_10 * var_14), var_7))) : (arr_17 [i_10] [i_10] [i_10] [i_10] [i_9] [i_9] [i_10]));
                            var_29 = ((((min((arr_8 [i_8] [i_11]), (arr_8 [i_10] [i_11])))) >> (var_11 - 1401821747)));
                        }
                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 16;i_13 += 1) /* same iter space */
                        {
                            arr_43 [i_8] [i_8] [i_13] [i_8] [i_8] [14] = (arr_32 [i_13]);
                            var_30 = (7948 / var_5);
                            var_31 = (max(var_31, (((((((arr_30 [i_10] [i_9]) ? (arr_11 [5] [i_10] [i_10]) : 3594515537))) ? ((36 ? -9114929080066182181 : var_7)) : (arr_9 [i_8] [i_11] [i_13]))))));
                        }
                        var_32 = var_13;
                        var_33 = (min(var_7, (((arr_36 [i_8] [i_9] [14] [i_8] [i_8] [i_9]) / (arr_12 [i_8] [i_11] [i_10] [i_10])))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 16;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 16;i_15 += 1)
                {
                    {

                        for (int i_16 = 1; i_16 < 15;i_16 += 1)
                        {
                            arr_52 [i_16] [i_16] = ((-(max((arr_18 [i_16] [i_16] [i_16 - 1] [i_16 - 1] [i_16]), var_0))));
                            var_34 = (min(var_34, ((((max(var_7, (arr_37 [i_8] [i_14] [i_15] [7]))))))));
                            var_35 = (arr_17 [i_8] [i_9] [i_16] [i_8] [i_16 - 1] [i_8] [i_16]);
                            var_36 = (arr_8 [i_16] [i_14]);
                        }
                        var_37 &= var_16;
                        var_38 = ((((max((max(var_9, 1067491385)), (!240)))) ? ((max(var_4, (var_6 == var_8)))) : (arr_16 [10] [10] [i_9] [i_14] [i_14] [i_15] [i_15])));

                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 16;i_17 += 1)
                        {
                            var_39 = var_6;
                            var_40 = ((+(((arr_28 [i_8] [i_8]) / var_9))));
                        }
                        /* vectorizable */
                        for (int i_18 = 1; i_18 < 15;i_18 += 1)
                        {
                            var_41 = (3084125525 & -1291020751);
                            var_42 += ((var_11 == (arr_55 [i_15] [i_18 - 1] [i_18 - 1] [i_18] [i_18 - 1])));
                        }
                    }
                }
            }
            arr_59 [i_9] [i_8] = var_1;
        }
        for (int i_19 = 0; i_19 < 1;i_19 += 1)
        {
            arr_62 [i_19] [i_8] [i_19] = 1;
            /* LoopNest 3 */
            for (int i_20 = 0; i_20 < 16;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 16;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 16;i_22 += 1)
                    {
                        {
                            arr_70 [i_8] [i_8] [i_19] [i_19] [i_20] [i_21] [i_19] = (((var_4 < (arr_64 [i_8] [i_8] [i_8]))) ? ((((arr_39 [i_8] [i_8] [10] [i_21] [14] [i_21]) * var_3))) : ((((!(arr_53 [i_19] [i_19]))) ? var_11 : (arr_68 [i_8] [i_19] [i_19] [i_20] [i_21] [i_22]))));
                            arr_71 [i_8] [1] [i_20] [i_21] [i_21] [i_22] [i_19] = var_12;
                        }
                    }
                }
            }
            var_43 = (arr_69 [i_19] [i_19] [i_19]);
        }
        var_44 = (max(var_44, var_14));
        var_45 = (arr_15 [16] [i_8] [14] [i_8]);
    }
    var_46 = var_8;
    #pragma endscop
}
