/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 *= ((var_5 ? (((max(12452, var_6)))) : var_7));
                var_13 = ((((min(var_7, (arr_1 [i_0 + 2] [i_0 - 1])))) ? ((((arr_1 [i_0] [i_0]) ? -25711 : var_7))) : ((var_10 ? (arr_1 [i_0 - 1] [i_1]) : (arr_0 [i_1])))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] |= ((((((arr_1 [i_2] [i_2]) == (arr_7 [i_2])))) > var_9));
        arr_9 [i_2] [i_2] &= (((((arr_6 [i_2]) > 32768)) ? ((~(arr_6 [i_2]))) : (((!(arr_6 [i_2]))))));

        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            var_14 = (max(var_14, -12817));
            arr_12 [i_2] [i_3] = (-(arr_4 [1] [1]));
            /* LoopNest 2 */
            for (int i_4 = 2; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 10;i_5 += 1)
                {
                    {
                        arr_17 [i_2] [i_3] [i_4 - 1] [i_4 - 1] = ((var_3 ? ((var_2 / (-1 * -25711))) : 12458));
                        arr_18 [i_5] [i_2] [i_2] [i_2] = (arr_10 [i_2] [i_2] [i_2]);
                        var_15 ^= (max(((~(arr_1 [i_4 - 2] [i_5 - 2]))), ((((var_0 + 9223372036854775807) >> (var_7 - 19735))))));
                        var_16 = ((((arr_14 [i_4 - 1] [10] [i_5 - 2]) + var_1)) - (arr_5 [i_4 + 1] [i_5 - 2]));
                    }
                }
            }
            arr_19 [i_2] = ((((((var_3 ? var_5 : var_5)) ? ((((arr_1 [12] [i_3]) != var_6))) : 1))));
        }
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
    {
        var_17 += var_9;
        var_18 = (((!var_11) ? (~14436319990523756671) : (((min(-30880, var_5))))));
        var_19 = (arr_15 [i_6] [i_6]);
        arr_24 [i_6] [i_6] = ((var_0 ? (((((((25711 >> (((((-9223372036854775807 - 1) - -9223372036854775780)) + 47))))) && ((((arr_6 [i_6]) ? (arr_23 [i_6]) : 35477))))))) : (((!var_1) ? (var_8 - var_6) : (((min(21931, 12068))))))));
        arr_25 [i_6] [i_6] = (((var_5 | (arr_15 [i_6] [i_6]))));
    }
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        arr_30 [4] &= ((((~((-18 ? -22452 : -18347)))) >> (var_6 - 4509)));
        var_20 = ((((((arr_29 [i_7]) | (arr_29 [i_7])))) ? 22451 : ((var_4 ? (((14436319990523756671 ? -25711 : var_0))) : (18446744073709551611 * -30880)))));
        var_21 -= (arr_26 [8]);
    }
    #pragma endscop
}
