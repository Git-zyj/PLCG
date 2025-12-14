/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_13 = 1879048192;
                    arr_6 [i_1] = (arr_4 [i_1] [i_1 + 1]);
                }
            }
        }
        arr_7 [i_0] = ((((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))) ? (arr_4 [i_0] [i_0]) : var_12));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        arr_11 [i_3] [i_3] = ((arr_1 [i_3]) ? (((max((arr_1 [i_3]), (arr_1 [i_3]))))) : (arr_1 [i_3]));
        var_14 = (2415919130 == 269225054084191801);
        arr_12 [8] = ((((arr_0 [i_3] [i_3]) && (arr_8 [i_3]))));
    }
    for (int i_4 = 2; i_4 < 23;i_4 += 1)
    {
        var_15 = (arr_14 [i_4 - 2]);
        arr_15 [i_4] [i_4] = (arr_14 [i_4 + 1]);
        var_16 += (arr_14 [i_4]);
        var_17 = (((max((arr_14 [i_4]), (arr_13 [i_4 - 2]))) >> (((arr_14 [i_4]) - 233))));
    }
    var_18 = ((var_9 - (var_9 <= var_11)));

    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        var_19 -= ((arr_18 [18]) >> (((arr_18 [14]) - 171)));
        /* LoopNest 3 */
        for (int i_6 = 3; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    {
                        arr_27 [i_5] [i_5] [i_7] [i_5] = 2415919097;
                        arr_28 [i_5] [i_5] = (((max(((((arr_22 [i_6] [i_7] [i_7]) + var_1))), (max(var_7, (arr_13 [i_5]))))) - (arr_13 [i_5])));
                        arr_29 [i_5] [i_6 - 2] [i_5] = ((max((arr_23 [i_6 - 3] [i_6 + 2]), (arr_23 [i_6 - 1] [i_6 + 1]))));
                        arr_30 [i_5] [i_5] = (arr_21 [i_5] [i_6] [i_7] [i_8]);
                    }
                }
            }
        }
        var_20 = (((((arr_19 [i_5]) / var_12))) ? ((var_8 ? var_5 : (max(var_9, var_12)))) : (arr_25 [i_5] [i_5] [i_5] [i_5]));
        var_21 = ((min((arr_16 [i_5]), (arr_16 [i_5]))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {
        arr_35 [i_9] = (arr_14 [i_9]);
        arr_36 [i_9] = ((arr_17 [i_9]) + (arr_17 [i_9]));
    }

    for (int i_10 = 0; i_10 < 18;i_10 += 1)
    {
        var_22 = ((~(arr_2 [i_10] [i_10] [i_10])));
        var_23 = (((min(2415919103, (var_2 - 1118094086))) ^ (((-((min((arr_32 [i_10]), (arr_23 [i_10] [i_10])))))))));
        arr_39 [10] &= (((arr_22 [i_10] [i_10] [10]) || ((min((arr_25 [i_10] [i_10] [19] [i_10]), (arr_26 [i_10] [8] [i_10] [i_10] [i_10]))))));
    }
    var_24 = var_2;
    #pragma endscop
}
