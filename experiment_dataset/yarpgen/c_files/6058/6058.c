/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                var_15 = (((arr_2 [i_1]) ? ((6 ? 1 : 42)) : var_10));

                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    arr_10 [12] [12] = ((16296 ? 0 : 16777215));
                    arr_11 [i_1] [i_2] [i_1] = (arr_0 [0] [i_1]);
                }
                var_16 += ((((!(arr_8 [i_0] [i_0] [i_1]))) ? (!0) : (arr_1 [i_0])));
            }
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                var_17 *= 18446744073709551615;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_18 = ((16777218 / ((15 ^ (arr_7 [i_0] [i_6])))));
                            var_19 -= var_4;
                            arr_23 [i_0] [i_1] [i_6] [i_5] = (((!19559) == -1));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_20 += 65535;
                            arr_29 [i_7] = ((1 ? ((((arr_18 [i_0] [i_4] [i_4] [12]) >> (arr_2 [12])))) : (var_11 + 10493741898113359609)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 12;i_10 += 1)
                    {
                        {
                            var_21 = ((var_11 ? (arr_22 [i_10] [10] [i_9] [i_4] [i_1] [i_0]) : -var_6));
                            arr_36 [i_0] [i_1] [i_0] [i_9] [i_9] &= 0;
                        }
                    }
                }
            }
            var_22 += 16777204;
            var_23 -= (((((536870910 << (((((arr_28 [i_0] [i_0] [i_0]) + 24733)) - 3))))) <= (arr_8 [i_0] [i_1] [i_1])));
            var_24 += 50;
        }
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            arr_40 [i_11] = ((!((((arr_7 [i_0] [i_0]) * ((((-127 - 1) * 0))))))));
            var_25 += var_11;
            arr_41 [i_11] [i_11] [i_11] = var_14;
            var_26 += ((!(1 + var_13)));

            /* vectorizable */
            for (int i_12 = 1; i_12 < 9;i_12 += 1)
            {
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 13;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 13;i_14 += 1)
                    {
                        {
                            arr_51 [2] [2] [2] [8] [i_13] [i_13] [i_14] |= ((var_3 ? 1 : -5608389973204187731));
                            var_27 ^= (1 - var_2);
                            var_28 = (max(var_28, (arr_12 [i_14])));
                        }
                    }
                }
                var_29 = (arr_32 [i_0] [i_12] [i_0]);
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 13;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 13;i_16 += 1)
                    {
                        {
                            arr_57 [i_15] [i_15] = var_13;
                            var_30 &= var_11;
                            var_31 -= var_13;
                        }
                    }
                }
            }
        }
        for (int i_17 = 0; i_17 < 13;i_17 += 1)
        {
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 13;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 1;i_19 += 1)
                {
                    {

                        for (int i_20 = 0; i_20 < 13;i_20 += 1)
                        {
                            var_32 = ((max((arr_37 [i_0] [i_17]), (arr_37 [i_17] [i_19]))));
                            var_33 *= 79;
                        }
                        for (int i_21 = 0; i_21 < 13;i_21 += 1)
                        {
                            var_34 ^= arr_66 [8] [i_0] [i_17] [i_18] [10] [8] [i_21];
                            arr_71 [i_21] [i_0] [i_18] [i_0] [i_0] |= ((!((max(((((arr_69 [i_0] [i_17] [i_18] [i_0]) ? 2347145697 : (arr_17 [i_21] [i_18] [i_18] [i_17])))), ((-1 ? 13895096815932173065 : 16777201)))))));
                            var_35 = (max(var_35, 1));
                        }
                        for (int i_22 = 0; i_22 < 13;i_22 += 1)
                        {
                            var_36 += ((!(arr_63 [i_0])));
                            var_37 = (min(var_37, var_6));
                            var_38 = ((var_4 ? 1721247282124935622 : ((max(var_6, 42)))));
                            arr_75 [i_0] [i_0] [i_0] [i_0] [i_17] [i_0] [i_0] = ((((((5908698222929223081 ? 18446744073709551615 : -5608389973204187721)))) <= ((-(arr_74 [i_0] [i_17] [i_18] [i_19] [i_0])))));
                        }
                        var_39 -= (((!43664) > var_9));
                    }
                }
            }
            var_40 = ((!(arr_37 [i_17] [i_0])));
            var_41 = 48;
        }
        var_42 = (min(var_42, (arr_31 [5] [i_0] [i_0] [8] [i_0])));
        var_43 -= ((-1 && ((((max((arr_69 [i_0] [i_0] [i_0] [i_0]), 24))) || (arr_49 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
    }
    var_44 -= -2959873756763288673;
    var_45 = ((((((var_4 + 2147483647) << (((-1 + 14) - 13))))) / ((-104 ? 632581218 : -14538))));
    var_46 = (min(var_46, (((!1) > var_5))));
    #pragma endscop
}
