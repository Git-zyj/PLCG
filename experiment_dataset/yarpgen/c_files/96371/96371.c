/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -var_9;

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                var_11 = (max(-1696546607, -1696546607));
                var_12 = (min((((max(4213548535098320435, 0)))), (max(((var_4 << (-1696546607 + 1696546634))), -1))));
                var_13 *= arr_1 [i_0];
                arr_6 [i_0] [i_1 - 1] = var_0;
                arr_7 [i_0] [i_1] [i_1] = 3654168341329208696;
            }
            var_14 -= ((!((min(1, 9520606502305876161)))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_15 = (((!(arr_9 [i_0] [i_3] [i_3]))) && (!var_2));
            var_16 = 14233195538611231186;

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_17 = ((~(arr_2 [i_4] [i_0] [i_0])));
                arr_12 [i_3] [i_3] = var_5;
                var_18 = (((-(arr_9 [i_0] [i_3] [i_3]))));
            }
            for (int i_5 = 3; i_5 < 22;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_19 -= ((var_1 ? (!511) : ((1 ? var_8 : (arr_0 [1] [i_3])))));
                    arr_17 [i_0] [9] [16] [i_3] = ((4 ? 1 : 2147483647));
                }
                var_20 = (((var_7 ? var_2 : var_4)));
                var_21 -= var_8;
            }
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                arr_22 [i_3] [i_3] [i_3] [i_3] = var_0;
                var_22 = var_3;
            }
            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                var_23 += -1;
                var_24 *= (arr_19 [i_0]);
                var_25 -= var_0;
                arr_26 [i_3] [i_3] [i_3] = (arr_8 [i_0]);

                for (int i_9 = 2; i_9 < 23;i_9 += 1)
                {
                    arr_29 [i_0] [i_3] [i_3] [i_9 + 2] = ((1 ? -121 : var_3));
                    var_26 = (arr_5 [i_0] [i_0] [i_9]);
                    var_27 = (((arr_8 [i_8]) ? ((88 ? var_8 : 1)) : -16939));
                }
            }

            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                var_28 ^= (-478019896 ? 73 : -2070479128);
                var_29 = ((((4503599627368448 ? (arr_11 [i_3] [i_3] [i_10]) : -118)) / var_2));
                var_30 = 0;
            }
            for (int i_11 = 0; i_11 < 25;i_11 += 1)
            {
                var_31 ^= ((((!(arr_13 [i_0] [i_3] [9]))) ? (!var_8) : (!var_5)));
                var_32 ^= var_7;

                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    var_33 = -32180;

                    for (int i_13 = 2; i_13 < 24;i_13 += 1)
                    {
                        var_34 = var_6;
                        arr_42 [i_0] [i_12] [i_11] [i_12] [i_3] [i_3] [i_3] = ((16945 ? var_2 : 29155));
                        arr_43 [i_0] [i_3] [i_3] [i_12] [i_13 - 2] = ((var_0 ? (var_2 <= 28823) : (((arr_25 [i_12] [i_11] [i_3]) ? var_0 : var_1))));
                        var_35 = (arr_36 [i_0] [i_3] [i_11] [i_13]);
                        var_36 = (min(var_36, (arr_33 [i_0] [i_3] [i_13] [18])));
                    }
                    for (int i_14 = 0; i_14 < 25;i_14 += 1)
                    {
                        var_37 *= (arr_9 [i_0] [i_14] [i_0]);
                        var_38 = (arr_34 [i_0] [i_3] [i_11] [i_3]);
                    }
                    var_39 = arr_3 [i_0] [i_3] [i_11];
                }
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    var_40 ^= (((arr_39 [i_0] [i_3] [i_0] [i_15] [i_15] [i_15] [i_15]) ? 16935 : (arr_39 [i_0] [i_3] [2] [i_3] [i_0] [i_3] [i_15])));

                    for (int i_16 = 1; i_16 < 24;i_16 += 1)
                    {
                        var_41 = 18222;
                        arr_52 [i_0] [i_3] [i_11] [i_15] = var_6;
                        arr_53 [i_3] = var_0;
                        arr_54 [3] [18] [i_3] [i_15] [i_16] = (!var_2);
                    }
                }
                var_42 -= (((var_1 ? var_4 : var_2)));
            }
            for (int i_17 = 0; i_17 < 0;i_17 += 1)
            {
                var_43 = var_4;
                var_44 = var_5;
            }
        }
        var_45 = (min(var_6, (((!var_1) ? ((var_1 ? var_2 : var_3)) : ((var_5 ? -1 : var_0))))));
        var_46 = (((min(((max(var_7, var_3))), (max(var_4, 8064)))) / ((((arr_3 [i_0] [i_0] [i_0]) ? (arr_3 [9] [i_0] [i_0]) : var_6)))));
        arr_58 [i_0] = var_9;
    }
    for (int i_18 = 0; i_18 < 25;i_18 += 1) /* same iter space */
    {
        var_47 = (-87 / 1);
        arr_62 [1] [1] = (max(((((min(var_2, 40448))) ? 1 : ((249 ? 0 : (arr_44 [i_18] [i_18]))))), 1));
        arr_63 [i_18] = (max(var_0, (((((var_3 ? var_9 : 15854888622535796779))) ? ((2147483647 ? var_8 : var_8)) : var_9))));
    }
    var_48 = ((((min((min(30, 1)), (!var_1))))) <= (((((var_1 ? var_7 : var_1))) ? var_1 : ((var_5 ? var_4 : var_9)))));
    #pragma endscop
}
