/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [1] = (arr_1 [i_0] [i_0]);
        arr_3 [i_0] = (((((((7 ? 4517910623160800041 : 5))) ? ((~(arr_1 [i_0] [i_0]))) : ((var_18 ? (arr_1 [i_0] [i_0 + 1]) : var_7)))) + (0 * -20689)));
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1 + 1] = ((var_5 ? (((~((var_5 ? var_3 : (arr_0 [0])))))) : ((~(((arr_0 [8]) ? (arr_1 [i_1] [i_1]) : (arr_4 [i_1] [i_1])))))));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 14;i_4 += 1)
                {
                    {
                        arr_14 [i_1 - 2] [i_2 + 2] [i_4] [i_3] [i_4] [i_4] = (max((max(-4783, ((((arr_12 [i_1] [i_2] [4] [i_4] [i_3]) >= (arr_12 [1] [i_2] [7] [i_2] [i_2])))))), ((((((var_16 ? (arr_4 [i_1] [i_2 + 2]) : (arr_13 [i_1] [i_4] [i_2] [15] [i_3] [2])))) || (!var_4))))));
                        var_20 ^= (((arr_1 [2] [2]) << ((((+(((arr_12 [i_1] [i_1] [i_1] [i_1] [i_1]) ? var_13 : (arr_12 [i_1] [4] [i_1] [i_1] [i_1]))))) - 4294962514))));
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            arr_19 [i_5] [i_6] = ((((((var_18 ? ((~(arr_17 [i_6]))) : ((var_6 ? (arr_17 [i_5]) : (arr_16 [i_6]))))) + 2147483647)) << ((((((~(arr_17 [1]))) + 31)) - 4))));
            arr_20 [10] [10] [i_6] |= ((~(((arr_18 [i_6]) | (arr_15 [i_5])))));
            var_21 = (((arr_18 [i_5]) ? ((((min(var_14, (arr_18 [i_5])))) ? var_15 : (((~(arr_18 [i_5])))))) : ((min(20688, ((var_4 ? (arr_17 [16]) : (arr_18 [i_5]))))))));
        }
        for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
        {
            var_22 = ((~(((((var_11 ? (arr_17 [i_5]) : (arr_16 [i_5])))) ? (((!(arr_21 [8] [1])))) : (arr_21 [i_7] [i_5])))));
            arr_23 [i_5] [18] [i_7] = var_3;
        }
        for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
        {
            arr_28 [i_5] [i_5] = ((18446744073709551615 ? 5 : 23904));
            var_23 = (max(var_23, 12));
        }
        arr_29 [i_5] = ((20688 ? 20698 : -20689));
    }
    for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
    {
        var_24 *= ((!(arr_16 [i_9])));
        arr_34 [16] = (((((-(~20696)))) / (max((~var_0), (((arr_32 [10]) ? (arr_16 [i_9]) : (arr_25 [i_9])))))));
    }
    var_25 = (((((4786 ? var_15 : 150)) == var_7)) ? var_16 : ((((var_16 ? var_6 : var_14)) | (var_4 & var_6))));
    var_26 |= (((((~var_19) ^ ((var_7 ? var_12 : var_15)))) != var_18));
    #pragma endscop
}
