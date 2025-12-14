/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = (((((arr_2 [i_0]) + (arr_2 [i_0]))) | 0));
        var_12 &= (((((max(var_11, var_1)) ? var_8 : (2663147649 || 14251837592202282554)))));

        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            var_13 = (arr_4 [i_1 - 1]);
            var_14 = -193;
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_15 *= ((((!(arr_8 [i_0] [i_2] [i_2])))));
            var_16 += ((((min((arr_8 [i_0] [i_0] [i_0]), (arr_9 [i_2])))) ? (((max(1631819633, var_7)) * (0 * var_5))) : ((((arr_7 [i_0] [i_2]) << (((arr_8 [i_2] [i_2] [i_0]) - 126)))))));
            var_17 = ((((var_9 > -803777049690160710) + (((arr_5 [i_0] [i_0] [i_0]) ? (arr_5 [i_0] [i_0] [i_0]) : (arr_0 [i_2]))))));
            var_18 ^= ((((2663147659 ? -10886 : -2123626093))));
            arr_10 [i_0] [i_2] [i_2] = -var_7;
        }
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        var_19 = (((~var_5) < ((var_2 ? (arr_9 [i_3]) : ((min((arr_0 [i_3]), 23773)))))));
        arr_13 [i_3] = (((var_6 + 2147483647) << ((((((~var_2) != 255))) - 1))));
        arr_14 [i_3] = (+((15902 ? (arr_1 [i_3]) : 2750675266721334313)));
        arr_15 [i_3] &= (2 / 3995530887);
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        var_20 = (min(var_20, ((((((arr_8 [i_4] [i_4] [i_4]) || ((min(var_8, (arr_11 [i_4])))))) ? (0 <= 2663147649) : (arr_4 [i_4]))))));
        var_21 |= (((((((arr_16 [i_4]) ^ 30))) ? (arr_2 [i_4]) : var_1)));
    }
    var_22 = (max(((var_4 ? var_3 : var_6)), 3883899902));
    #pragma endscop
}
