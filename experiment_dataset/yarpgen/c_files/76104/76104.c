/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= ((var_1 | ((var_10 ? var_13 : -4540930077074017080))));
    var_17 = 13089542649688538652;
    var_18 = (min(var_18, (var_9 == var_13)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                arr_9 [i_1] = (((var_10 ? -1482744640841877758 : (arr_6 [i_1] [i_1] [i_1]))) % var_3);
                var_19 += (arr_5 [i_0] [i_0]);
            }

            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                var_20 = (arr_7 [i_0] [i_1] [i_3 + 2]);
                var_21 = (max(var_21, (((!(var_1 || var_0))))));
            }
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                arr_16 [i_0] [i_1] [i_0] |= (((var_5 ^ 98) ^ (arr_8 [i_4])));
                var_22 = (arr_6 [i_1] [i_1] [i_4]);

                for (int i_5 = 2; i_5 < 13;i_5 += 1)
                {
                    arr_20 [i_0] [14] [i_4] [14] [i_1] [i_0] = (~var_15);
                    arr_21 [i_0] [1] [i_1] [i_5] = (((arr_1 [i_0]) - (arr_14 [i_0] [i_1])));
                    arr_22 [i_0] [i_1] [i_4] [i_5] [i_5] = ((var_3 ? 255 : ((((arr_7 [i_0] [i_0] [i_4]) > 1482744640841877757)))));
                }
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                var_23 = (max(var_23, (arr_10 [i_0] [i_0] [i_6])));
                arr_26 [i_0] [i_1] [i_6] [i_0] = arr_4 [i_0];
            }
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        {
                            var_24 = (max(var_24, (7 % var_6)));
                            var_25 ^= ((!(((arr_28 [i_0]) || 28))));
                            var_26 |= 3280026688;
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_10 = 2; i_10 < 12;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 14;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        {
                            arr_43 [i_1] [i_1] = ((((arr_13 [i_0] [i_1] [i_10]) / (arr_7 [i_0] [i_1] [i_0]))) + (arr_31 [i_0] [6] [i_1] [0] [0]));
                            var_27 = (max(var_27, var_4));
                            var_28 = ((-((((-9223372036854775807 - 1) < var_7)))));
                        }
                    }
                }
            }

            for (int i_13 = 3; i_13 < 14;i_13 += 1)
            {
                var_29 = (max(var_29, (((var_5 * (var_15 * var_4))))));
                /* LoopNest 2 */
                for (int i_14 = 2; i_14 < 13;i_14 += 1)
                {
                    for (int i_15 = 4; i_15 < 12;i_15 += 1)
                    {
                        {
                            var_30 |= -1311339107118509290;
                            var_31 = (max(var_31, (((-(arr_41 [i_0] [i_1] [i_13] [i_14] [12]))))));
                        }
                    }
                }
                var_32 = (max(var_32, ((((arr_24 [i_0] [i_1] [i_0]) / var_15)))));
            }
            for (int i_16 = 0; i_16 < 15;i_16 += 1)
            {

                for (int i_17 = 0; i_17 < 15;i_17 += 1)
                {
                    var_33 = -1482744640841877758;
                    var_34 = 2754518198;
                    var_35 = (--2254144763);
                    var_36 = (arr_24 [i_0] [i_1] [i_0]);
                }
                var_37 = (max(var_37, (((!(arr_44 [i_0] [i_1] [i_16]))))));

                for (int i_18 = 0; i_18 < 15;i_18 += 1)
                {
                    arr_56 [i_16] [i_1] [i_16] [i_18] = (arr_54 [10] [10]);
                    var_38 = -1;
                }
                for (int i_19 = 0; i_19 < 15;i_19 += 1)
                {
                    var_39 = var_13;
                    var_40 += (arr_58 [i_0]);

                    for (int i_20 = 0; i_20 < 15;i_20 += 1)
                    {
                        var_41 = ((-((((arr_52 [i_0] [i_1] [i_1] [i_19]) >= (arr_55 [i_0] [i_1] [i_16] [14] [i_20]))))));
                        arr_62 [i_0] [i_16] [i_19] [i_1] [i_16] = (((((!(arr_12 [i_0] [i_0] [i_0])))) * (((!(arr_37 [10] [10] [i_16] [10]))))));
                    }
                }
            }
        }
        for (int i_21 = 1; i_21 < 13;i_21 += 1)
        {
            var_42 = (((var_13 - var_9) <= (arr_4 [i_0])));
            arr_65 [8] [i_21 - 1] [12] = ((var_8 ? (arr_0 [i_21]) : ((((arr_36 [i_0] [i_21] [i_21]) / var_15)))));
            arr_66 [i_0] = -var_11;
            arr_67 [i_0] [i_21 - 1] [i_21 - 1] = (!5357201424021012963);
            var_43 *= (((arr_14 [i_0] [i_0]) ? (var_2 != var_4) : var_5));
        }
        for (int i_22 = 3; i_22 < 13;i_22 += 1)
        {
            arr_72 [i_22] = (((!-28) ? 5357201424021012961 : -4540930077074017080));
            arr_73 [i_22] [i_22 + 2] = ((!(arr_23 [i_22 - 2] [i_22] [i_22 - 2])));
            var_44 = (arr_11 [i_0] [i_22 + 1] [7] [i_0]);
            arr_74 [i_22] = (((arr_47 [i_22 - 1] [i_22 - 2] [i_22 - 3] [i_22] [i_22 + 2]) << (!var_13)));
        }
        for (int i_23 = 2; i_23 < 13;i_23 += 1)
        {

            for (int i_24 = 2; i_24 < 13;i_24 += 1)
            {
                var_45 = (max(var_45, (((((!(arr_23 [i_24 + 1] [i_0] [i_0])))) >> (((arr_33 [i_0] [i_0] [i_23] [i_24] [i_24]) - 17))))));
                var_46 = (arr_59 [i_0] [i_23 + 2] [i_0] [i_23 + 2] [i_0]);
                var_47 = var_7;
            }
            for (int i_25 = 0; i_25 < 1;i_25 += 1)
            {
                var_48 = 1;
                var_49 = var_10;
                var_50 += var_3;
                var_51 |= (((!2254144763) >> var_4));
            }
            arr_82 [i_0] [i_0] [i_0] = (0 < 1);
        }
        var_52 = (min(var_52, (((-((-(arr_14 [i_0] [i_0]))))))));
        var_53 -= var_12;
    }
    #pragma endscop
}
