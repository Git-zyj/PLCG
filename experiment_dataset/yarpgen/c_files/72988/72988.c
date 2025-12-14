/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = 4294967292;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_8 [i_0] = ((23582 ? (arr_1 [i_0]) : var_4));
            var_18 = (arr_2 [i_1]);
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_19 = (-(((!(arr_7 [i_0] [i_2])))));
            arr_11 [i_0] = (max(((((var_16 ? (arr_10 [11] [11]) : var_12)) | (((arr_0 [i_2]) ? var_14 : var_8)))), (((-23582 != (min(var_16, 41960)))))));
        }
    }
    for (int i_3 = 2; i_3 < 24;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 24;i_6 += 1)
                {
                    {
                        arr_23 [i_3] [i_3] [i_5] = (max(-var_5, -19159));
                        arr_24 [i_3] [i_3] [i_5] [8] [i_6] [20] = (((var_11 || (arr_20 [9] [i_4] [i_4] [9] [i_4]))));
                        arr_25 [i_3] [i_3] [1] [i_6] = (max((((arr_22 [i_3] [i_6 - 1] [17] [i_6 - 1]) ? (arr_22 [i_3] [i_6 - 1] [i_6] [20]) : 41960)), ((min((arr_22 [i_3] [i_6 - 1] [22] [i_3]), (arr_22 [i_3] [i_6 + 1] [i_6] [i_6 - 1]))))));
                        arr_26 [i_3] [i_3] [i_4] [i_3] [i_5] [2] = (((((((var_10 ? (arr_19 [15] [i_3] [i_4] [i_3] [i_6]) : var_3))) ? (((arr_18 [i_6] [12] [i_4] [i_3]) + 41962)) : ((min((arr_20 [i_3] [i_5] [i_5] [i_5] [i_5]), 128))))) * (((((41955 ? -2049321008 : var_11)))))));
                    }
                }
            }
        }
        var_20 = (((arr_16 [i_3] [i_3]) ? (((~-11652) ? ((((arr_17 [i_3]) << (23571 - 23571)))) : var_5)) : (((((var_5 << (1782607836093306176 - 1782607836093306166))))))));
        arr_27 [i_3] = (min((arr_22 [i_3] [i_3] [i_3] [15]), (max(var_9, ((((arr_16 [i_3] [i_3]) ? (arr_22 [i_3] [i_3] [i_3] [i_3]) : var_17)))))));
    }
    for (int i_7 = 4; i_7 < 22;i_7 += 1)
    {
        arr_30 [i_7] = (!var_0);
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                {
                    var_21 = (max((arr_34 [i_8 + 1] [i_8] [i_8 - 1] [1]), (((arr_34 [i_8 + 1] [i_8 - 2] [i_8 - 1] [3]) ? (arr_18 [i_8 + 1] [i_8] [i_8 - 1] [16]) : var_8))));
                    arr_35 [i_7] [i_9] [i_7] = (arr_12 [i_9]);
                    arr_36 [i_7] [i_9] = var_4;
                    arr_37 [i_9] [i_8] [13] [i_9] = (min(var_7, ((min(((1 ? 26767 : var_17)), var_17)))));
                    var_22 = (min((arr_22 [i_9] [i_7 - 2] [i_8 + 2] [i_8 - 2]), (((arr_22 [i_9] [i_7 - 2] [i_8 + 1] [i_8 - 1]) ? (arr_21 [i_7] [i_7] [i_9] [i_7 + 2] [i_8 + 2]) : (arr_22 [i_9] [i_7 + 3] [i_8 - 1] [i_8 + 2])))));
                }
            }
        }
        arr_38 [24] = (arr_16 [i_7] [i_7]);
        arr_39 [i_7] = (arr_34 [i_7] [9] [i_7] [i_7 + 1]);
    }
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 13;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                {
                    arr_49 [i_11] [i_12] = -23567;
                    var_23 = (max((((arr_16 [i_11] [i_12]) & (arr_17 [i_10]))), ((var_10 ? (arr_17 [i_11]) : (arr_17 [i_10])))));
                    var_24 = var_10;
                    var_25 = (max(-18446744073709551586, ((11666 ? ((16902 ? var_10 : (arr_29 [i_12]))) : ((min(var_16, (arr_33 [i_12]))))))));
                }
            }
        }
    }
    #pragma endscop
}
