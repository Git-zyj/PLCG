/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_12 = (max(var_12, ((((max((arr_1 [i_0]), (arr_0 [i_0] [i_0])))) ? (((arr_1 [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))) : (arr_0 [i_0] [0])))));
        var_13 = (min(var_13, 4));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                var_14 ^= 8171763023045586842;
                var_15 = (((arr_1 [i_0]) ? (arr_0 [i_0] [i_1]) : (arr_0 [i_0] [i_1])));
                var_16 = (((arr_5 [i_2] [i_1] [i_0]) ? var_2 : (arr_5 [i_0] [i_1] [i_2])));
            }
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                var_17 = ((!(!var_10)));
                var_18 = (((~-5) ? (-5 + var_5) : (arr_8 [i_0] [i_0] [i_1] [i_3])));
                arr_9 [i_0] [i_0] [i_0] = (((~var_8) % var_6));
            }
            var_19 = 193;

            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                var_20 &= (arr_0 [i_0] [i_1]);
                arr_13 [i_0] [i_1] [i_4] = (arr_4 [i_1] [i_1]);
            }
            for (int i_5 = 2; i_5 < 8;i_5 += 1)
            {
                var_21 = (((-7 ^ -12) ? ((127 ? 48748 : 6)) : -7));
                var_22 = (arr_5 [i_0] [i_1] [i_5]);
            }
            var_23 = (min(var_23, (((11307061806364322153 > var_4) ? (arr_2 [i_0] [i_1]) : -var_7))));
        }
        for (int i_6 = 3; i_6 < 9;i_6 += 1)
        {
            var_24 = ((var_9 ? ((((arr_18 [i_6 + 1]) <= ((((arr_0 [6] [9]) ? var_8 : (arr_20 [i_0]))))))) : (arr_3 [i_6])));
            var_25 &= 32767;
        }
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            var_26 -= (min((arr_11 [i_0] [0] [i_0] [i_0]), 4));
            var_27 += (max((((~((-16952 ? 7 : -1402981718))))), ((var_0 | (var_1 | 7139682267345229459)))));
            var_28 -= (((arr_15 [i_0] [i_0] [2]) ? (((((min(211, (arr_20 [i_0])))) ? var_7 : (arr_19 [i_0] [i_7])))) : ((var_4 ? (((((arr_18 [i_0]) || (arr_4 [i_0] [8]))))) : (max(var_4, (arr_5 [i_0] [10] [i_7])))))));
            var_29 = ((((((arr_19 [i_0] [i_7]) ? -var_9 : 268433408))) ? ((((arr_10 [i_0] [i_0] [i_7] [i_0]) + var_7))) : (((max(var_6, (arr_12 [i_0] [i_7]))) % ((((arr_8 [i_0] [i_7] [i_0] [i_0]) >> (((arr_23 [i_0]) - 17384)))))))));
            arr_24 [i_7] [10] [i_0] |= var_8;
        }
        var_30 = (~4095);
    }
    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        var_31 ^= (((((~(arr_25 [i_8])))) ? (arr_25 [i_8]) : ((-(((arr_26 [i_8] [i_8]) ? var_3 : -7))))));
        var_32 ^= (max((((arr_25 [i_8]) ? var_5 : -5)), (arr_27 [i_8])));
        var_33 = (max(var_33, (((+(((arr_27 [i_8]) | (arr_27 [i_8]))))))));
        var_34 ^= (((((arr_27 [i_8]) ? (min(7044, var_6)) : var_2)) + var_2));

        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            var_35 = (((max((7139682267345229461 * var_4), ((min(-665366319261707728, var_8))))) & (max(var_3, (min(2095598517, 11307061806364322153))))));
            var_36 -= var_7;
            var_37 = -5;
        }
    }
    var_38 = ((var_5 ? 1 : ((min((max(var_9, -12)), 5708)))));
    var_39 = (max(var_39, ((((var_10 - var_4) ? ((var_2 ? var_10 : 1)) : var_5)))));
    #pragma endscop
}
