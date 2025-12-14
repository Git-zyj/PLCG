/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= var_3;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = (((arr_1 [i_0]) < (arr_1 [i_0])));
        arr_4 [i_0] = var_7;
        arr_5 [i_0] = var_8;
        arr_6 [i_0] = 16429790529143937429;
        arr_7 [i_0] [i_0] = (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_10 [i_1] [i_1] = (arr_3 [12]);
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    var_15 = (min((arr_9 [i_1] [i_2]), (arr_9 [i_3] [i_1])));
                    var_16 = ((!(arr_9 [i_3] [i_1])));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 12;i_5 += 1)
                        {
                            {
                                arr_24 [i_2] [i_2] = (((((~(arr_14 [i_2 - 1] [i_4 - 1] [i_2])))) && -var_11));
                                var_17 *= (min(((-((max(4822, -7443))))), (~76)));
                                arr_25 [i_2] [i_2] [i_2] [i_2] = (arr_2 [i_4]);
                                arr_26 [i_2] [i_1] [i_4] [i_1] [i_1] [i_2] = (arr_1 [i_2]);
                            }
                        }
                    }

                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        arr_29 [i_2] = (min(((-(max((arr_0 [i_6] [i_6]), var_2)))), (min(-4827, (arr_19 [i_1] [i_3])))));
                        var_18 = ((4294967294 ? (arr_11 [i_2 - 1]) : ((-(arr_15 [i_2 + 2] [i_2 + 3])))));
                    }
                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 14;i_7 += 1)
                    {
                        var_19 = ((-(arr_0 [i_2 + 3] [i_2 - 1])));
                        var_20 = var_5;
                        arr_33 [i_3] [1] [i_2] [i_2] [i_3] [i_1] = (((arr_1 [i_2 + 2]) ? ((((2 || (arr_27 [i_1] [i_2] [i_1] [i_7 + 1]))))) : (arr_21 [i_1] [i_2] [i_2] [i_3] [i_7] [i_7 - 1])));
                    }
                }
            }
        }

        for (int i_8 = 1; i_8 < 13;i_8 += 1) /* same iter space */
        {
            arr_37 [i_1] [i_1] = (!(arr_32 [i_8] [i_8 + 2] [i_8] [i_8 + 2]));
            var_21 = (arr_17 [i_8 - 1] [i_8 + 2] [i_8] [i_8 + 2]);
            var_22 = (max(var_22, (arr_30 [i_1] [0] [i_1] [i_8 - 1])));
        }
        for (int i_9 = 1; i_9 < 13;i_9 += 1) /* same iter space */
        {
            var_23 = var_2;
            arr_41 [i_1] [i_1] [i_1] = 0;
            arr_42 [i_1] [5] = 13481676138736773950;
            var_24 = ((var_12 && ((!(arr_9 [i_1] [i_9])))));
            arr_43 [i_1] [i_9 - 1] = (arr_12 [i_1] [i_9]);
        }
        for (int i_10 = 1; i_10 < 13;i_10 += 1) /* same iter space */
        {
            var_25 *= ((0 | (min((arr_22 [i_1] [i_1]), ((((arr_30 [i_1] [i_1] [i_10] [i_10]) <= var_5)))))));
            /* LoopNest 3 */
            for (int i_11 = 1; i_11 < 14;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 15;i_13 += 1)
                    {
                        {
                            arr_53 [i_1] [i_1] [i_1] [i_10] [i_12] [1] = (i_10 % 2 == zero) ? ((-(((arr_52 [i_1] [i_10] [1] [i_13] [i_11 + 1]) >> (((arr_22 [i_10] [i_10]) - 3273512133)))))) : ((-(((arr_52 [i_1] [i_10] [1] [i_13] [i_11 + 1]) >> (((((arr_22 [i_10] [i_10]) - 3273512133)) - 134231296))))));
                            var_26 |= ((~(((arr_18 [i_13] [i_11 - 1] [i_10] [i_1]) ^ 2))));
                            var_27 = (max(var_27, (((-(arr_49 [i_1] [i_10 + 1] [i_11 - 1] [i_12] [i_13]))))));
                            var_28 = ((233 || (((~(arr_39 [i_1] [i_10] [i_11 + 1]))))));
                        }
                    }
                }
            }
            arr_54 [i_10] [i_10] = (((((-(arr_28 [i_1] [i_1] [9])))) ? (min(-103456083536521544, (((~(arr_45 [i_1] [i_10])))))) : ((min((arr_23 [i_10] [i_10 - 1] [i_10] [i_10 + 1] [i_10 + 1]), (arr_23 [i_10] [i_10 + 1] [12] [i_10 + 2] [i_10]))))));
        }
    }
    for (int i_14 = 0; i_14 < 21;i_14 += 1)
    {
        arr_57 [i_14] = (max((((arr_56 [i_14] [i_14]) ? (arr_56 [i_14] [i_14]) : 10282)), ((((min(64370, 27174))) >> ((((-(arr_55 [i_14]))) + 5686677798459994131))))));
        arr_58 [i_14] = -100;
    }
    var_29 = ((-(!7204)));
    #pragma endscop
}
