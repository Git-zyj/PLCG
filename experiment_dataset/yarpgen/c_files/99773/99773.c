/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_10 *= ((-(((arr_10 [i_0]) ? (arr_7 [i_0] [i_0] [i_3]) : 0))));
                            var_11 = var_9;
                            var_12 = 255;
                        }
                    }
                }
                var_13 = (min(var_13, var_4));
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {

        for (int i_5 = 3; i_5 < 12;i_5 += 1)
        {
            var_14 = ((~(((arr_13 [i_4] [i_4]) ? var_3 : (arr_16 [i_4])))));
            arr_18 [12] [i_4] [i_5] = (~1);
        }
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            var_15 = (min(var_15, (253 != var_5)));
            var_16 = (((arr_16 [i_4]) || (arr_16 [i_4])));
            arr_22 [i_4] [i_4] [i_4] = (arr_15 [i_6]);
            var_17 = ((~60406) ? (arr_12 [i_4]) : (arr_13 [i_4] [i_6]));

            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                arr_25 [i_4] [i_4] [i_4] [6] = ((475349864 * (((arr_9 [i_4] [1] [i_6] [i_7] [i_7] [5]) / var_7))));
                arr_26 [i_4] = (arr_0 [i_4]);
            }
        }
        for (int i_8 = 1; i_8 < 1;i_8 += 1)
        {
            var_18 *= (((-(arr_15 [i_8]))));
            var_19 = (max(var_19, (arr_19 [1] [i_8] [1])));
            arr_29 [i_4] [i_4] = (arr_9 [i_8 - 1] [1] [i_8 - 1] [i_8 - 1] [i_8] [i_8 - 1]);
        }
        var_20 = (min(var_20, ((((var_4 ? var_7 : 60406))))));
    }
    for (int i_9 = 2; i_9 < 16;i_9 += 1)
    {
        arr_32 [i_9] = ((-(max((arr_1 [i_9 + 1]), var_8))));
        arr_33 [i_9 - 2] |= ((((min(var_3, 5129))) ? (arr_0 [i_9]) : (min(-var_5, ((((arr_2 [i_9] [i_9]) ? var_8 : 60402)))))));
        /* LoopNest 3 */
        for (int i_10 = 1; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    {
                        arr_42 [i_9] [i_9] [i_11] [i_12] = var_0;

                        for (int i_13 = 0; i_13 < 17;i_13 += 1)
                        {
                            var_21 = var_1;
                            var_22 = ((((((max(var_4, (arr_45 [i_11] [i_11])))) ? (!var_2) : (!60406))) ^ (((!(((54428 ? var_9 : var_0))))))));
                            var_23 = (min(var_23, ((((arr_36 [i_11] [i_11]) ? ((~(min(255, (arr_5 [i_9]))))) : 1)))));
                            arr_46 [i_9] [i_9] [i_11] [i_9] [i_9 + 1] &= (min(((~(arr_43 [i_9] [i_9] [i_9 - 1] [i_10 - 1] [i_11] [i_11]))), ((((var_7 ? 255 : (arr_7 [i_9] [i_10 - 1] [i_9])))))));
                        }
                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 17;i_14 += 1)
                        {
                            arr_50 [i_14] [i_12] [i_11] [i_10] [i_9 - 2] = (((1 <= -3) * var_8));
                            var_24 ^= 1;
                        }
                        arr_51 [i_9] [i_9] [i_10] [i_9] [i_10] [i_9] = (min(var_6, ((max(var_7, var_1)))));
                        arr_52 [i_12] [i_11] [i_10] [i_9] = ((~(var_8 << 1)));
                    }
                }
            }
        }
    }
    for (int i_15 = 0; i_15 < 11;i_15 += 1)
    {
        var_25 |= arr_1 [i_15];
        var_26 = 0;
    }
    for (int i_16 = 1; i_16 < 20;i_16 += 1)
    {
        var_27 *= (1101993631788182327 * var_7);
        arr_59 [i_16] [i_16] = (max((arr_7 [i_16] [i_16] [1]), (~0)));
        arr_60 [i_16] = (((((max((arr_56 [7] [10]), 475349864)) <= var_8)) ? (((((var_2 ? var_3 : var_1))))) : (((arr_10 [i_16 + 1]) + var_5))));
        arr_61 [i_16] [i_16] = ((-((8127072963222141961 ? 32737 : 255))));
    }
    /* LoopNest 2 */
    for (int i_17 = 2; i_17 < 17;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 1;i_18 += 1)
        {
            {
                arr_68 [12] [i_18] |= (max((max(var_7, -0)), ((min(var_3, (~var_9))))));
                arr_69 [i_18] [i_18] = ((((max(((((arr_9 [i_18] [i_18] [i_17] [i_18] [i_17] [i_17]) < var_9))), (min(var_8, (arr_63 [i_17] [i_17])))))) ? (((((min((arr_5 [7]), 1958486605)) == (arr_64 [i_17 + 4]))))) : (((arr_4 [i_17] [i_17 + 1] [i_18] [i_18]) ? ((min((arr_1 [2]), var_9))) : (0 - var_5)))));
                var_28 -= (arr_6 [i_17] [i_17 - 2] [18] [18]);
                var_29 *= min((max((arr_10 [i_17 + 3]), 11229517849938548057)), ((max(60386, (arr_4 [i_17 + 3] [i_17] [i_17 + 4] [i_17 + 3])))));
            }
        }
    }
    var_30 += var_8;
    #pragma endscop
}
