/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((var_6 ? var_14 : var_14)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = ((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))));
                    arr_9 [i_0] [i_1 - 2] [i_0] = ((((((arr_0 [i_0]) ? var_10 : var_2))) - (((min((arr_4 [i_0] [i_1 - 1] [i_2]), (arr_5 [i_0] [i_0] [i_2])))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            {
                arr_14 [i_4] &= 707620884149558723;
                var_16 = (min(((-(~4397509640192))), ((((var_13 / var_0) / (arr_11 [i_3]))))));
            }
        }
    }
    var_17 = var_7;

    for (int i_5 = 4; i_5 < 18;i_5 += 1)
    {
        var_18 = (min(var_18, ((((((33554431 ? -530475515 : 2935060499))) ? (((+((18446744073709551615 ? (arr_12 [i_5]) : (arr_10 [i_5] [i_5 - 2])))))) : (min((((arr_17 [i_5]) ? (arr_18 [1] [i_5]) : var_2)), ((max((arr_18 [i_5] [i_5]), var_4))))))))));
        arr_19 [i_5] = ((((max(var_4, var_5))) ? var_4 : ((((3687177275 * var_0) / var_9)))));
        arr_20 [i_5] = ((-(arr_16 [i_5])));
        var_19 = (((var_6 & (arr_16 [i_5]))));
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
    {
        var_20 = ((((-var_3 ? ((-(arr_2 [i_6] [0] [2]))) : var_4)) < (((((arr_22 [i_6]) < var_3))))));
        var_21 = (arr_6 [0] [i_6]);
    }
    for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
    {
        arr_27 [i_7] = ((~(max(var_2, (arr_1 [i_7])))));
        var_22 = (min(var_22, (((((max((arr_10 [6] [i_7]), 147546794))) ^ (min((arr_7 [13] [i_7] [i_7]), (arr_13 [i_7]))))))));
        arr_28 [i_7] &= ((var_5 > (607790024 ^ 3687177296)));
    }
    #pragma endscop
}
