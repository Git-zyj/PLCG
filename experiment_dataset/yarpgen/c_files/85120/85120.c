/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_12 = (((arr_0 [i_0]) ? var_8 : (arr_2 [i_0])));
        arr_3 [i_0] = (arr_0 [i_0]);
        arr_4 [i_0] = (33520 ? 41411 : 15354742163188857190);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 7;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 7;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        var_13 = 41417;
                        var_14 = 15;
                        arr_14 [i_1] [i_1] [i_3 + 2] [3] = (i_1 % 2 == zero) ? (((!(((32015 >> (((arr_13 [i_1]) + 7241)))))))) : (((!(((32015 >> (((((arr_13 [i_1]) + 7241)) - 6357))))))));
                    }
                }
            }
        }
        arr_15 [i_1] [i_1] = 32017;
        var_15 = (arr_0 [i_1]);
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        var_16 = ((var_2 ? (arr_6 [8] [i_5]) : (arr_6 [0] [0])));
        var_17 ^= 10;
        /* LoopNest 2 */
        for (int i_6 = 4; i_6 < 9;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                {
                    var_18 = (var_3 - var_5);

                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        arr_27 [i_5] [i_8] [i_5] [i_8] = ((((-292131157910216830 ? var_4 : (arr_22 [i_8] [7]))) | 10088));

                        for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
                        {
                            arr_31 [i_5] [6] [i_5] [i_8] [0] [i_5] = -17;
                            arr_32 [i_9] [i_8] [i_7] [i_8] [i_5] = (!65535);
                            arr_33 [i_5] [i_6] [0] [i_7] [i_7] [i_8] [i_8] = (-17 - 292131157910216829);
                        }
                        for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
                        {
                            arr_38 [i_7] [i_8] [i_7] = (((arr_12 [i_5] [i_6] [i_6 + 1] [i_8] [i_10]) || 0));
                            var_19 &= ((((((arr_16 [i_5]) - 28195))) ? ((var_9 ? var_2 : 255)) : ((623465763 - (arr_28 [i_5] [i_6] [i_7] [i_8] [i_6])))));
                        }
                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            arr_43 [i_11] [i_8] [i_8] [i_7] [i_7] [i_8] [i_5] = 202085027;
                            var_20 = var_1;
                        }
                    }
                    var_21 -= ((!(14697091284627259900 - 227)));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 12;i_12 += 1)
    {
        var_22 = (max(var_22, 33516));
        var_23 = (max(var_23, (~0)));
        arr_46 [i_12] = ((255 ? 412316860416 : 28189));

        for (int i_13 = 0; i_13 < 12;i_13 += 1)
        {
            arr_49 [i_12] = (255 >= 2491);
            var_24 = (((arr_48 [i_12]) - -28));
            var_25 = ((var_4 >= (arr_47 [i_12])));
            var_26 ^= -260;
            var_27 = (max(var_27, 292131157910216823));
        }
        for (int i_14 = 0; i_14 < 12;i_14 += 1)
        {
            var_28 = ((-4129272976066884757 ? var_7 : (!255)));
            var_29 = (-989499475 | 201);
        }
        for (int i_15 = 0; i_15 < 12;i_15 += 1) /* same iter space */
        {
            var_30 ^= (!14);
            arr_56 [i_12] = 242;
            /* LoopNest 3 */
            for (int i_16 = 3; i_16 < 10;i_16 += 1)
            {
                for (int i_17 = 3; i_17 < 10;i_17 += 1)
                {
                    for (int i_18 = 1; i_18 < 10;i_18 += 1)
                    {
                        {
                            var_31 ^= ((4685591693869856509 ? var_4 : var_8));
                            var_32 = (min(var_32, -256));
                            var_33 = (i_12 % 2 == 0) ? (((((((121 ? (arr_58 [i_16]) : (arr_47 [i_12]))) + 2147483647)) >> (((arr_50 [i_12] [i_17 - 3] [i_12]) - 7450613936812073548))))) : (((((((121 ? (arr_58 [i_16]) : (arr_47 [i_12]))) + 2147483647)) >> (((((arr_50 [i_12] [i_17 - 3] [i_12]) - 7450613936812073548)) - 5932052572677189283)))));
                        }
                    }
                }
            }
        }
        for (int i_19 = 0; i_19 < 12;i_19 += 1) /* same iter space */
        {
            var_34 = (((arr_50 [i_12] [10] [i_19]) ? var_7 : var_0));
            var_35 = (((arr_51 [i_12] [i_12] [i_19]) ? (((arr_45 [6] [i_19]) ? 69 : 63)) : 134));
        }
    }
    var_36 = ((((min(-242, var_6))) ? var_11 : var_7));
    var_37 = (max(292131157910216824, var_4));
    #pragma endscop
}
