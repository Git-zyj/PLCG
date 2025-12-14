/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= (var_16 * (max(((min(var_0, var_12))), ((var_3 ? var_13 : var_7)))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] = var_17;
        var_20 = (min(var_20, ((((max((var_2 - var_7), var_6))) ? -var_1 : var_18))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_21 = ((~(max(((min(20383, var_0))), ((var_4 ? var_8 : var_6))))));
        var_22 = var_18;

        for (int i_2 = 1; i_2 < 23;i_2 += 1)
        {
            arr_11 [i_1] = (((var_0 % var_18) ? (((((20411 ? var_11 : 45127))) ? ((max(var_14, var_14))) : var_14)) : ((var_2 ? var_2 : var_1))));
            var_23 = (min(var_23, ((max((((((var_5 ? var_11 : var_13))) ? (((var_2 ? var_15 : var_2))) : var_10)), (var_10 || var_6))))));
            arr_12 [i_1] [i_2] = ((!((max(var_6, var_16)))));

            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                arr_15 [i_1] = ((((((var_18 >= (~var_14))))) == (var_7 - 13)));
                arr_16 [i_1] [i_1] [12] &= (((max((min(45157, var_18), 20388)))));
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                arr_19 [i_1] [i_2] = ((var_18 ? ((var_12 ? var_4 : var_7)) : var_14));
                var_24 -= ((45116 ? 94 : 1));
                arr_20 [i_1] = var_10;
            }
            for (int i_5 = 3; i_5 < 22;i_5 += 1)
            {

                /* vectorizable */
                for (int i_6 = 1; i_6 < 22;i_6 += 1)
                {
                    arr_26 [i_1] [i_1] [i_2] [i_5] [i_6] = (!45142);
                    var_25 -= (var_2 ? var_9 : var_2);

                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        var_26 = ((((var_1 ? 151 : var_1)) <= var_7));
                        arr_29 [i_1] [i_2] [i_2] [i_2] [i_2] [i_2] = (var_18 ? ((234 ? var_3 : var_17)) : (var_18 || var_13));
                    }
                    var_27 = (max(var_27, (((var_7 ? var_5 : var_0)))));
                    arr_30 [16] [i_2] [i_2] &= 20426;
                }
                /* vectorizable */
                for (int i_8 = 3; i_8 < 20;i_8 += 1)
                {
                    arr_33 [i_1] [i_1] [i_1] [i_1] [22] [i_1] |= var_15;
                    arr_34 [i_1] [i_5] [i_5] [i_2] [i_1] [i_1] = ((var_14 ? ((var_4 ? var_3 : var_7)) : var_1));
                    var_28 = ((!(((5 ? 950290066 : 92)))));
                    var_29 -= ((var_13 ? (var_5 != var_15) : var_15));
                }
                var_30 = ((var_5 ? ((var_15 ? var_11 : var_8)) : var_16));
            }
            var_31 = (min(var_31, ((((((max(var_7, var_9)))) % (((var_14 ? var_10 : var_9))))))));
        }
        arr_35 [1] |= ((-(((var_11 != var_4) % ((45126 ? var_12 : var_9))))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {
        var_32 += (((var_12 ? var_17 : var_16)));

        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {
            var_33 = (min(var_33, ((((((var_4 ? var_11 : -63))) <= var_15)))));
            var_34 = (((((var_8 ? var_3 : var_4))) ? (6 / var_3) : ((var_3 ? var_6 : var_3))));
            var_35 -= ((var_14 ? var_14 : var_16));
            arr_40 [i_10] [i_9] [i_9] = (var_7 && var_1);
        }
        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            var_36 = (((((var_6 ? (-2147483647 - 1) : -21))) ? var_0 : var_6));
            var_37 -= ((-(!var_14)));

            for (int i_12 = 4; i_12 < 19;i_12 += 1)
            {
                var_38 = (((var_14 ? var_4 : var_10)));
                arr_46 [i_11] [i_12] = ((var_0 ? (843149360 == 108) : (17 - var_3)));
                arr_47 [i_9] [i_11] [i_11] [i_12] = -var_1;
            }

            for (int i_13 = 0; i_13 < 22;i_13 += 1)
            {
                var_39 |= -var_4;
                var_40 = (max(var_40, (var_5 / var_14)));
                var_41 = (max(var_41, ((1872515809 ? 843149353 : 138))));
            }
        }
        var_42 = (max(var_42, var_13));
    }
    var_43 &= var_17;
    #pragma endscop
}
