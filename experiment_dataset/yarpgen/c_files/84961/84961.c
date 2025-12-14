/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_20 = -46;
                                var_21 = -2615627402194500061;
                            }
                        }
                    }
                }
                arr_12 [i_0] = (((((~(~var_18)))) ? (arr_9 [i_1] [i_1] [i_1] [i_1] [i_1] [i_0]) : (((~(arr_5 [i_0] [i_1] [i_0]))))));
                arr_13 [i_0] [i_1] = ((((arr_0 [i_1] [i_0]) ? (min(var_18, (arr_9 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1]))) : var_12)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            {
                var_22 = (((((((var_5 ? var_17 : 0)) ^ (arr_0 [i_5] [i_5])))) ? ((((2147483647 >= 255) ? var_12 : (min(var_4, var_9))))) : (((arr_2 [i_5] [i_6]) ? var_14 : var_19))));

                for (int i_7 = 3; i_7 < 11;i_7 += 1)
                {
                    var_23 = ((((min(-7535305434764147519, var_2))) ? ((min(1260, (arr_6 [i_7 - 1] [i_6] [i_5])))) : ((min(var_10, (min(var_5, var_5)))))));
                    var_24 = (max(var_24, (((min(var_18, var_8))))));
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 9;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            {
                                arr_27 [i_5] [i_5] [i_7] [i_8] [i_9] = (min(1260, 1260));
                                arr_28 [i_5] = (((arr_8 [i_6] [i_6] [i_7 + 1] [i_8]) << (var_6 - 73)));
                                arr_29 [i_5] [i_6] [i_6] [i_7] [i_6] [i_8] [i_9] = ((+((~(((arr_19 [i_5] [i_9]) % var_4))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_12 = 0; i_12 < 12;i_12 += 1)
                            {
                                arr_42 [i_5] [i_12] = (((arr_7 [i_6] [i_6] [i_6] [i_6]) - (((arr_33 [i_5] [i_12] [i_12]) ? var_5 : (arr_16 [i_5] [i_5])))));
                                var_25 = var_9;
                                arr_43 [i_5] [i_6] [i_5] [i_5] [i_12] [i_12] = (((1 & 255) ? ((~(arr_24 [i_5] [i_6] [i_11] [i_12]))) : ((64276 << (var_6 - 83)))));
                                var_26 = (((arr_19 [i_5] [i_5]) ? (arr_14 [i_12]) : 224));
                                arr_44 [i_5] [i_10] [i_12] = (arr_40 [i_5] [i_5] [i_5] [i_5] [i_5]);
                            }
                            /* vectorizable */
                            for (int i_13 = 3; i_13 < 10;i_13 += 1)
                            {
                                var_27 = ((var_13 == (((arr_16 [i_5] [i_6]) ? var_13 : (arr_39 [i_11] [i_11] [i_11] [i_11] [i_5])))));
                                var_28 &= (arr_36 [i_13] [i_11] [i_6] [i_6] [i_6] [i_5]);
                                arr_49 [i_5] [i_5] [i_5] = var_13;
                            }
                            /* vectorizable */
                            for (int i_14 = 1; i_14 < 11;i_14 += 1)
                            {
                                arr_54 [i_5] [i_6] = (arr_19 [i_5] [i_14]);
                                var_29 = (~56067);
                            }
                            arr_55 [i_5] [i_5] [i_10] [i_10] [i_11] = (((0 ? (arr_50 [i_5] [i_5] [i_6] [i_10] [i_10] [i_11]) : (arr_50 [i_5] [i_5] [i_6] [i_6] [i_10] [i_11]))));
                            var_30 = arr_14 [i_11];
                        }
                    }
                }
                var_31 = ((((49 ? var_18 : var_2))) * ((((!(((var_0 ? var_3 : (arr_0 [i_5] [i_6])))))))));
            }
        }
    }
    #pragma endscop
}
