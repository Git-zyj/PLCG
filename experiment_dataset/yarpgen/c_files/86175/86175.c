/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;
    var_16 ^= var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_17 -= var_4;
                arr_4 [i_0] [i_1] = ((~((((max((arr_0 [i_0]), var_3))) ? (1053 + 2) : ((-(arr_2 [i_0] [i_1] [i_0])))))));
            }
        }
    }

    for (int i_2 = 4; i_2 < 9;i_2 += 1)
    {
        arr_8 [i_2] = 28;
        var_18 *= (((((((min((arr_3 [i_2] [i_2] [i_2]), var_11))) + (arr_5 [1] [i_2 + 2])))) * (((arr_5 [i_2 - 2] [i_2]) ? (!-99) : ((21580 + (arr_0 [i_2])))))));
    }
    for (int i_3 = 2; i_3 < 17;i_3 += 1)
    {
        var_19 = ((var_12 ? (-15137 || 253) : ((max(((-(arr_10 [10]))), var_7)))));
        arr_11 [i_3] [i_3] = min((((((max((arr_10 [i_3]), var_7))) ? ((var_8 ? (arr_3 [i_3 - 2] [i_3 - 1] [i_3 - 2]) : 28)) : (var_6 > var_6)))), (((var_3 ? (arr_10 [i_3]) : (arr_0 [i_3 - 1])))));
        var_20 = (i_3 % 2 == 0) ? ((((((52049 ? (arr_2 [i_3 - 2] [i_3 - 2] [i_3]) : (arr_3 [10] [i_3] [i_3]))) / (((arr_2 [i_3] [i_3] [i_3]) / (arr_2 [i_3 - 2] [i_3] [i_3]))))) >> (((arr_2 [i_3 + 2] [i_3 + 2] [i_3]) - 798558194223672593)))) : ((((((52049 ? (arr_2 [i_3 - 2] [i_3 - 2] [i_3]) : (arr_3 [10] [i_3] [i_3]))) / (((arr_2 [i_3] [i_3] [i_3]) / (arr_2 [i_3 - 2] [i_3] [i_3]))))) >> (((((arr_2 [i_3 + 2] [i_3 + 2] [i_3]) - 798558194223672593)) - 8385573819312327446))));
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        var_21 = (min(var_21, ((((((-15137 ? -8865 : 255))) ? (min((var_2 + 247), 52049)) : ((min((arr_5 [i_4] [i_4]), (max(-122, 5943))))))))));
        var_22 -= ((((var_5 + 2147483647) >> (((min(17126564711135939483, 10411952907250647307)) - 10411952907250647281)))));
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 14;i_7 += 1)
            {
                {
                    var_23 = ((min(6, 22)));
                    var_24 = (((((arr_3 [i_6] [9] [i_7 - 2]) ? var_13 : ((var_10 ^ (arr_9 [i_5]))))) < (arr_18 [i_5] [i_6] [i_6])));
                    arr_22 [i_5] [i_6] [i_5] [i_5] = 10;
                }
            }
        }
        var_25 -= (((((arr_16 [i_5] [i_5]) == (max((arr_9 [18]), 15125)))) ? (min((var_10 / 17707349524830695701), (arr_17 [6] [6] [i_5]))) : (((((arr_2 [i_5] [i_5] [20]) < (arr_2 [i_5] [i_5] [10])))))));
        var_26 = (((max((max(-95, 84), (arr_21 [i_5] [i_5] [i_5] [i_5]))))));

        /* vectorizable */
        for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
        {
            arr_25 [i_5] = (((arr_16 [i_5] [i_8]) + ((1320179362573612154 ? 17203071087114070113 : -4710))));
            /* LoopNest 3 */
            for (int i_9 = 1; i_9 < 13;i_9 += 1)
            {
                for (int i_10 = 3; i_10 < 13;i_10 += 1)
                {
                    for (int i_11 = 4; i_11 < 13;i_11 += 1)
                    {
                        {
                            arr_34 [i_5] [i_5] [i_5] [i_5] [i_5] = (((arr_20 [i_5] [i_9 + 2] [i_10 - 2]) ? (arr_20 [i_5] [i_9 - 1] [i_10 - 3]) : (arr_20 [i_5] [i_9 + 2] [i_10 + 2])));
                            arr_35 [i_5] [i_5] [7] [i_5] [i_5] [i_5] = var_11;
                            arr_36 [i_5] [i_5] = ((!(arr_20 [i_5] [i_8] [i_9 - 1])));
                            var_27 = ((-(arr_3 [i_9 + 1] [i_9 + 1] [i_9 - 1])));
                        }
                    }
                }
            }
            arr_37 [i_5] [i_8] = (((arr_14 [i_5]) ? (var_9 - var_12) : (arr_1 [i_5])));
            arr_38 [i_5] = (((arr_16 [i_5] [i_5]) ? (arr_16 [i_5] [i_8]) : var_9));
        }
        for (int i_12 = 0; i_12 < 15;i_12 += 1) /* same iter space */
        {
            arr_43 [i_5] = ((min(((((arr_41 [i_5]) ? var_12 : 14750))), (((arr_32 [i_5] [i_5]) ^ (arr_0 [i_5]))))));
            arr_44 [i_5] = ((((min(((max(var_10, var_14))), var_3))) ? (min((((var_10 ? (arr_33 [i_5] [i_5] [i_5]) : (arr_39 [i_5] [i_5] [i_12])))), (var_3 - var_8))) : (((var_5 ? (2131 | var_14) : ((var_10 << (((arr_14 [i_5]) - 22833)))))))));
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 15;i_13 += 1) /* same iter space */
        {
            var_28 = ((~(((arr_27 [i_5] [i_13] [i_5]) ? 1 : (arr_20 [i_5] [i_5] [i_5])))));
            arr_49 [i_5] = 20504;
        }
        var_29 = -11;
    }
    #pragma endscop
}
