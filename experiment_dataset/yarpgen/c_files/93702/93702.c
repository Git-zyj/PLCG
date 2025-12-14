/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_12 = ((1372624536 != (arr_2 [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_0] [i_1] [i_2] [i_1] [i_3] = var_4;

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            arr_15 [12] [8] [i_2 - 2] [i_2] [8] = 255;
                            arr_16 [i_2] [i_1] [i_2] [i_2] [17] = (((((((arr_3 [i_2 - 2] [i_2] [i_2]) ? (min(var_10, var_7)) : -var_0)) + 2147483647)) << ((((255 ? var_7 : (((!(arr_11 [i_0] [i_1] [i_2 - 2])))))) - 545585845))));
                            var_13 = (-256 ? (((((min(var_0, 26)))) - (arr_0 [i_0]))) : (arr_13 [2] [2] [i_2] [i_3] [i_4]));
                        }
                        for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                        {
                            arr_20 [i_2] [i_1] = var_6;
                            arr_21 [i_2] [i_0] [i_1] [i_0] [i_2] [i_3] [21] = (min((((max(var_5, 1)))), (16570118714042776112 + var_9)));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                        {
                            var_14 = (arr_24 [i_1] [i_2 + 1] [1] [i_3] [i_6] [i_1] [i_2 - 1]);
                            arr_26 [i_2] [i_2] [18] [i_6] = ((((var_0 >> (var_4 - 44939))) ^ var_7));
                            var_15 = (((arr_9 [i_0] [i_1] [i_2] [i_3] [i_6]) ^ ((var_8 ? 36965 : var_2))));
                            var_16 = var_4;
                        }
                        var_17 = (-255 != 1768136952);
                    }
                }
            }
        }
        var_18 = ((max((min(-1810285556, 255), -255))));
    }

    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        arr_29 [i_7] [i_7] = (~var_1);
        var_19 = ((((var_6 ? (arr_25 [i_7] [i_7] [17] [i_7] [i_7]) : ((min(var_9, (arr_7 [i_7] [i_7] [i_7])))))) | (((!(((28570 ? var_2 : (arr_0 [i_7])))))))));
        arr_30 [i_7] = -240;
    }
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        var_20 = (((((min(var_11, var_0)))) ? var_9 : ((-var_1 ? var_8 : var_10))));
        var_21 = ((((min((arr_3 [14] [i_8] [i_8]), var_3))) < (1 != -23164)));
    }
    for (int i_9 = 0; i_9 < 10;i_9 += 1)
    {
        var_22 = ((((var_3 ? 19 : var_3))));
        var_23 = (((-(arr_10 [i_9] [i_9] [i_9] [18] [i_9]))));
        var_24 = 255;
    }
    for (int i_10 = 0; i_10 < 11;i_10 += 1)
    {

        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            arr_41 [9] = (min(1, (var_6 <= var_0)));
            var_25 = ((-24 ? 10 : 0));
        }
        var_26 = ((((((arr_25 [i_10] [i_10] [i_10] [i_10] [i_10]) ? ((var_8 ? var_8 : var_0)) : 1))) ? (arr_5 [0]) : (arr_27 [i_10])));
        /* LoopNest 3 */
        for (int i_12 = 2; i_12 < 10;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 11;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 9;i_14 += 1)
                {
                    {
                        arr_50 [i_10] [i_13] [2] [i_13] [i_14] [i_14 - 1] = (13890902660331477711 > 2263);
                        var_27 = var_9;
                        arr_51 [i_13] [i_12 + 1] [i_12 + 1] [i_12] [2] = 1;
                    }
                }
            }
        }
    }
    var_28 = var_8;
    #pragma endscop
}
