/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_18 += (arr_1 [4]);
        var_19 ^= ((~((var_5 ? (arr_0 [i_0 + 4]) : (((arr_1 [12]) ? (arr_1 [2]) : (arr_1 [0])))))));
    }
    for (int i_1 = 3; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_20 = (min(var_20, ((!(arr_2 [6])))));

        /* vectorizable */
        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {
            arr_7 [i_1] [i_1] = ((!(arr_5 [i_1 + 3] [i_1])));
            var_21 += ((((((arr_2 [i_2]) ? (arr_6 [0]) : -32692))) ? (arr_4 [i_1 - 2] [i_2 - 2] [i_2]) : (arr_4 [i_2 - 2] [i_2 - 1] [i_2 - 1])));
            arr_8 [i_1] = ((((arr_2 [i_1]) ? 18446744073709551615 : (arr_6 [i_1]))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    {
                        var_22 = (arr_14 [i_1] [i_4 - 1] [i_1 + 4] [i_1]);
                        var_23 += (((arr_0 [i_1 - 3]) ? (arr_6 [i_4 - 1]) : ((-18609 ? (arr_12 [i_3] [i_4]) : var_8))));
                    }
                }
            }
            var_24 = (((arr_4 [i_1 - 1] [i_1 + 1] [i_1 - 3]) ? (arr_3 [i_1 + 3]) : (32692 || 4)));
        }
        var_25 = (((~(arr_15 [i_1 - 2] [i_1]))));
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_26 &= (max(((!(arr_9 [i_1] [0] [13]))), (((((arr_16 [i_6 - 1] [i_6] [1] [i_6] [i_6] [i_6 - 1]) ? var_9 : (arr_0 [i_7]))) == (((arr_1 [4]) ? (arr_22 [i_1] [4] [8] [4]) : (arr_6 [i_1])))))));
                    var_27 = (max(var_27, ((((((arr_4 [i_1 - 3] [i_1 - 1] [i_1 - 2]) ? (((var_8 ? var_1 : (arr_14 [2] [i_7] [i_6 + 2] [2])))) : ((var_9 ? var_9 : 0)))) - (min((((arr_3 [i_7]) * -1819696444)), ((((arr_12 [4] [i_6 - 1]) << (((((arr_5 [i_1] [4]) + 29188)) - 20))))))))))));
                }
            }
        }
    }
    for (int i_8 = 3; i_8 < 10;i_8 += 1) /* same iter space */
    {
        var_28 *= (((arr_4 [i_8] [1] [i_8]) ? ((((min((arr_18 [12]), var_10))) ? (arr_1 [1]) : (arr_0 [i_8]))) : (7 * 19655)));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    {
                        var_29 &= (((arr_32 [i_8 - 2] [i_8 + 1] [i_9] [i_10] [i_11]) ? (((-(min((arr_3 [i_9]), (arr_22 [i_11] [1] [1] [i_8 - 3])))))) : (((arr_19 [i_8 + 3] [12] [i_8 + 1] [i_8 - 2]) >> (((arr_10 [4]) - 656247378))))));
                        arr_34 [i_9] [i_9] [i_8] [i_9] = var_9;
                        var_30 = (i_8 % 2 == 0) ? ((((((arr_20 [i_8 + 3]) ? (arr_20 [i_8 + 1]) : (arr_20 [i_8 - 3]))) >> (((((((var_6 ? (arr_31 [9] [i_9] [i_8]) : (arr_25 [i_8 + 3] [i_8])))) ? (((arr_21 [i_8]) * (arr_0 [i_9]))) : ((7 ? (arr_32 [i_8] [i_9] [i_10] [i_11] [i_11]) : var_17)))) - 485744890))))) : ((((((arr_20 [i_8 + 3]) ? (arr_20 [i_8 + 1]) : (arr_20 [i_8 - 3]))) >> (((((((((var_6 ? (arr_31 [9] [i_9] [i_8]) : (arr_25 [i_8 + 3] [i_8])))) ? (((arr_21 [i_8]) * (arr_0 [i_9]))) : ((7 ? (arr_32 [i_8] [i_9] [i_10] [i_11] [i_11]) : var_17)))) - 485744890)) + 297965648)))));
                        var_31 = (((((arr_16 [i_8 + 1] [i_8 - 3] [i_8] [i_8] [i_8 - 3] [i_10]) ? (arr_16 [i_8 - 1] [i_8 - 1] [i_8] [i_8] [i_8 + 1] [i_11]) : (arr_16 [i_8 + 4] [i_8 + 3] [i_8] [i_8] [i_8 + 4] [9]))) < (arr_16 [i_8 - 2] [i_8 - 1] [i_8] [i_8] [i_8 - 2] [i_11])));
                    }
                }
            }
        }
    }
    var_32 = var_15;
    #pragma endscop
}
