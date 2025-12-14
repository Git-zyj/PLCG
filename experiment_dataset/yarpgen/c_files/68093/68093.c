/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_20 += 1044480;
        var_21 = ((8122252904172163802 ? (arr_1 [i_0] [i_0]) : (((((arr_0 [i_0]) != (arr_0 [i_0])))))));
        var_22 ^= (1 || -894827824);
        arr_3 [i_0] = (max(7924, ((-(var_2 + 7924)))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = ((((min(9223372036854775807, 2749990679))) ? (min((arr_4 [i_1]), (((arr_5 [14] [0]) ? (arr_5 [i_1] [i_1]) : (arr_6 [i_1] [i_1]))))) : (((((max(2, var_0))) ? (var_7 != 2389372609841215598) : 0)))));
        arr_8 [13] [i_1] = (max((((arr_6 [i_1] [14]) | (arr_6 [i_1] [i_1]))), ((var_4 ? 1 : (arr_6 [i_1] [i_1])))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {
                {
                    var_23 = (min(var_23, (var_19 - -11313)));
                    var_24 = (((arr_10 [i_3 + 1] [i_2 + 1]) ? (((~(arr_5 [i_3 - 1] [i_2 + 2])))) : (arr_10 [i_3 - 1] [i_2 - 1])));
                    arr_14 [i_1] [i_3] = (min(-61, (min(1666983284, ((var_16 + (arr_5 [i_1] [2])))))));
                    arr_15 [i_3] [6] = (max((max(var_8, -81)), (((arr_4 [i_3 + 1]) / 61))));

                    for (int i_4 = 3; i_4 < 19;i_4 += 1)
                    {
                        arr_19 [i_3] [i_2 + 2] [i_3 - 1] [i_3] = -7800083315108743033;
                        var_25 = (max(var_25, ((max(((((arr_4 [i_4 - 3]) != var_16))), (((~((4294967268 ? 32767 : -15))))))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_26 = -7;
                        arr_23 [i_1] [19] [i_1] [i_3] = (arr_11 [i_3 - 1] [i_2 + 1] [i_2 + 3]);
                    }
                }
            }
        }
        var_27 = ((~(min(7800083315108743025, (((var_0 ? 31 : -7634)))))));
        arr_24 [i_1] [i_1] = (min(((((arr_21 [12] [i_1] [16] [i_1]) != (max((arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [6]), -7800083315108743033))))), (arr_21 [i_1] [i_1] [17] [i_1])));
    }
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        var_28 = (min(var_28, (((~(((var_8 + var_13) ? ((~(arr_27 [i_6]))) : 2749990684)))))));
        arr_28 [13] [i_6] = var_13;
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        var_29 = (!var_7);
        arr_32 [i_7] = ((336326348 < (((((max(var_18, (arr_30 [i_7])))) > 29653)))));
        var_30 = (arr_26 [i_7] [i_7]);
        var_31 = (max(var_31, var_10));
        var_32 = (min((min((arr_29 [0]), (((arr_26 [i_7] [i_7]) ? 8857681307636788728 : var_1)))), ((min(-61, (min((arr_29 [1]), -1217731548)))))));
    }

    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        var_33 = (((((0 ? var_4 : 18446744073709551615)) != (min(1, (arr_27 [i_8]))))));
        var_34 = (max(((+(((((arr_33 [i_8]) + 9223372036854775807)) << (5639960675376568141 - 5639960675376568141))))), (arr_26 [i_8] [i_8])));
    }
    var_35 = (min(var_35, (((8857681307636788728 == var_9) ? 124 : (8320285508794793574 != var_13)))));
    #pragma endscop
}
