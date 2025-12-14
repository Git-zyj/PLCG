/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(606041586, var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_15 = (min(var_15, ((min((((!(arr_6 [i_1 - 1] [i_1 + 1] [i_1 - 3])))), (max((arr_6 [i_1 - 1] [i_1 + 1] [i_1 - 1]), (arr_6 [i_1 - 2] [i_1 - 1] [i_1 - 3]))))))));
                                var_16 = (((!var_10) ? (max((min((arr_6 [i_0] [i_1] [i_2]), var_0)), (max((arr_6 [i_0] [i_1 + 1] [i_4]), var_7)))) : ((~(min(var_10, var_13))))));
                            }
                        }
                    }
                    var_17 = ((~(191 > 4885705749333695494)));

                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 18;i_5 += 1) /* same iter space */
                    {
                        var_18 = (arr_1 [i_0] [i_1]);

                        for (int i_6 = 3; i_6 < 20;i_6 += 1)
                        {
                            arr_17 [i_0] [i_5] [i_2] [i_5] [i_6] = arr_4 [i_5] [i_5] [i_5];
                            var_19 = (((arr_16 [i_6] [14] [i_6 + 1] [i_6 - 2] [i_6] [i_0]) / (((arr_7 [i_0] [i_0] [i_0]) ? (arr_12 [i_0]) : var_11))));
                            var_20 = var_12;
                            var_21 *= (((arr_14 [i_0] [i_1] [i_2] [i_5]) / (arr_15 [i_0] [i_0] [i_1 - 3] [i_5] [i_6])));
                        }
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            arr_21 [16] [i_5] [i_2] [i_5] [8] = ((!((!(arr_4 [i_5] [i_2] [i_1])))));
                            var_22 *= (((arr_13 [i_0] [i_1] [i_1] [i_2] [i_5] [i_7]) ? var_8 : var_10));
                            var_23 |= (((~var_4) && ((!(arr_7 [i_0] [i_1 + 1] [i_7])))));
                            var_24 = (max(var_24, (((!((!(arr_18 [18] [i_1] [18] [i_1]))))))));
                        }
                        var_25 ^= var_10;
                    }
                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 18;i_8 += 1) /* same iter space */
                    {
                        var_26 = (arr_16 [i_0] [i_0] [i_1] [14] [i_2] [i_0]);
                        var_27 = (max(var_27, (((!(arr_4 [i_1 - 1] [i_1 - 2] [i_1 - 2]))))));
                        var_28 = ((((((arr_13 [i_0] [i_1] [i_2] [i_0] [4] [i_2]) / (arr_24 [0])))) ? (arr_0 [i_2]) : (arr_1 [i_1 - 1] [i_1])));
                    }
                    for (int i_9 = 1; i_9 < 18;i_9 += 1) /* same iter space */
                    {
                        arr_27 [i_9] = ((((((min((arr_4 [i_0] [i_0] [i_0]), (arr_12 [i_9])))) && (arr_2 [i_0] [i_0]))) && ((!((min(var_13, (arr_2 [i_2] [i_2]))))))));
                        arr_28 [i_0] [i_0] [i_0] [i_9] [i_9] [i_9] = (max((!191), (((arr_5 [i_1 + 1] [i_1 - 1] [i_1 - 1]) || (arr_5 [i_1 - 3] [i_1 + 1] [i_1 + 1])))));
                    }
                    var_29 ^= ((-(((!var_13) ? -var_10 : (((arr_25 [i_0] [i_1 + 1] [i_1 + 1] [18]) / (arr_10 [i_0] [0] [i_1] [2] [i_2])))))));
                    arr_29 [i_2] [i_2] [i_2] [i_2] = (min((arr_2 [i_2] [i_0]), ((((!var_8) - (261653423 * 1704046865))))));
                }
                /* LoopNest 3 */
                for (int i_10 = 2; i_10 < 20;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 20;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 21;i_12 += 1)
                        {
                            {
                                var_30 = ((max((min(3688925710, 191)), (~606041586))));
                                var_31 = ((((((((((!(arr_22 [i_0]))))) < (min(var_3, (arr_23 [3] [6] [i_10] [i_10] [i_12]))))))) != ((max(var_1, (arr_1 [i_10 - 1] [i_12]))))));
                                var_32 = (arr_4 [i_10 + 1] [i_1 + 1] [i_1 - 2]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_33 = max(((((~var_4) % (var_1 != var_3)))), ((-(max(var_3, var_7)))));
    /* LoopNest 2 */
    for (int i_13 = 1; i_13 < 15;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 16;i_14 += 1)
        {
            {
                var_34 = (max((((((var_10 * (arr_26 [i_13] [i_13] [i_13 + 1] [i_14])))) ? (min(150, -3046101355107153766)) : (min((arr_4 [i_14] [i_14] [i_13]), (arr_0 [i_13]))))), ((max((((!(arr_39 [i_14])))), (max((arr_8 [12] [18] [12] [i_14]), (arr_9 [i_13] [i_14] [i_13] [i_14]))))))));

                for (int i_15 = 0; i_15 < 16;i_15 += 1)
                {
                    var_35 = (max(var_35, ((min(191, (arr_19 [i_13] [i_14] [i_15] [i_14] [6]))))));
                    var_36 = ((-((-(arr_8 [i_13 + 1] [i_13 + 1] [i_14] [i_15])))));
                    var_37 &= arr_7 [12] [i_14] [i_15];
                }
            }
        }
    }
    #pragma endscop
}
