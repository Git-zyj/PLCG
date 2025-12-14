/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_8;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((arr_3 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
            {

                for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
                {
                    var_16 = ((!(arr_1 [i_0 - 1])));
                    var_17 = ((var_13 ? (arr_8 [i_0 - 2]) : var_5));
                }
                for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
                {
                    var_18 = var_11;
                    var_19 = (((!(arr_11 [i_1]))));
                }

                for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
                {
                    var_20 = (var_13 + var_7);
                    var_21 = (max(var_21, var_4));
                    arr_16 [i_0] [i_1] [i_2] [i_0] = (!var_5);
                }
                for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
                {
                    var_22 = ((!(arr_7 [i_0] [i_1] [i_1] [i_6])));
                    arr_19 [i_0] = var_9;
                }
                for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
                {
                    var_23 = (((var_7 << (((arr_9 [i_1] [i_1]) - 85)))));
                    var_24 += var_14;
                }
                for (int i_8 = 1; i_8 < 1;i_8 += 1) /* same iter space */
                {
                    var_25 ^= var_3;

                    for (int i_9 = 4; i_9 < 21;i_9 += 1)
                    {
                        arr_30 [i_0] [i_0] [i_1] [i_2] [i_2] [i_8] = (((arr_15 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8] [i_8] [i_8]) ? var_5 : (arr_0 [i_0])));
                        var_26 = arr_23 [i_9] [i_8] [i_2] [i_1] [i_1] [i_0];
                    }
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        var_27 += (((((var_11 ? var_7 : (arr_23 [i_10] [i_10] [i_8] [i_1] [i_1] [i_0])))) ? ((-(arr_3 [i_10]))) : var_7));
                        var_28 = -var_14;
                        arr_34 [i_0] [i_0] [i_2] [i_8] [i_0] = (((arr_31 [i_8 - 1] [i_8] [i_8] [i_8] [i_10] [i_10]) && (((var_10 | (arr_8 [i_8]))))));
                        var_29 = arr_11 [i_10];
                    }
                }
                var_30 = var_8;
            }
            for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
            {

                for (int i_12 = 1; i_12 < 22;i_12 += 1)
                {
                    var_31 &= ((var_5 ? (arr_11 [i_0]) : (((!(arr_18 [i_12] [i_0] [i_0]))))));
                    var_32 = (min(var_32, (((-(arr_25 [i_0 - 1] [i_12 - 1]))))));
                    var_33 = (max(var_33, var_6));
                    var_34 = (arr_9 [i_0] [i_0]);
                }
                var_35 = ((+((var_8 ? (arr_32 [i_0] [i_1] [i_0] [i_1] [i_1] [i_11] [i_1]) : (arr_17 [i_0] [i_0] [i_0])))));
                var_36 -= (((((var_0 ? (arr_33 [i_11] [i_11] [i_1] [i_1] [i_0] [i_0] [i_0]) : var_14))) ? (arr_9 [i_0] [i_1]) : (arr_13 [i_0] [i_0] [i_0] [i_0 - 1] [i_11])));
            }
            for (int i_13 = 0; i_13 < 23;i_13 += 1) /* same iter space */
            {
                arr_43 [i_0] [i_0] [i_0] [i_0] = ((!(arr_21 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 - 2])));
                var_37 = var_5;
                var_38 = (((arr_14 [i_0 - 2] [i_0 - 2] [i_1] [i_13]) ? (arr_14 [i_0 + 1] [i_13] [i_13] [i_0 + 1]) : var_5));

                for (int i_14 = 2; i_14 < 20;i_14 += 1) /* same iter space */
                {
                    var_39 = var_8;
                    arr_46 [i_0] [i_1] [i_13] [i_13] [i_14] &= var_6;
                    var_40 = var_5;
                    var_41 ^= (!var_7);
                }
                for (int i_15 = 2; i_15 < 20;i_15 += 1) /* same iter space */
                {
                    var_42 = (arr_48 [i_13]);

                    for (int i_16 = 0; i_16 < 23;i_16 += 1) /* same iter space */
                    {
                        arr_53 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_26 [i_16]);
                        var_43 -= (arr_37 [i_16]);
                    }
                    for (int i_17 = 0; i_17 < 23;i_17 += 1) /* same iter space */
                    {
                        var_44 = (~var_8);
                        var_45 = (arr_40 [i_17] [i_15 + 1] [i_0 - 1] [i_0]);
                    }
                    arr_57 [i_0] [i_0] = (arr_12 [i_0 - 1] [i_15 + 1] [i_13] [i_15]);
                }
            }

            for (int i_18 = 2; i_18 < 22;i_18 += 1)
            {
                var_46 = ((var_6 > (arr_50 [i_0] [i_1] [i_0] [i_18] [i_0])));
                var_47 = (((-(arr_24 [i_0] [i_18] [i_0] [i_0] [i_0]))));
                var_48 = ((!((!(arr_28 [i_1] [i_1] [i_0] [i_1] [i_18] [i_1] [i_1])))));
            }
            var_49 = (arr_45 [i_0] [i_0] [i_0] [i_0]);
            var_50 = (!var_8);
        }
        for (int i_19 = 1; i_19 < 22;i_19 += 1)
        {
            arr_62 [i_19] = (((arr_17 [i_0 + 1] [i_19 + 1] [i_19]) ? (arr_25 [i_0] [i_0]) : ((((!(arr_18 [i_0] [i_0] [i_0])))))));
            var_51 += (((arr_10 [i_0] [i_0] [i_0] [i_19] [i_0]) >= var_6));
        }
    }
    var_52 = var_13;
    var_53 = (min(var_3, ((var_13 ? (min(var_0, var_10)) : var_14))));
    #pragma endscop
}
