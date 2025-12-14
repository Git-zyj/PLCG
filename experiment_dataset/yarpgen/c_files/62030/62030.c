/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= (((~((var_1 ? var_0 : 1)))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_15 = (max(var_15, (((!(arr_0 [i_0]))))));
        var_16 = (min(var_16, ((((((((9 ? var_0 : var_13))) ? (arr_2 [i_0] [i_0]) : var_1)) >> (var_7 - 47684))))));
    }
    for (int i_1 = 3; i_1 < 17;i_1 += 1)
    {

        for (int i_2 = 3; i_2 < 17;i_2 += 1)
        {
            var_17 = (((((22 || 1) >= var_4)) || (max((!var_4), (!65525)))));
            var_18 = ((((arr_7 [i_2] [i_1] [i_2 + 1]) || (arr_7 [i_2] [i_2] [i_2 - 3]))) ? ((((arr_7 [i_2] [i_1] [i_2 + 1]) ? (arr_7 [i_2] [1] [i_2 + 1]) : var_5))) : ((var_0 ? var_10 : var_3)));
            arr_8 [i_2] = var_11;
        }

        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            arr_12 [i_1 + 1] = (((arr_10 [i_1]) + ((8 ? 1 : var_12))));
            var_19 = ((-(((((((arr_6 [i_1] [i_3]) ? var_4 : var_7)) + 9223372036854775807)) >> var_0))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            arr_15 [i_1] [i_1] [1] = 22;
            var_20 = var_4;
            var_21 = -65535;
            var_22 = (max(var_22, ((1 < ((6 ? -8 : -13873))))));

            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                var_23 = (((((var_1 ? 1 : var_2))) ? (arr_4 [i_1]) : ((var_4 % (arr_18 [13] [i_5])))));

                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_24 = (min(var_24, var_8));
                    arr_23 [i_1] [1] [i_5] [i_6] = ((-(((!(arr_19 [i_6] [15] [i_1]))))));
                    var_25 *= ((arr_5 [i_1 - 1] [i_1 - 2]) ? (arr_21 [i_1 - 2] [i_1 - 3] [i_1 - 3] [i_1] [i_1 - 2]) : var_3);
                }
                for (int i_7 = 4; i_7 < 18;i_7 += 1) /* same iter space */
                {
                    var_26 = ((var_12 & (arr_27 [i_7 + 1] [i_1 + 2] [i_1])));
                    var_27 = (((arr_25 [i_1 + 2] [i_1 - 1] [i_7 - 1] [i_7 - 1]) + (arr_25 [i_1 + 2] [i_1 + 2] [i_7 - 1] [i_7 - 3])));
                    var_28 = (min(var_28, (((-4 + ((1 ? var_12 : 29435)))))));
                }
                for (int i_8 = 4; i_8 < 18;i_8 += 1) /* same iter space */
                {
                    var_29 = 23;
                    arr_31 [14] [15] [i_5] [14] &= (4509098548786514010 - var_13);

                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        var_30 = (((arr_24 [i_1] [i_1 - 2] [i_1] [i_1 + 2]) ? 65519 : var_2));
                        arr_35 [10] [12] [1] [12] [1] = arr_29 [i_1 + 2];
                    }

                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        arr_40 [i_1] [i_1] = (((((65506 ? var_11 : (arr_9 [i_10] [i_4] [15])))) < ((var_12 ? var_11 : 13352473516550771512))));
                        arr_41 [i_10] [i_8 - 4] [i_5] [13] [i_1 - 2] = (!12);
                        arr_42 [13] [i_4] [i_4] [i_5] [i_8 - 3] [i_8] [i_4] = ((!(arr_19 [i_1 + 2] [i_8 - 4] [i_8 + 1])));
                        var_31 = var_0;
                        arr_43 [i_1] [i_4] [15] [i_8] [i_10] = ((((var_1 & (arr_33 [i_1] [i_4] [i_5] [2] [i_1] [i_5]))) | (arr_36 [i_1] [i_4] [10] [i_1 - 3] [i_10] [i_4] [i_8 - 2])));
                    }
                    var_32 = (((arr_13 [i_1 - 2]) ? (arr_13 [i_1 - 2]) : (arr_13 [i_1 - 2])));
                }
                for (int i_11 = 4; i_11 < 18;i_11 += 1) /* same iter space */
                {

                    for (int i_12 = 2; i_12 < 16;i_12 += 1)
                    {
                        var_33 = (min(var_33, -2217660055414584373));
                        arr_50 [i_1] [i_4] [i_1] [i_5] [i_11] [i_11] = (arr_45 [i_4] [i_4]);
                        arr_51 [i_1] [i_4] [i_5] [i_4] [i_11] [i_5] [i_1] = ((1 & (~14)));
                        var_34 = (!var_9);
                    }
                    for (int i_13 = 0; i_13 < 19;i_13 += 1)
                    {
                        var_35 = ((~(~var_5)));
                        arr_54 [i_13] [i_1 - 2] [i_1 - 1] [1] [i_11] = var_8;
                        arr_55 [i_1 - 1] [i_4] [i_11] [9] [i_13] = -2;
                        var_36 = (~1);
                        var_37 |= ((var_12 >= (arr_20 [0] [i_1 + 2] [i_1 - 2] [i_11 - 1] [i_11 - 1])));
                    }
                    var_38 = var_5;
                    var_39 = ((var_12 ? ((var_9 ? (arr_47 [1] [8]) : var_3)) : var_9));
                }
            }
            for (int i_14 = 0; i_14 < 19;i_14 += 1)
            {
                var_40 = ((var_3 & (!var_8)));
                var_41 = (18446744073709551583 & 134217727);
            }
        }
    }
    var_42 = ((((~(0 - var_3))) & ((((var_9 > (min(7766814776108576692, 1))))))));
    var_43 *= var_7;
    #pragma endscop
}
