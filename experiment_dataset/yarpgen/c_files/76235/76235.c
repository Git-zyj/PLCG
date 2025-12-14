/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -var_13;
    var_16 = ((((~(var_9 >> 1))) ^ 92));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_17 = var_12;
                    var_18 = 1;
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_19 |= 1;
        var_20 = (((arr_10 [i_3]) ? (arr_1 [6] [i_3]) : (2147483647 / 3)));
        var_21 = (max((min((arr_7 [4] [4]), 2147483647)), (max((arr_7 [12] [12]), (arr_7 [14] [i_3])))));
        var_22 = (arr_9 [i_3]);
        arr_11 [i_3] [1] = (var_7 - (arr_6 [i_3] [i_3] [i_3] [i_3]));
    }
    for (int i_4 = 2; i_4 < 9;i_4 += 1)
    {
        arr_14 [i_4] [i_4] = ((((max((arr_7 [i_4] [i_4]), (arr_7 [i_4] [i_4])))) ? (arr_7 [i_4] [i_4]) : (((arr_7 [i_4] [i_4]) ? 240 : var_6))));
        arr_15 [2] &= (min((((1 * 18446744073709551615) / (arr_1 [2] [i_4]))), (arr_8 [i_4 - 2] [i_4 - 1])));
        var_23 = -1;
        var_24 = (min(-1, ((((min(var_12, var_1))) ? (((max(var_7, 1)))) : ((var_3 ? 18446744073709551615 : var_3))))));
        var_25 = ((var_4 - (arr_13 [i_4 - 2])));
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
    {
        var_26 = (arr_7 [i_5] [1]);
        var_27 -= 127;
        var_28 = (((((65535 | (arr_3 [i_5] [i_5] [i_5])))) || var_6));
    }
    for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    {
                        var_29 = max((((~-4) ? 36333 : var_1)), ((1 >> (var_9 - 53))));
                        var_30 = (((max((min((arr_3 [i_6] [i_6] [i_6]), (arr_23 [i_6] [i_6]))), (arr_32 [i_6] [i_9] [i_8] [i_9] [i_6]))) ^ 15));
                        var_31 &= (arr_3 [i_6] [i_6] [i_8]);
                        arr_33 [i_9] [i_7] [i_9] [i_9] = ((((((arr_6 [i_9] [i_8] [i_7] [i_6]) ? (arr_6 [i_6] [i_7] [i_6] [i_6]) : (arr_2 [i_9])))) ? ((var_6 >> (((arr_2 [i_9]) + 1692362658)))) : ((12113387612952168560 ? 52 : (arr_2 [i_9])))));
                    }
                }
            }
        }
        var_32 -= ((((((arr_16 [i_6] [i_6]) ? (arr_22 [i_6] [i_6] [i_6]) : var_6))) ? -4 : ((((-1 ? 25 : 1))))));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {
                {
                    var_33 = 1;
                    arr_40 [i_11] [i_10] [i_6] = arr_35 [i_6] [i_10] [i_6];
                }
            }
        }
    }
    #pragma endscop
}
