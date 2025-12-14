/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_11;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_20 += (((!(arr_0 [i_0] [i_0]))));
        var_21 = ((((max(((-(arr_0 [i_0] [i_0]))), ((~(arr_0 [i_0] [i_0])))))) ? ((+(((arr_0 [i_0] [3]) ? (arr_0 [17] [i_0]) : var_12)))) : (arr_0 [i_0] [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_8 [i_3] = ((2040 ? 13722 : -2147483647));
                        var_22 = ((((~2020) ? var_18 : (arr_3 [i_0] [i_1] [14]))));
                    }
                }
            }
        }
    }

    for (int i_4 = 2; i_4 < 22;i_4 += 1)
    {
        var_23 += (((!14844712553611523970) % ((1592 ? 134086656 : -8598502582276071319))));
        arr_11 [i_4 + 2] = (arr_9 [i_4 + 2] [i_4]);
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_24 = ((((((((arr_13 [1]) ? (arr_12 [i_5] [7]) : var_0)) >= var_1))) >= (795978683 && var_4)));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                {
                    var_25 = var_12;
                    arr_18 [i_6] [i_6] [i_6] [i_5] = (((min((arr_0 [i_5] [i_5]), (arr_0 [i_5] [i_6]))) ? ((-3185 / ((var_3 ? (arr_7 [i_5] [i_6]) : 4294967295)))) : (min(var_8, ((min(var_16, 55209)))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_26 &= ((-(min(((var_15 ? (arr_16 [i_5] [i_9]) : 10191024028616037564)), (arr_3 [i_5] [17] [17])))));
                                var_27 = var_0;
                                var_28 = (((((~(arr_16 [i_8] [i_5])))) ? ((~(arr_16 [i_6] [i_8]))) : (arr_16 [i_7] [10])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 = ((var_3 ? ((((((var_12 ? var_18 : var_6)) < var_1)))) : 15396807293227576137));
    #pragma endscop
}
