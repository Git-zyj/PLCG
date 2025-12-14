/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        var_19 *= (((min((126 / 3722451158266455636), ((((arr_1 [i_0]) ? (arr_0 [i_0]) : var_12))))) * (-92 == 1)));
        arr_2 [i_0] [i_0 + 2] = ((((((var_11 || var_12) ^ (arr_1 [i_0])))) ? (max(var_11, (arr_1 [i_0 - 3]))) : (((((0 ? var_16 : 1)))))));
        var_20 = (max(var_20, ((((((var_0 ? (arr_1 [i_0 - 2]) : (arr_1 [i_0 + 1])))) ? (arr_1 [i_0]) : ((((max((arr_1 [i_0 + 2]), (arr_0 [18]))) != -0))))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_21 = ((~(((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0])))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_22 *= (~var_15);
                            var_23 = (((1 % 82) ? 140788570 : 106));
                            var_24 = (arr_5 [i_0 - 3] [21] [i_0 - 1]);
                        }
                    }
                }
            }

            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    var_25 = (((arr_17 [i_0 + 1]) ? (arr_10 [i_6] [i_6] [i_6] [i_0 - 2] [i_0]) : (arr_8 [i_6] [6] [i_5] [i_0] [21] [i_0])));
                    var_26 |= 96;
                }

                for (int i_7 = 1; i_7 < 20;i_7 += 1)
                {
                    var_27 ^= (1 >> (3604375273 - 3604375258));
                    var_28 = ((var_6 | (!var_17)));
                    var_29 = (arr_3 [i_0 + 1] [i_0 + 1] [i_5]);
                }
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    var_30 = ((((-(arr_10 [17] [i_1] [i_0] [i_8] [i_5])))) ? (((((arr_12 [i_0] [i_1] [i_1] [i_1] [i_5] [i_5] [1]) < (arr_1 [i_8]))))) : 7510264098046984189);
                    var_31 = ((-(-32767 - 1)));
                }
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    arr_25 [i_1] [i_1] [9] [i_9] = (var_11 < var_17);
                    var_32 = ((((((arr_4 [22]) < (arr_11 [i_0] [i_1] [1] [i_5] [i_1])))) << (((!(arr_18 [i_0] [i_1] [13] [i_9]))))));
                    var_33 = ((4154178726 ? (var_13 * var_7) : (arr_14 [i_9])));
                    var_34 *= ((((arr_19 [i_0 + 2] [i_1] [22]) / var_0)) != (!var_3));
                }
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    var_35 = 1623024076;
                    var_36 = ((arr_15 [i_0] [i_0] [i_1]) == var_9);
                    var_37 = var_1;
                    var_38 = ((((var_8 ? 8994794218241618462 : var_11))) ? 63 : ((var_12 ? var_6 : 1)));
                    var_39 = (((arr_6 [i_5] [17]) ? -var_16 : (arr_16 [i_0] [i_1] [i_5] [1])));
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        {
                            var_40 = (max(var_40, ((((var_9 == 18014398509481983) ? (((var_2 ? var_6 : 672276929))) : (0 * 140788570))))));
                            var_41 = (((((arr_17 [i_1]) && (arr_6 [i_5] [7]))) ? (arr_22 [12] [i_1] [i_0 - 2] [i_11]) : (4154178726 / var_5)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_13 = 1; i_13 < 1;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {
                        {
                            arr_40 [i_1] = var_1;
                            arr_41 [1] [i_1] [i_1] [i_13] [i_14] = (18899 != 690592023);
                        }
                    }
                }
                var_42 &= ((-32763 & (((!(arr_29 [i_0 - 1] [22] [i_0] [i_5]))))));
            }
        }
        for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
        {
            var_43 -= (((+(max((arr_5 [i_0] [i_15] [i_15]), (arr_22 [i_0] [i_15] [i_0] [i_15]))))) ^ -16384);
            var_44 = (((arr_17 [i_0 - 3]) / 1));
        }
        var_45 ^= ((min(var_12, ((min(var_6, (arr_7 [i_0] [i_0] [i_0] [i_0])))))));
    }
    for (int i_16 = 0; i_16 < 1;i_16 += 1)
    {

        /* vectorizable */
        for (int i_17 = 0; i_17 < 17;i_17 += 1)
        {
            var_46 = ((-12685 || (arr_22 [i_16] [i_16] [i_16] [i_16])));
            var_47 = (((1 ^ var_18) - var_4));
        }
        var_48 = (((((var_4 & -1623024058) & (max((arr_23 [i_16] [16] [i_16] [i_16]), -3158526483896131358)))) <= ((min((arr_35 [1] [i_16] [1] [10] [i_16] [i_16]), 1)))));
    }
    var_49 = (!12693);
    #pragma endscop
}
