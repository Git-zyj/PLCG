/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [16] = (max(-15581, (arr_7 [i_2] [i_2] [i_1] [i_0])));

                        /* vectorizable */
                        for (int i_4 = 3; i_4 < 24;i_4 += 1)
                        {
                            arr_13 [i_0] [i_0] [i_4] [i_3] [i_4] = 18446744073709551615;
                            var_11 -= ((-var_0 != (arr_11 [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 2] [i_4 + 1] [i_4 + 1])));
                        }
                        var_12 = (min(var_12, -15567));
                        var_13 &= (min((((((var_9 ? var_10 : var_4)) == (88 % var_1)))), (((var_2 & (arr_11 [i_0] [23] [i_1] [i_0] [i_2] [23]))))));
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {

            for (int i_6 = 3; i_6 < 24;i_6 += 1)
            {
                var_14 = (~-15601);
                var_15 -= ((-var_3 ? (1946834043 / -15567) : (1 * var_2)));
                var_16 = (!var_4);
            }
            var_17 = (((arr_18 [i_0] [i_0] [i_5]) ? (arr_18 [i_5] [i_5] [i_0]) : 15565));

            for (int i_7 = 1; i_7 < 23;i_7 += 1)
            {

                for (int i_8 = 1; i_8 < 23;i_8 += 1)
                {
                    arr_26 [i_0] [i_0] [i_0] [i_0] = 91;
                    arr_27 [i_0] [i_5] [i_7 + 2] [i_8] = (1 / 4294967295);
                    var_18 = (((((arr_19 [i_8]) != var_8)) ? -var_0 : var_2));
                }
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    arr_31 [i_0] [i_0] [i_0] [i_9] = (((arr_25 [17] [i_7 + 2] [i_7] [i_7 + 1] [i_7 - 1]) + (var_8 + 0)));
                    arr_32 [i_9] = var_8;
                    arr_33 [i_9] [i_7] [i_5] [22] [10] = (1 <= 64153);
                }
                var_19 = (((var_6 ? 255 : 255)));

                for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
                {
                    var_20 = (max(var_20, ((((((~(arr_30 [i_0])))) ? (arr_34 [i_0] [i_5]) : -1971461741)))));
                    arr_36 [i_0] [i_5] [21] [4] = ((((((arr_19 [i_0]) & 87))) ? (((arr_23 [i_5] [i_7] [i_0] [i_10]) ? (arr_8 [i_5]) : var_1)) : (!var_8)));
                }
                for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
                {
                    var_21 = -var_7;
                    var_22 = (!var_8);
                }
                for (int i_12 = 0; i_12 < 25;i_12 += 1) /* same iter space */
                {

                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        arr_43 [i_13] [i_7] [i_12] [3] [i_7] [15] [i_0] = ((((((arr_11 [i_0] [22] [i_0] [i_0] [i_0] [i_0]) & (arr_2 [i_0])))) ? (((!(arr_6 [i_0])))) : (arr_2 [i_0])));
                        arr_44 [i_0] [i_5] [i_12] [i_12] |= (arr_35 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1]);
                        arr_45 [i_0] [i_5] [i_7] [i_7] [i_13] = var_5;
                    }
                    var_23 = var_8;
                    arr_46 [i_0] [i_5] [i_5] [i_7] [23] [i_12] = (!var_0);
                }
                var_24 = (!0);
            }
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 25;i_14 += 1) /* same iter space */
        {

            for (int i_15 = 0; i_15 < 25;i_15 += 1)
            {

                for (int i_16 = 0; i_16 < 25;i_16 += 1)
                {
                    arr_56 [4] [4] [4] [4] [i_16] = (((var_10 != var_2) ? (var_7 >= var_8) : var_6));
                    var_25 = (91 % 1);
                }
                for (int i_17 = 0; i_17 < 25;i_17 += 1)
                {

                    for (int i_18 = 0; i_18 < 25;i_18 += 1)
                    {
                        var_26 = ((15926169766132260751 ? 127 : -24));
                        var_27 -= ((var_7 <= (arr_60 [i_0] [i_14] [i_14] [i_18] [i_17] [i_14])));
                        arr_62 [i_17] [i_18] |= var_1;
                    }
                    var_28 = var_9;
                    var_29 = 152;
                }

                for (int i_19 = 0; i_19 < 25;i_19 += 1) /* same iter space */
                {
                    arr_66 [i_0] [i_0] [i_15] [i_0] [i_0] |= (((var_1 % var_1) == var_0));
                    arr_67 [i_0] [i_0] [i_0] [i_0] = (arr_17 [i_0] [i_15] [i_19]);
                    var_30 = (max(var_30, (!6381639240789842697)));
                    var_31 -= ((~(24 % 2147483642)));
                    var_32 &= -var_3;
                }
                for (int i_20 = 0; i_20 < 25;i_20 += 1) /* same iter space */
                {
                    arr_71 [i_0] [i_14] [i_14] [i_20] = ((~(arr_12 [0] [0] [20] [0] [20] [i_15] [i_15])));
                    var_33 = (9 ? 9 : 8997489725801254797);
                }
            }
            for (int i_21 = 0; i_21 < 25;i_21 += 1)
            {
                arr_74 [1] [1] [1] = ((((((arr_47 [i_14] [i_21]) ? var_2 : var_0))) <= (((arr_53 [i_0] [i_0] [i_0] [i_0]) ? (arr_5 [i_0] [i_0] [12]) : 11))));
                arr_75 [i_0] [i_14] [i_21] [1] = ((59745 & (arr_22 [i_0] [i_14] [i_21])));
                arr_76 [i_0] [23] [i_21] [i_21] = ((arr_28 [i_0] [i_14] [0] [i_14]) ? var_2 : 7152983647878223300);
            }
            for (int i_22 = 0; i_22 < 1;i_22 += 1)
            {
                var_34 = (((127 & var_1) ? var_10 : ((var_7 ? 0 : 1))));
                var_35 = ((var_4 == (arr_78 [i_22] [i_22] [0] [i_0])));
                /* LoopNest 2 */
                for (int i_23 = 2; i_23 < 21;i_23 += 1)
                {
                    for (int i_24 = 1; i_24 < 24;i_24 += 1)
                    {
                        {
                            arr_84 [i_24] = ((1 >= (var_4 != var_10)));
                            arr_85 [i_0] [i_0] [i_0] [i_24] [i_0] = (arr_11 [1] [i_24 - 1] [1] [i_23 - 1] [i_24] [1]);
                        }
                    }
                }
            }
            var_36 = (arr_65 [i_0] [i_14] [i_0] [i_14] [i_14] [i_14]);
            /* LoopNest 3 */
            for (int i_25 = 0; i_25 < 25;i_25 += 1)
            {
                for (int i_26 = 0; i_26 < 25;i_26 += 1)
                {
                    for (int i_27 = 0; i_27 < 25;i_27 += 1)
                    {
                        {
                            var_37 = (!-var_1);
                            var_38 |= (~var_10);
                        }
                    }
                }
            }
        }
        for (int i_28 = 0; i_28 < 25;i_28 += 1) /* same iter space */
        {
            arr_97 [i_0] [i_0] [i_0] = (max(7152983647878223286, (((1 ? -2147483642 : ((min(1, -27553))))))));
            arr_98 [i_0] [i_28] [i_28] = (((((!-11) && (((2147483647 ? var_6 : var_1))))) && 599831958));
        }
        arr_99 [i_0] [i_0] = (((((11293760425831328316 - (((var_4 ? (arr_57 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : var_0)))))) ? 41 : (((min(var_3, var_3))))));
    }
    var_39 -= ((~(((((15565 ? var_5 : -15567))) ? (max(var_0, var_7)) : (((max(var_10, var_7))))))));
    var_40 = (min(var_40, ((min(var_1, ((15566 ? (min(10316, var_2)) : (((min(var_3, -10335)))))))))));
    #pragma endscop
}
