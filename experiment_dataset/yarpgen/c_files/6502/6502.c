/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, ((((max(var_7, var_0)) / (((((14077849606386537623 ? 10268 : 0))) ? (((var_1 ? var_13 : var_1))) : ((var_17 ? 60 : var_16)))))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = var_15;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, ((max(var_18, -172504499657165189)))));

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_21 = ((var_5 ? (((!var_1) ? var_1 : ((21345 ? var_12 : (arr_8 [i_0] [1] [i_0] [i_0] [1]))))) : ((7773846154706202158 ? (((arr_1 [i_3]) ? var_3 : var_0)) : (arr_4 [i_0])))));
                        var_22 = var_2;
                    }
                }
            }
        }
        arr_9 [i_0] = (var_2 ? (min((((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_0 : var_4)), ((-320237579 ? (arr_5 [i_0] [i_0] [i_0]) : var_9)))) : (min(var_3, -var_14)));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        arr_12 [i_4] = ((~((-125 ? ((~(arr_11 [i_4] [12]))) : var_15))));
        var_23 = (min(var_23, (arr_8 [i_4] [i_4] [i_4] [i_4] [5])));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        arr_15 [i_5] = arr_14 [i_5];
        var_24 = (((~var_5) ? ((var_10 ? 24576 : -28833)) : (arr_14 [i_5])));

        for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
        {
            arr_19 [i_5] = 18;
            arr_20 [i_5] = (i_5 % 2 == zero) ? ((((arr_16 [i_5] [i_5] [i_5]) >> (var_5 - 14152138968017693164)))) : ((((((arr_16 [i_5] [i_5] [i_5]) + 2147483647)) >> (var_5 - 14152138968017693164))));
        }
        for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
        {
            arr_24 [i_5] = (((arr_14 [i_7]) ? (((~(arr_16 [i_5] [i_7] [i_5])))) : ((-27 ? var_4 : 18446744073709551610))));
            var_25 = (min(var_25, (((((arr_22 [i_5]) ? var_11 : (arr_16 [i_7] [i_7] [i_7])))))));
        }
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            arr_27 [i_5] = (arr_25 [2] [i_5] [i_8]);
            arr_28 [i_5] [i_8] [i_5] = var_16;
            var_26 = (var_13 ? (!-64) : (arr_25 [i_5] [i_5] [i_8]));
            var_27 = (min(var_27, (arr_26 [i_5] [i_5] [i_8])));
        }
    }
    var_28 = var_0;
    var_29 |= (min((var_3 % var_13), -1242270859));
    var_30 = 4;
    #pragma endscop
}
