/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = ((((((((1 + (arr_2 [i_0])))) ? 127 : (!1891518332)))) || ((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))))));

        /* vectorizable */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            var_20 = 1;
            var_21 *= (arr_4 [i_1 - 2] [i_1 - 1]);
        }
        var_22 = (min(var_22, var_4));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_23 = (10 ^ var_11);

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_13 [i_2] = ((10 ^ (~127)));
            arr_14 [i_2] [i_2] = (((44198 ? 12 : var_5)) == -126);
            var_24 *= (!var_8);
        }
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            arr_18 [i_2] [i_2] [10] = (((arr_8 [i_2]) ? (arr_12 [i_2]) : var_1));
            arr_19 [i_2] = ((-(arr_6 [i_2] [i_2])));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                arr_27 [i_2] [i_5] [i_5] [4] = (((62898 ? var_18 : 64)));
                arr_28 [i_2] [i_2] [i_2] = (var_2 ? (arr_9 [i_2] [i_2]) : (var_13 <= 21337));
                arr_29 [i_2] [i_2] [i_2] = ((4294967295 ? var_0 : 1));
                arr_30 [i_2] [i_2] = (arr_16 [i_5] [i_5] [i_5]);
            }
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                var_25 = (((var_8 ? var_17 : 1)));
                arr_33 [i_5] [16] &= ((var_4 >> (((~57344) + 57361))));

                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    var_26 -= var_7;
                    arr_37 [i_2] [8] [i_2] [i_2] [i_2] [i_2] = ((var_1 ? (arr_26 [i_2]) : (arr_7 [i_5] [i_7])));
                    var_27 = ((3231509138 ? 28061 : 65523));
                }
                for (int i_9 = 1; i_9 < 1;i_9 += 1)
                {
                    var_28 = (min(var_28, (((arr_10 [i_2] [i_2] [i_2]) ? var_19 : var_0))));
                    var_29 -= ((!(~var_14)));
                }
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    arr_42 [i_2] [i_2] = ((((arr_10 [i_2] [i_2] [16]) <= var_6)) ? (57366 % 1) : (arr_26 [i_2]));
                    arr_43 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = var_5;
                    var_30 |= (((-127 - 1) | 8207));
                    arr_44 [i_2] [1] [1] [i_2] = ((-127 ? (21338 + 127) : (((arr_40 [i_2] [i_5] [i_7] [i_7] [i_2] [i_10]) ? (arr_8 [i_2]) : (arr_6 [i_7] [i_10])))));
                    var_31 = (arr_0 [i_7] [i_5]);
                }
                var_32 *= (arr_40 [i_7] [i_7] [1] [i_7] [i_7] [i_7]);
            }
            arr_45 [i_2] [i_2] = (((arr_12 [i_2]) ? (var_11 < var_0) : (arr_31 [i_2] [i_2] [i_2])));
            var_33 = (min(var_33, var_4));
        }
        var_34 = ((~(~var_1)));
        var_35 = (min(var_35, (((40692 ? (arr_22 [i_2] [i_2]) : (arr_12 [4]))))));
    }
    var_36 = var_18;
    #pragma endscop
}
