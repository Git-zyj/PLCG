/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_16 = (min((min(((((arr_1 [i_0]) || var_8))), -var_9)), ((var_14 ? (arr_1 [i_0]) : var_5))));
        arr_2 [2] [2] = (((arr_0 [i_0]) ? (((arr_0 [i_0]) - var_15)) : ((((max(var_14, var_11))) ? ((((arr_0 [11]) ? (arr_0 [i_0]) : (arr_1 [i_0])))) : var_0))));
        var_17 = (((((((max(var_14, var_11))) ? (((arr_1 [i_0]) ? (arr_1 [i_0]) : var_0)) : var_12))) && (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        var_18 = (min((381949840 & 112), ((~(arr_13 [i_1] [i_2] [i_3] [i_1])))));
                        var_19 = (((arr_3 [i_1] [i_2]) >> ((((~(arr_3 [i_1] [i_2]))) - 5949531661599292965))));
                        arr_14 [i_1] [i_1] [i_1] [4] = ((((+(((arr_7 [i_2] [1] [1]) ? var_8 : var_5))))) | (((((arr_9 [i_1] [i_2] [i_2] [i_2]) || var_0)) ? ((min(var_13, (arr_7 [i_1] [1] [i_3])))) : (((arr_7 [i_4] [6] [i_1]) ? var_8 : var_3)))));
                        arr_15 [i_1] [i_1] [5] [i_1] = ((~(!var_1)));
                    }
                    var_20 = ((var_1 ? (((max((arr_5 [i_1]), (arr_7 [i_1] [14] [i_1]))) * (arr_8 [i_3] [i_2] [i_1]))) : (((((min(var_4, (arr_4 [13])))) / (arr_6 [i_3] [16] [12]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_21 *= ((((max(var_0, (arr_16 [i_1] [i_2] [i_3] [i_5] [i_6 + 1] [i_5])))) ? var_13 : (min(((4170872886 ? 54179 : (arr_6 [i_1] [i_3] [i_1]))), 11345))));
                                arr_22 [i_1] [i_2] [i_3] [i_1] [19] [i_5] [i_1] = ((((((arr_19 [i_6 - 1] [i_6 + 1]) ? (arr_12 [i_2] [i_6 - 1]) : (arr_19 [i_6 + 1] [i_6 - 1])))) ? var_4 : ((min((arr_11 [i_1] [i_1] [8] [i_6]), (var_10 < var_1))))));
                            }
                        }
                    }
                }
            }
        }
        var_22 *= (arr_6 [i_1] [i_1] [i_1]);
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 19;i_8 += 1)
        {
            {
                var_23 = ((((((min(var_8, var_3)) | (~var_9)))) ^ ((var_15 | (arr_25 [9] [i_7])))));
                var_24 += (arr_26 [i_7] [i_7]);
                var_25 *= ((((min(127, 54183))) <= (((!(arr_23 [i_7]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {
            {
                var_26 = var_13;
                var_27 *= ((((((min(var_6, (var_14 >= var_12)))) + 2147483647)) << (!var_8)));
            }
        }
    }
    var_28 = ((min(((11357 ? 54178 : 3037354755)), var_6)) >> ((((((max(var_5, var_14))) ? var_2 : (min(var_10, var_3)))) - 51841)));
    var_29 = var_1;
    #pragma endscop
}
