/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;

    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        var_16 = var_0;

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_17 -= ((((((min(33012, 2047))) ? ((var_4 | (arr_1 [i_1]))) : var_10)) > (((65535 ? (arr_2 [i_1]) : var_6)))));
            var_18 = (~-var_12);
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
        {
            arr_7 [1] &= ((-111 ? 18446744073709551615 : 65535));
            arr_8 [i_2] [i_0] = ((((((~(arr_0 [i_0]))) ^ (4095 != var_3))) & var_7));
            var_19 = var_9;
        }
        for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 9;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    {
                        var_20 = (max(((281474976710655 ? -var_11 : (!6487732293242475009))), (((((var_3 ? (arr_15 [i_0] [i_3] [i_3] [i_5]) : 4294967295))) ? (arr_11 [i_3] [i_4]) : -112))));
                        var_21 = (min((((arr_10 [i_5]) ? (!var_14) : (min(var_12, var_14)))), (((!((!(arr_1 [i_5]))))))));
                    }
                }
            }
            var_22 = max((arr_4 [7] [i_3] [i_3]), (((((arr_1 [i_0]) || var_12)) ? (arr_4 [i_0] [i_3] [i_3]) : (arr_11 [i_0 + 4] [i_3]))));
        }
        for (int i_6 = 2; i_6 < 8;i_6 += 1)
        {
            var_23 = var_5;
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    {
                        var_24 = 127;
                        var_25 = ((var_14 + (max((var_9 & var_4), (arr_23 [i_8] [i_7] [i_7 - 1] [i_6] [i_0 + 1])))));
                        arr_25 [i_0] [i_0] = (((!6013038434245079136) ? (((((((var_3 ? var_10 : var_9))) <= (((arr_2 [i_7 - 1]) ? (arr_6 [i_0]) : var_3)))))) : (((((var_13 ? 5909657216304343526 : (arr_10 [i_6])))) ? (var_5 || var_12) : (var_4 | 2147483647)))));
                    }
                }
            }
            var_26 = (((var_13 != var_8) ? (max((((-(arr_0 [i_0])))), (-16 / var_8))) : ((((((~(arr_22 [i_0] [i_6] [i_0])))) ? (((arr_12 [i_6] [i_0] [i_0] [i_0]) | var_6)) : 52389)))));
        }
        var_27 = (arr_10 [i_0 + 2]);
    }
    var_28 = (((var_0 + 2147483647) << (((var_0 + 42) - 13))));
    /* LoopNest 2 */
    for (int i_9 = 2; i_9 < 17;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 17;i_10 += 1)
        {
            {
                var_29 = (((((((((arr_27 [i_9]) + 2147483647)) >> var_7))) ? var_3 : (arr_30 [i_9] [i_10]))));
                var_30 -= ((43028 < (arr_31 [i_9 - 1] [i_9 - 2] [i_9 - 2])));
                arr_32 [2] [i_10 + 1] = var_4;
            }
        }
    }
    #pragma endscop
}
