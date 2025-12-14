/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_11 ? ((((var_14 > (var_9 + var_8))))) : (255 - var_2)));

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_16 -= (arr_1 [i_0 + 1]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_2] = ((-(~var_14)));
                    arr_10 [i_2] [i_1] [i_1] [i_2] = (arr_0 [8]);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    var_17 *= ((1 << (((arr_17 [i_3] [i_3 - 2]) - 85))));
                    var_18 += (((((arr_6 [i_0 + 1]) ? var_12 : (arr_3 [i_0 - 1]))) + 6207150957969745939));
                    var_19 = (max(var_19, (arr_6 [i_4])));
                    var_20 |= ((((6207150957969745943 ? 22919 : -30133)) & (~255)));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {

        for (int i_6 = 2; i_6 < 10;i_6 += 1)
        {
            arr_23 [i_5] = (((arr_19 [i_6 + 2]) ^ (arr_19 [i_6 - 1])));
            var_21 += (((arr_22 [i_6 + 3] [i_6 - 1] [i_6]) + 0));
            arr_24 [i_5] = (((30117 - -1) + (arr_21 [i_5] [i_5])));
            arr_25 [i_5] = (arr_19 [0]);
        }

        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            arr_30 [i_7] [i_7] &= var_2;
            var_22 = (((((1 != (arr_29 [i_5] [i_5] [i_5])))) / (arr_27 [5])));
            var_23 = (max(var_23, (-6207150957969745939 / 65535)));
            var_24 += -1;
        }
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            arr_34 [i_5] [i_8] = (arr_29 [i_5] [i_5] [i_5]);
            var_25 = (~(arr_28 [8] [i_5] [i_5]));
        }
        var_26 *= (((-22920 / -402223905087913378) / (var_5 + -12992)));
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        arr_38 [i_9] = (((arr_32 [i_9] [1]) ? (arr_33 [i_9] [1]) : (((((-1 | (arr_20 [6])))) ? (((arr_22 [i_9] [i_9] [i_9]) ? -12979 : (arr_33 [7] [0]))) : (~var_7)))));
        arr_39 [i_9] [5] = (arr_37 [i_9]);
        var_27 = (((arr_18 [6]) == (arr_26 [i_9])));

        for (int i_10 = 2; i_10 < 12;i_10 += 1)
        {
            var_28 = (min(var_28, (((((arr_32 [i_9] [10]) - (arr_33 [i_9] [i_10])))))));
            arr_43 [i_10] [13] [i_10] = ((64 || -6207150957969745939) ^ (((1 == ((5442527749401456537 & (arr_26 [i_9])))))));
        }
        for (int i_11 = 3; i_11 < 13;i_11 += 1)
        {
            var_29 ^= ((~(~12420288981017023145)));
            var_30 *= var_4;
            var_31 = (((((arr_37 [i_11 - 3]) * (arr_37 [i_9]))) + (arr_37 [i_9])));

            for (int i_12 = 0; i_12 < 14;i_12 += 1)
            {
                arr_51 [i_9] [4] [i_12] [4] &= -1;
                arr_52 [i_9] [3] [i_11] = ((((((arr_28 [3] [i_11] [i_12]) ? (arr_28 [i_11] [i_9] [12]) : var_5))) ? (arr_46 [i_9]) : (((arr_20 [i_9]) ^ var_8))));
                arr_53 [i_11] [i_11] [i_12] = (max((((!(arr_50 [i_9] [i_9] [i_11] [i_11 - 3])))), (arr_42 [i_9] [13] [i_11])));
            }
        }
    }
    #pragma endscop
}
