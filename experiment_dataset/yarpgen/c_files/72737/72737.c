/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_12;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [0] = (arr_1 [i_0] [i_0]);
        var_18 = (arr_1 [2] [i_0]);
        arr_3 [i_0] = ((arr_1 [i_0] [i_0]) < (((arr_1 [13] [i_0]) ? (arr_1 [14] [i_0]) : (arr_1 [i_0] [i_0]))));
        arr_4 [3] [5] = (((arr_1 [i_0] [0]) / (arr_1 [i_0] [0])));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_8 [i_1] = ((-(arr_6 [i_1])));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_12 [i_1] [i_2] = (((((-5257259996118531062 ? (arr_5 [11]) : (arr_5 [i_1])))) ? ((5257259996118531085 ? 207 : 1524603008)) : (((((arr_5 [i_1]) <= (arr_5 [i_1])))))));
            var_19 = (arr_6 [i_2]);
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_15 [i_1] [0] [i_1] = (((arr_14 [7] [5] [7]) ? 1 : (var_1 * 0)));
            arr_16 [i_1] [3] [i_3] = (arr_14 [i_1] [i_1] [i_1]);
            var_20 |= ((!(arr_13 [i_1])));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            var_21 *= ((((5257259996118531057 ? -5257259996118531062 : (arr_11 [i_1])))) ? (arr_11 [i_1]) : (var_7 ^ 14415));
            arr_19 [i_1] [16] = (((arr_10 [i_1] [i_1]) || (((-3104373898277132573 / (arr_18 [5] [i_4] [i_1]))))));
        }

        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            var_22 = (((arr_11 [i_1]) ? (max(4294967283, (((51120 ? 51123 : 1))))) : (arr_13 [i_1])));
            arr_22 [i_1] [i_5] [i_1] = (((((0 ? 79 : (arr_21 [i_5] [i_1])))) ? ((-((min((arr_9 [i_1]), (arr_7 [22])))))) : var_8));
        }
        var_23 = arr_6 [18];
        var_24 -= (min((((arr_9 [i_1]) ? (arr_9 [i_1]) : (arr_9 [i_1]))), ((((arr_9 [i_1]) <= (arr_9 [i_1]))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        arr_26 [i_6] = ((((var_8 || (arr_17 [i_6] [i_6] [2])))) << (14415 - 14403));
        var_25 = 1;
        var_26 *= ((-(arr_6 [i_6])));
        arr_27 [i_6] [i_6] = (arr_24 [i_6]);
    }
    var_27 = ((var_6 ? ((1 ? 18446744073709551615 : (-5257259996118531056 > 18446744073709551615))) : ((((1085920154 | 5257259996118531062) & (~var_13))))));
    #pragma endscop
}
