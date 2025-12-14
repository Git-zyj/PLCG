/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_10 = -50;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_11 = (max(var_11, (((-50 ? -891532918 : -50)))));
                    arr_8 [i_1] [i_2] &= (min((arr_6 [i_2]), ((((((!(arr_2 [i_1] [i_2])))) >= (((arr_1 [i_2]) ? -12 : (arr_5 [i_1] [9] [i_1]))))))));
                }
            }
        }
        var_12 = (max(var_12, (-50 > -19)));
    }
    for (int i_3 = 1; i_3 < 19;i_3 += 1) /* same iter space */
    {
        var_13 *= ((((((arr_7 [i_3 - 1] [i_3 - 1] [i_3 - 1]) ? (arr_4 [i_3] [12]) : (max((arr_7 [i_3 + 1] [i_3] [i_3 + 1]), -1))))) ? (min((-19 >= 12), ((-1 ? var_5 : (arr_0 [i_3 + 1]))))) : var_1));
        arr_12 [i_3] = (max(-69, (arr_1 [i_3 - 1])));

        for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
        {
            arr_15 [i_3 - 1] [i_4] = ((((-17 <= ((((arr_13 [i_3 + 1]) <= 66072770))))) ? 22 : ((((max((arr_10 [i_3] [i_3]), (arr_14 [i_3] [i_4]))) >= 0)))));
            var_14 = (max(var_14, (((!(((-1 ? 0 : 14))))))));
            var_15 = (max(var_15, (max((arr_11 [i_3 - 1]), (arr_10 [i_3 - 1] [i_3])))));
            var_16 = arr_7 [i_3 - 1] [i_4] [i_3 - 1];
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_6 = 3; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 19;i_7 += 1)
                {
                    {
                        var_17 = (((((!(arr_13 [i_3])))) <= (-1 != -1)));
                        var_18 = (min(var_18, (arr_1 [i_6 - 1])));
                        var_19 = 14;
                        arr_24 [i_6] [i_6] [i_5] [i_6] = (1522522604 >= 11);
                    }
                }
            }
            var_20 &= (arr_13 [i_5]);
            var_21 = (((arr_11 [i_5]) <= var_5));
            arr_25 [i_3] [i_3] = ((var_1 / (arr_6 [i_5])));
        }
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 21;i_8 += 1)
    {
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    {
                        var_22 = ((-(arr_31 [i_8] [i_8] [i_11])));
                        var_23 = ((~((-9 * (arr_32 [i_11] [i_10] [i_9])))));
                        var_24 = ((-(69 != 14)));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 23;i_12 += 1)
        {
            for (int i_13 = 2; i_13 < 22;i_13 += 1)
            {
                {
                    var_25 += (((arr_33 [i_8 + 1]) > (arr_33 [i_8 - 2])));
                    var_26 = (min(var_26, var_5));
                    arr_40 [17] [17] = ((!(((-12 ? (arr_36 [i_8] [i_12] [i_12] [i_8]) : -17)))));
                    var_27 += ((!(var_5 != 69)));
                }
            }
        }
        arr_41 [i_8] [i_8 - 1] = ((arr_39 [i_8 + 1]) ? (arr_39 [i_8 + 2]) : (arr_33 [i_8 - 1]));
        var_28 &= (((arr_31 [i_8 - 2] [i_8 - 2] [i_8 + 2]) > -76));
        /* LoopNest 2 */
        for (int i_14 = 1; i_14 < 22;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 23;i_15 += 1)
            {
                {
                    var_29 *= (-97 > var_5);
                    var_30 = -16;
                    var_31 = (arr_27 [i_8]);
                    arr_48 [18] [i_14 - 1] [i_15] = var_0;
                    arr_49 [i_8] [i_8] [20] = ((-(var_0 > 17)));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 13;i_16 += 1)
    {
        var_32 = arr_0 [i_16];
        var_33 = (((arr_18 [i_16] [i_16] [i_16]) != (arr_33 [i_16])));
        var_34 += -73;
        /* LoopNest 2 */
        for (int i_17 = 2; i_17 < 11;i_17 += 1)
        {
            for (int i_18 = 3; i_18 < 9;i_18 += 1)
            {
                {
                    var_35 = 95;
                    var_36 |= ((-50 <= (arr_20 [i_18 - 1] [i_18 - 3] [i_17 - 1] [i_17 + 2])));

                    for (int i_19 = 0; i_19 < 13;i_19 += 1)
                    {
                        var_37 += (~(arr_43 [i_18 + 4] [i_17 - 2] [i_16]));

                        for (int i_20 = 2; i_20 < 12;i_20 += 1) /* same iter space */
                        {
                            arr_63 [i_18] = ((-1522522623 <= (arr_51 [i_19])));
                            var_38 = (((arr_22 [i_17] [i_16] [i_18 - 1] [i_17] [i_16]) <= (arr_22 [i_16] [i_16] [i_18 - 3] [i_19] [i_16])));
                        }
                        for (int i_21 = 2; i_21 < 12;i_21 += 1) /* same iter space */
                        {
                            var_39 &= (-1415305077 <= -11);
                            var_40 = (min(var_40, (arr_9 [i_18])));
                        }
                        var_41 = var_5;
                    }
                    var_42 *= (!-68);
                }
            }
        }
    }
    var_43 = var_9;
    #pragma endscop
}
