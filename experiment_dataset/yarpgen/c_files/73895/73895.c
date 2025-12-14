/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (((min((min((arr_0 [i_0]), (arr_1 [i_0]))), ((var_2 ? (arr_0 [i_0]) : (arr_0 [i_0]))))) / (min((max((arr_1 [i_0]), (arr_0 [i_0]))), (arr_1 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            var_11 = (arr_10 [i_0] [i_0] [i_0]);
                            var_12 = 12;
                        }
                        for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            var_13 = 30;
                            var_14 = (arr_1 [i_0]);
                        }
                        for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            arr_16 [i_6] [3] [5] [3] [1] [4] [i_6] = ((33 <= (arr_5 [i_6] [i_6 - 1] [i_6 - 1])));
                            arr_17 [i_6] [i_1] [i_6] [i_6] = var_0;
                            var_15 &= (!(arr_5 [i_6] [i_2] [i_0]));
                        }
                        arr_18 [0] [0] [0] [i_3] [i_3] [i_3] = (arr_14 [10] [i_3] [10] [i_3] [i_3]);
                        var_16 = ((-(arr_15 [i_0] [i_0] [i_3] [i_3] [i_0] [i_0])));
                        var_17 = ((~(arr_13 [i_0] [i_1] [i_2] [i_1] [i_3])));
                    }
                    for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                    {
                        var_18 = (max((((((-9223372036854775807 - 1) && 4133218319)))), (((((4133218289 ? (arr_5 [i_0] [11] [i_0]) : var_8))) ? (max((arr_7 [i_0] [i_0]), var_4)) : var_9))));
                        arr_22 [9] [5] [9] [0] [i_2] = (max((((min(-7812214785121964802, 1)) % (arr_8 [i_0]))), ((((arr_14 [i_0] [i_0] [12] [i_0] [1]) ? 40126471 : 62)))));

                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            arr_25 [i_0] [2] [i_8] [i_7] [2] = 0;
                            var_19 = var_0;
                        }
                        for (int i_9 = 4; i_9 < 12;i_9 += 1) /* same iter space */
                        {
                            arr_28 [4] [4] [i_2] [i_7] [i_7] [i_9 - 3] = ((((~(arr_20 [i_9 - 3] [i_9 - 2] [i_9 - 3] [i_9 - 2]))) - (((!(arr_20 [i_9 - 3] [i_9 - 2] [i_9 - 3] [i_9 - 1]))))));
                            var_20 = (max(((-11249 ? 0 : (~18446744073709551615))), ((((arr_9 [i_9 + 1] [i_9] [i_9 - 2] [i_9 - 3] [i_9]) >> (((((((arr_1 [i_0]) + 9223372036854775807)) >> 1)) - 4146608184980159006)))))));
                            var_21 = (max(var_21, var_7));
                        }
                        /* vectorizable */
                        for (int i_10 = 4; i_10 < 12;i_10 += 1) /* same iter space */
                        {
                            arr_32 [12] [i_0] [i_1] [11] [i_2] [12] [i_10] = (arr_4 [i_2] [i_2]);
                            var_22 = 197;
                        }
                        for (int i_11 = 4; i_11 < 12;i_11 += 1) /* same iter space */
                        {
                            var_23 = (arr_9 [i_11 - 2] [i_2] [i_2] [i_1] [3]);
                            arr_35 [i_0] [i_0] [6] [i_2] [i_7] [i_11] = (max((arr_5 [i_0] [i_0] [i_0]), ((max(((((arr_5 [i_0] [i_0] [9]) < (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])))), var_0)))));
                            var_24 = (min(((min((arr_23 [4] [i_7] [i_11] [i_11 - 4] [i_11 - 4]), (arr_23 [8] [i_11] [i_11 - 1] [i_11 - 4] [i_11])))), (arr_26 [i_0] [3] [3] [i_0] [i_0])));
                            arr_36 [i_0] [i_1] [i_2] [i_2] [i_2] [i_11] = arr_1 [i_0];
                        }
                        arr_37 [i_0] [i_0] [i_0] = ((!((((-var_7 + 2147483647) << (4254840834 - 4254840834))))));
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 13;i_12 += 1) /* same iter space */
                    {

                        for (int i_13 = 0; i_13 < 13;i_13 += 1)
                        {
                            var_25 = (~5232697843235966924);
                            var_26 = (((((var_6 ? (arr_6 [i_1] [i_1] [i_1]) : var_7))) ? (((var_5 ? 193 : (arr_33 [i_0] [i_1] [i_2] [i_12] [i_2])))) : -3649681138475164430));
                            arr_43 [i_13] [i_12] [i_12] [i_1] [i_2] [i_1] [i_13] = -108;
                        }
                        arr_44 [i_0] [i_0] [i_0] [1] = 62;
                        var_27 = (((arr_6 [i_0] [i_2] [i_2]) * (var_8 / var_8)));
                    }
                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 13;i_14 += 1)
                    {
                        var_28 *= var_5;
                        arr_48 [i_1] = ((var_7 > (arr_14 [12] [i_14] [i_1] [i_2] [i_14])));
                        var_29 &= (22 == 4254840801);
                    }
                    arr_49 [i_0] = var_2;
                }
            }
        }
    }

    for (int i_15 = 1; i_15 < 12;i_15 += 1)
    {
        var_30 = ((((arr_51 [i_15 + 3]) ? (~32767) : (arr_51 [i_15]))));
        var_31 = (arr_52 [i_15]);
    }
    var_32 = ((((max(var_6, var_3))) ? (var_9 > 65) : var_3));
    var_33 = (max(33, (((var_1 ? var_5 : 2500008442288362353)))));

    for (int i_16 = 0; i_16 < 20;i_16 += 1)
    {
        arr_56 [i_16] = (min(((17050615073290555157 ? 5811818806670529751 : (arr_54 [i_16]))), (((var_3 && (arr_55 [i_16]))))));

        for (int i_17 = 0; i_17 < 1;i_17 += 1) /* same iter space */
        {
            arr_60 [i_17] [i_17] = ((-(((!(((~(arr_54 [i_17])))))))));
            arr_61 [i_17] [i_17] [15] = ((var_10 ? (((((((arr_59 [i_16] [i_17]) != var_1))) >> (((((arr_55 [i_16]) ? (arr_59 [i_16] [i_16]) : (arr_59 [9] [i_17]))) + 80))))) : (arr_58 [i_16] [i_17] [i_17])));
            var_34 = var_10;
        }
        for (int i_18 = 0; i_18 < 1;i_18 += 1) /* same iter space */
        {
            arr_66 [i_16] [i_16] = (max((min((((arr_62 [i_16] [12]) ? var_4 : (arr_63 [i_16] [i_16]))), (((1 + (arr_57 [i_18])))))), (arr_62 [i_16] [i_18])));
            arr_67 [i_16] [i_16] [0] = -32760;
            arr_68 [i_16] [i_16] = (((arr_62 [i_16] [i_16]) ? ((~(arr_63 [i_18] [i_18]))) : (arr_62 [i_16] [i_18])));
        }
        var_35 = (max(var_35, ((max(((min((max(5841, 1)), 1))), (arr_58 [i_16] [i_16] [i_16]))))));
    }
    #pragma endscop
}
