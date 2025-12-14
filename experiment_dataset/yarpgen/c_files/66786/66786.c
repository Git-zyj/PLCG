/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 4146149954;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_14;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            arr_17 [i_0] [5] [i_1] [i_0] [2] [i_3] [i_1] = (8791798054912 ? (((max((arr_7 [i_1]), 18)))) : (((arr_14 [5] [i_1] [i_0] [i_1] [i_1] [7]) ? (max((arr_13 [i_0] [i_1] [i_1] [i_3] [13]), var_3)) : 209)));
                            arr_18 [11] [i_1] [3] [i_1] [i_1] = (min(((((((arr_0 [i_0] [i_1]) / 1))) / var_2)), ((((((var_3 ? 0 : 255))) ^ ((9051 ? var_0 : var_5)))))));
                        }
                        arr_19 [9] [9] [i_1] [i_1] [12] = (arr_1 [i_3]);
                        arr_20 [i_1] [0] [i_0] [i_1] [6] [7] = (arr_8 [i_1] [6] [i_3]);
                        arr_21 [i_0] [i_0] [i_1] [12] [i_0] [i_1] = (((((var_2 * 232) != (((-11823 ? var_5 : -256))))) ? (((var_13 ? (((~(arr_11 [i_0] [i_0] [i_1] [i_1] [i_3])))) : ((var_11 ? 8 : (arr_3 [i_1] [i_1])))))) : 247));
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    {
                        var_21 = ((((((~var_5) ? ((~(arr_23 [i_6] [i_6]))) : ((var_13 ? (arr_24 [i_5]) : 26))))) ? ((((((var_4 ? var_3 : (arr_28 [i_5] [i_5])))) ? ((min(-708139854, 120))) : (arr_28 [19] [i_5])))) : ((((0 ? -249 : var_0)) + var_4))));
                        var_22 = (((((-((var_5 + (arr_24 [7])))))) ? ((((((arr_22 [i_6] [i_8]) / (arr_30 [i_5])))) ? -4294967295 : ((var_19 ? (arr_33 [i_8] [i_8]) : var_14)))) : var_5));
                    }
                }
            }
        }
        arr_35 [i_5] = ((((((0 ? (arr_32 [i_5] [i_5] [19] [i_5] [10] [i_5]) : (arr_34 [i_5] [i_5] [i_5] [10] [6] [7])))) ? (max(136, (arr_25 [i_5] [i_5] [i_5]))) : ((15634 ? var_18 : (arr_29 [i_5] [i_5] [i_5] [i_5]))))));
        arr_36 [5] [5] = (((arr_30 [i_5]) ? (min((arr_31 [i_5] [14] [i_5] [i_5] [i_5] [i_5]), (arr_31 [i_5] [i_5] [i_5] [i_5] [i_5] [9]))) : 2147483648));
    }
    for (int i_9 = 0; i_9 < 16;i_9 += 1)
    {
        arr_39 [i_9] = (arr_27 [i_9]);
        var_23 = ((-7408525760157017913 ? (max((var_11 - var_19), (arr_27 [i_9]))) : var_16));
    }
    #pragma endscop
}
