/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_10 = (min(var_10, (((234 ? var_6 : (arr_4 [i_0] [i_1]))))));
                    arr_7 [13] [i_1] [i_0] [i_0 + 1] = ((((28495 >= (arr_2 [i_0]))) ? (2275223712910051540 * 65526) : ((63 ? var_8 : (arr_6 [i_0 - 1] [i_1] [4])))));
                }
                for (int i_3 = 2; i_3 < 14;i_3 += 1) /* same iter space */
                {
                    var_11 = (min(var_11, ((min(3935336354408526806, ((-(arr_6 [i_0] [i_1] [i_0]))))))));
                    var_12 ^= (max((((0 / (arr_4 [i_0 - 2] [i_3 - 1])))), ((((max(10, var_6))) ? (min(18446744073709551613, var_3)) : var_1))));
                    var_13 = (min(var_13, (!184)));
                    arr_10 [i_3] [i_1] [i_3] = (max((~37040), var_2));
                }
                for (int i_4 = 2; i_4 < 14;i_4 += 1) /* same iter space */
                {
                    arr_13 [i_0] [i_1] = (min((min((arr_12 [i_0 - 1] [i_1] [i_4]), var_2)), (arr_11 [8] [i_0 - 1] [8] [i_0 - 1])));
                    arr_14 [i_4 - 2] [i_1] [i_0] = ((var_4 != ((max(var_9, var_9)))));
                }

                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    arr_17 [i_1] [i_1] [i_1] [i_5] = 207;
                    var_14 *= ((18446744073709551598 ? (28485 / var_8) : 63));
                    arr_18 [i_0] [13] [i_5] = ((((((arr_3 [i_0]) ? var_9 : (arr_5 [4] [i_0 - 1] [8])))) ? var_7 : (max(-1, (arr_3 [i_0])))));
                    arr_19 [i_5] [i_5] [i_5] [i_0 + 1] = 239;
                }
                /* vectorizable */
                for (int i_6 = 1; i_6 < 14;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 15;i_8 += 1)
                        {
                            {
                                var_15 = 45533;
                                arr_29 [i_0] [i_1] [i_7] [i_7 - 1] [i_8 - 2] [i_6 + 1] = ((var_4 ? 1 : (arr_26 [i_0 - 1] [i_6 + 2] [i_7] [i_8 - 1])));
                                arr_30 [i_0 - 1] [2] [i_6] [i_7 - 3] [i_7] [i_6 + 2] [i_1] = (((((-9223372036854775785 ? (arr_3 [i_1]) : 240))) ? (arr_24 [i_0 - 2] [i_0 - 2] [i_1] [i_8]) : var_5));
                            }
                        }
                    }
                    var_16 = (max(var_16, ((((arr_12 [i_6 - 1] [i_0 - 1] [i_0 - 1]) && (arr_11 [i_6 + 1] [i_6 + 1] [i_0 - 2] [i_0 - 2]))))));
                }
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 12;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 15;i_11 += 1)
                        {
                            {
                                arr_39 [i_10] [i_9] [i_11 - 1] = ((-var_3 ? 56010 : var_8));
                                arr_40 [4] [i_1] [4] [i_1] [i_10] [0] [i_1] = (arr_36 [i_10] [i_9] [i_10]);
                                arr_41 [i_0] [i_0] [i_0] [i_10] [i_0 - 1] [5] [i_0 - 1] = (((~38) ^ (min(var_0, 20))));
                                var_17 = (max(var_17, var_2));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_12 = 2; i_12 < 15;i_12 += 1)
    {
        var_18 ^= (arr_44 [i_12]);
        var_19 = (min(var_19, var_6));
    }
    var_20 = (182 / 12174765391457661981);
    #pragma endscop
}
