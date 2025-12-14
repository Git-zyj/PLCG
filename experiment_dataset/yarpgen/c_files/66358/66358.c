/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;
    var_18 = ((var_1 && (((var_4 ^ ((min(var_8, var_16))))))));

    for (int i_0 = 1; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_19 = var_14;
        arr_2 [i_0] = ((var_13 >> (-307746531 + 307746561)));
        var_20 = ((!(((((min(127, -10343))) ? var_5 : (arr_1 [i_0 - 1] [i_0]))))));
        arr_3 [i_0] [i_0] = 78;
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_21 = (min((arr_1 [i_1] [i_1]), (arr_0 [i_1 + 1] [i_1 + 1])));

        /* vectorizable */
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            var_22 = 16777200;
            var_23 = -111;
            var_24 = ((-((var_13 ? 88 : (arr_0 [i_1] [i_1])))));

            for (int i_3 = 1; i_3 < 20;i_3 += 1)
            {
                arr_11 [i_1] [i_1] = 1;
                var_25 = (((192 == var_12) / ((2603330633160885507 + (arr_1 [i_1] [i_1])))));
                var_26 = var_2;
                var_27 = 4602678819172646912;
            }
            for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
            {
                arr_14 [i_1] = var_4;
                var_28 = (((arr_6 [i_1 + 1] [i_1 + 1] [i_2 - 1]) ? (arr_4 [i_1]) : (arr_5 [i_1 + 1])));
            }
            for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
            {
                arr_17 [i_1] [i_1] = (arr_1 [i_1] [i_1]);
                var_29 = 32767;
                var_30 = (((arr_12 [i_1 + 1] [i_1] [i_5]) && (arr_10 [i_1])));

                for (int i_6 = 1; i_6 < 20;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_31 = ((32766 ? 65 : (arr_22 [i_2] [i_2 + 1] [i_5] [i_7] [i_5])));
                        arr_23 [i_1] [i_1] [i_1] [i_1] [i_1] = -268434432;
                        arr_24 [i_1] [i_5] [i_7] = ((-(arr_19 [i_2 - 1] [i_2] [i_2 - 1] [i_2 + 1] [i_2])));
                    }
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        var_32 = (!-var_5);
                        var_33 = (((arr_13 [i_1 + 1] [i_2 + 1] [i_5] [i_1]) ? var_13 : -32766));
                    }
                    for (int i_9 = 1; i_9 < 20;i_9 += 1) /* same iter space */
                    {
                        var_34 = ((1 ? var_14 : ((((!(arr_0 [i_6 + 1] [i_5])))))));
                        var_35 = -32765;
                    }
                    for (int i_10 = 1; i_10 < 20;i_10 += 1) /* same iter space */
                    {
                        var_36 = (((arr_8 [i_1] [i_1] [i_1] [i_2 + 1]) <= (((1 ? -95 : 61572651155456)))));
                        var_37 = ((~(arr_21 [i_10] [i_10])));
                    }
                    var_38 = ((-120 && (var_11 == 37705)));
                    arr_34 [i_1] [i_1] [i_5] [i_6] = (-3 / var_4);
                    var_39 = (((~var_8) != ((0 ? var_4 : 255))));
                }
            }
            var_40 = (!var_8);
        }
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            arr_37 [i_1] = ((((((arr_36 [i_1 - 1] [i_1 + 1]) ? var_4 : (arr_22 [10] [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1])))) ? (~var_12) : ((min((arr_36 [i_1 - 1] [i_1 + 1]), 4611685880988434432)))));
            arr_38 [i_1] [i_1] = -95;
        }
        for (int i_12 = 1; i_12 < 19;i_12 += 1)
        {
            arr_41 [i_1] [i_1] = ((+(((((max((arr_35 [i_12]), (arr_21 [i_12] [i_1])))) && ((((arr_27 [i_1] [i_1] [i_12] [i_1] [i_12]) ? (arr_4 [i_1]) : 1))))))));
            var_41 = (((((min(0, var_2))) && (((1 - (arr_39 [i_1 - 1])))))));
            var_42 = var_9;
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 22;i_13 += 1)
        {
            var_43 = (((arr_16 [i_1 + 1] [i_1]) % (arr_25 [i_1] [i_1] [i_1] [i_1 - 1] [i_1 + 1] [i_13])));
            arr_45 [i_1] = (arr_9 [i_1] [i_1] [i_13]);
            var_44 = (((((var_0 ? var_12 : -6259))) && (61572651155442 >= -910992251)));
        }
        var_45 = var_12;
    }
    #pragma endscop
}
