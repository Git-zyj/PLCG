/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = (min(var_19, (min((arr_0 [1] [1]), ((((max(var_4, (arr_0 [10] [10])))) ? (((~(arr_0 [6] [6])))) : 2791042933))))));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_4 [i_0] [i_0] = (min(3563217433, -var_14));
            var_20 *= (((min(var_8, ((var_13 ? (arr_0 [0] [i_1]) : var_18)))) > (arr_2 [8] [i_1] [8])));
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
        {
            var_21 -= var_0;
            var_22 -= (min((2791042932 & 31), var_11));
            var_23 = (min(var_23, (((3563217421 >= ((((!var_12) ? (arr_7 [i_0] [i_2]) : (65518 || var_0)))))))));

            for (int i_3 = 2; i_3 < 19;i_3 += 1)
            {
                arr_10 [i_0] [i_2] [i_3] [i_3] = ((~((max((arr_2 [i_3 + 1] [i_3 - 1] [i_0]), 0)))));
                arr_11 [i_0] [i_2] [i_0] = (((!var_18) ? (((-((min(0, (arr_0 [i_0] [i_2]))))))) : (min(var_9, (min(var_6, (arr_7 [i_0] [19])))))));
                arr_12 [17] [i_0] [i_2] [i_3] = ((+(((arr_8 [i_0] [i_2] [i_3]) * var_8))));
                arr_13 [i_0] = max((max((arr_0 [i_0] [i_3 - 2]), var_2)), (((!(((arr_2 [i_0] [1] [i_0]) && var_4))))));
            }
        }
        for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
        {
            var_24 = (max(var_24, ((min(((((max((arr_2 [i_0] [i_0] [6]), 4294967295)) % (arr_3 [16] [16] [14])))), (min((arr_6 [i_0] [i_0] [i_0]), 1503924361)))))));

            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                var_25 = (min((max(1, (min((arr_2 [i_0] [i_4] [i_0]), var_2)))), ((((max(var_7, var_18)) >= ((((arr_9 [i_0] [i_0] [i_5] [5]) ^ var_17))))))));
                var_26 = 4294967295;
                var_27 = (min(var_27, var_12));
            }
        }
    }
    var_28 = var_17;

    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        arr_20 [i_6] = ((~((-((max(52, -52)))))));
        arr_21 [i_6] = -14940718313470370431;
    }
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            arr_27 [i_7] [i_8] [i_8] = max(1, 8191);

            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                arr_30 [i_9] = 0;
                var_29 -= ((~(arr_8 [i_8] [i_8] [i_9])));
            }
            for (int i_10 = 1; i_10 < 1;i_10 += 1)
            {
                arr_33 [i_7] [i_8] [i_10 - 1] [i_8] = (max((max(((-(arr_14 [i_7] [i_8]))), (~0))), var_7));
                var_30 -= (-(min((arr_23 [i_10]), ((max((arr_17 [i_7] [i_10]), var_17))))));

                for (int i_11 = 1; i_11 < 1;i_11 += 1)
                {
                    arr_36 [i_7] = 1503924352;
                    arr_37 [i_7] [i_7] [i_8] [i_10] [i_11] = (min((max(16383, ((((arr_28 [i_8] [i_10] [1]) > var_1))))), ((max((arr_25 [i_7] [i_7]), (arr_14 [i_7] [i_11]))))));
                    var_31 |= (max(((1 * (((((-127 - 1) <= var_3)))))), (((var_17 - (((!(arr_28 [i_8] [i_8] [i_8])))))))));
                    arr_38 [i_8] [i_11] = 0;
                }

                /* vectorizable */
                for (int i_12 = 0; i_12 < 11;i_12 += 1)
                {
                    var_32 = (max(var_32, ((((((arr_0 [i_7] [i_12]) + (arr_8 [i_8] [i_8] [i_7]))) < (arr_28 [i_8] [i_8] [i_12]))))));
                    arr_41 [i_7] = (~(~var_6));
                    arr_42 [i_8] = var_5;
                }
                for (int i_13 = 1; i_13 < 10;i_13 += 1)
                {
                    arr_45 [i_7] [i_8] [i_10] [i_13] [i_8] = ((((max((0 % 127), (arr_25 [i_7] [i_8])))) ? (max(var_15, var_8)) : (((min((arr_2 [i_10 - 1] [i_10 - 1] [i_7]), (arr_26 [i_10 - 1] [i_13 + 1] [i_13 + 1])))))));

                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        arr_48 [i_7] [i_8] [i_8] [i_8] [i_14] [i_7] = -113;
                        var_33 = ((~((+(((arr_31 [i_7] [3] [4]) ? (arr_43 [i_7] [i_7] [i_7] [i_7]) : var_11))))));
                        arr_49 [i_7] [i_14] [i_7] = (arr_31 [i_8] [i_10] [10]);
                        arr_50 [i_14] [i_8] [i_10] [i_10] [8] = (((((1 ? (!65527) : ((var_13 ? -127 : 4294967289))))) ? (min(var_1, ((var_0 ? (arr_16 [i_7] [i_8]) : var_16)))) : var_12));
                    }
                    var_34 = ((arr_8 [i_7] [i_13 + 1] [i_13 + 1]) ? (((max((arr_35 [i_13 + 1]), var_15)))) : ((((((4503595332403200 == (arr_23 [i_8]))))) - (max((arr_34 [i_8] [i_10] [i_13]), (arr_8 [i_8] [i_8] [i_10 - 1]))))));
                }
            }
            for (int i_15 = 0; i_15 < 11;i_15 += 1) /* same iter space */
            {
                arr_55 [i_7] [1] [i_15] = (~-67);
                arr_56 [i_7] [i_8] [i_15] = ((((min((arr_24 [i_15]), (arr_24 [i_15])))) ? (arr_24 [i_8]) : 3506025760239181184));
            }
            /* vectorizable */
            for (int i_16 = 0; i_16 < 11;i_16 += 1) /* same iter space */
            {

                for (int i_17 = 0; i_17 < 11;i_17 += 1)
                {
                    arr_63 [i_8] [i_16] [i_8] [i_8] [i_7] = ((~(((arr_34 [i_7] [i_7] [i_7]) ? var_5 : (arr_40 [i_7] [i_8] [i_8] [i_16] [i_17] [i_8])))));
                    var_35 = (!8998403161718784);
                    arr_64 [i_7] [i_8] [i_16] [i_17] = (((arr_9 [i_17] [i_7] [i_17] [i_17]) / var_11));
                    arr_65 [i_7] [i_8] [i_7] [i_7] = ((var_5 ? 1 : var_0));
                    arr_66 [i_7] [i_8] [i_8] [i_8] [i_8] [i_17] = var_4;
                }
                arr_67 [i_8] = var_3;
                var_36 = arr_17 [i_7] [i_16];
                arr_68 [i_7] [1] [i_8] [i_8] = var_8;
                var_37 *= (arr_52 [i_7] [i_8] [i_8]);
            }
        }
        var_38 = (((min(731749839, var_4))) && ((min((~var_6), (min(var_11, (arr_15 [i_7] [i_7])))))));
        arr_69 [i_7] [i_7] = min((((max(var_2, var_12)) / (((1279270807 ? (arr_52 [i_7] [i_7] [i_7]) : (arr_16 [i_7] [15])))))), (min(-18446744073709551615, (((0 ? 1 : var_16))))));
    }
    #pragma endscop
}
