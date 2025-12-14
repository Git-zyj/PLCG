/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_17 = 25387;
        var_18 ^= ((((!(arr_0 [i_0] [i_0 + 1]))) && 29360128));
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        arr_12 [i_2] [i_2] [3] [i_2] = (((arr_1 [2] [2]) ? ((40149 ? (arr_8 [3]) : var_7)) : (((arr_2 [i_4]) >> (arr_1 [i_2] [i_1])))));
                        arr_13 [i_1] [i_2] [9] [3] [7] = ((((arr_4 [i_3]) && 40125)));
                        var_19 = (((arr_2 [i_1 - 1]) ? (arr_8 [i_1]) : (var_5 * var_8)));
                        arr_14 [6] [i_1] [1] [i_3] [i_4] = var_1;
                    }
                }
            }
            arr_15 [i_2] = (((arr_0 [i_1 - 1] [i_1 + 1]) < (-3989319585223979360 >= var_12)));
        }
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {

            /* vectorizable */
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                var_20 = ((var_0 >= (arr_16 [i_1 + 1])));
                var_21 = (((arr_10 [i_1] [i_5] [i_1] [i_1] [i_6]) ? ((var_13 ? (arr_16 [i_5]) : (arr_7 [i_1 + 1] [i_5]))) : (var_7 * var_16)));
            }
            var_22 ^= (arr_9 [i_1]);
        }
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 4; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    {
                        var_23 = var_6;
                        var_24 = var_13;
                        arr_29 [i_1 + 1] [7] [i_1 - 1] [i_1 + 1] [10] [10] = (((40149 ? 11304578950230678905 : 0)));
                        arr_30 [i_9] [3] [3] [i_1 + 1] = (arr_22 [i_8]);
                    }
                }
            }
        }
    }
    for (int i_10 = 1; i_10 < 10;i_10 += 1) /* same iter space */
    {
        arr_34 [i_10] [i_10 + 1] = (((arr_32 [i_10]) ? var_7 : ((((((arr_4 [i_10]) ? var_16 : var_14))) ? 7142165123478872711 : (arr_23 [i_10])))));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                {
                    arr_40 [i_12] = (((((8375512114116918951 ? 7142165123478872711 : (arr_8 [i_10 + 1])))) ? (arr_8 [i_10 - 1]) : (((var_6 && (arr_8 [i_10 - 1]))))));
                    arr_41 [i_12] [4] [i_12] = (((92 - 25387) | (((-1322645641855531533 & 10171702286302162614) ? (arr_1 [i_10] [i_12]) : (((arr_19 [i_11] [i_10] [i_12] [i_11]) & var_0))))));

                    for (int i_13 = 2; i_13 < 9;i_13 += 1)
                    {
                        arr_46 [i_12] [i_12] = var_1;
                        arr_47 [i_12] [i_11] [i_11] [i_12] = ((11304578950230678910 ? ((((((arr_27 [i_11]) >> (arr_1 [1] [7])))) ? (~0) : (~var_11))) : var_3));
                        var_25 = ((((!(arr_42 [i_10 + 1]))) ? (arr_42 [i_10 - 1]) : (arr_42 [i_10 - 1])));
                    }
                }
            }
        }
        var_26 = (arr_10 [1] [i_10] [i_10] [i_10] [1]);
        var_27 = (~40149);
    }
    var_28 = var_10;
    var_29 = (min(var_29, ((min(var_4, ((~(max(var_15, var_1)))))))));
    #pragma endscop
}
