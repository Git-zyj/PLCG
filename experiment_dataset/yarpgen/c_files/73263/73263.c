/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                arr_10 [i_0] [i_0] [i_0] [i_0] = (((var_14 - var_11) != ((var_7 ? var_13 : var_4))));
                var_15 = (arr_8 [i_0] [21] [i_2]);
                var_16 |= (((~var_11) ? 1 : var_10));
                var_17 = ((~(((arr_2 [i_0]) & (arr_3 [22] [i_1] [i_0])))));
                arr_11 [i_0] [i_0] [i_0] [i_0] = ((var_6 + ((-22 ? (arr_8 [16] [i_0] [i_0]) : 15110274789399229226))));
            }
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_18 = (i_0 % 2 == 0) ? ((var_2 << (((arr_5 [i_0] [23]) - 13194)))) : ((var_2 << (((((arr_5 [i_0] [23]) - 13194)) + 20993))));
                arr_14 [i_0] [i_1] [i_1] [i_0] = (((2199023251456 & var_3) ? 1501888574912080916 : (((((arr_2 [i_0]) != (arr_8 [i_0] [i_0] [i_0])))))));
            }
            arr_15 [i_0] [i_0] [i_0] = (i_0 % 2 == zero) ? (((30720 << (((arr_6 [i_0]) - 32))))) : (((30720 << (((((arr_6 [i_0]) - 32)) - 52)))));
        }
        for (int i_4 = 1; i_4 < 24;i_4 += 1)
        {
            var_19 = (arr_13 [i_0] [6] [i_0]);
            arr_20 [i_0] = (18446741874686300170 ^ -5139877272473493630);
            arr_21 [i_0] [i_0] [i_0] = ((((min((18446741874686300156 | var_9), (((-22 ? (arr_8 [i_0] [i_0] [i_0]) : -6676245518008666675)))))) ? ((((arr_7 [i_4 - 1]) ? (((~(arr_19 [i_0] [i_4])))) : (max(4220573118, var_4))))) : ((((~(arr_12 [i_0]))) - (((var_11 ? 511430818 : var_1)))))));
            arr_22 [i_0] = (var_6 < var_10);
        }
        arr_23 [i_0] = (arr_9 [i_0] [i_0] [i_0] [i_0]);
        var_20 = ((((max((13 && 6), (arr_5 [i_0] [i_0])))) % ((-((var_3 ? var_14 : (arr_8 [i_0] [i_0] [i_0])))))));
    }

    /* vectorizable */
    for (int i_5 = 1; i_5 < 19;i_5 += 1)
    {
        arr_27 [i_5] [i_5] = (~(arr_16 [i_5 - 1] [i_5] [i_5]));
        var_21 ^= 108;
    }

    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        var_22 = var_4;
        arr_32 [i_6] = (min((arr_8 [i_6] [i_6] [i_6]), (1 + 98)));
    }
    /* vectorizable */
    for (int i_7 = 3; i_7 < 21;i_7 += 1)
    {
        var_23 = (min(var_23, (((-59 | (-2147483647 - 1))))));
        arr_36 [i_7] = (arr_5 [i_7] [i_7 - 3]);
        var_24 = (var_6 || var_0);
    }
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        arr_39 [12] |= (((~var_3) == (((max(var_9, -709562916))))));
        var_25 = ((-((-20 ? 72 : var_7))));
        var_26 = (min(var_26, ((((((var_11 ? (arr_2 [6]) : var_11))) ? ((var_0 ? (arr_2 [1]) : (arr_2 [0]))) : (max((arr_2 [20]), (arr_2 [20]))))))));
    }
    var_27 = (max((((((var_13 ? var_2 : var_0))) ? var_10 : var_1)), ((2199023251459 ? -var_11 : var_12))));
    var_28 = (max(-6172, var_4));
    #pragma endscop
}
