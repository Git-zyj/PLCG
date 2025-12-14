/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_19 = max((((!var_9) && ((max(var_5, var_14))))), ((!(var_0 / var_3))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_9 [i_0] = (((!var_7) & (((!(((var_2 ? (arr_6 [i_0] [i_1] [i_2] [i_3]) : var_14))))))));
                        arr_10 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] = ((-(arr_5 [i_3 + 1] [i_2] [i_2] [i_1])));
                        arr_11 [i_0] [i_1] [i_3 + 1] [i_1] [i_0] [i_1] = 18446744073709551615;
                        arr_12 [i_1] [i_0] [i_0] [i_0] = (((!(arr_5 [i_3] [i_3 - 1] [i_3 - 1] [i_3 + 2]))));
                    }
                }
            }
        }
        var_20 ^= (max(((!(arr_7 [0] [i_0] [i_0] [i_0]))), (arr_6 [i_0] [i_0] [i_0] [i_0])));
        var_21 = (((var_13 & var_16) ? ((~((((arr_4 [i_0]) <= var_12))))) : (arr_4 [i_0])));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    {
                        var_22 = var_15;
                        arr_23 [i_0] [i_0] [i_0] = ((var_16 & (((~((max(17, -24870))))))));
                    }
                }
            }
        }
    }
    for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
    {
        var_23 += -var_17;
        arr_28 [i_7] = (((~(~var_5))));
        var_24 ^= ((arr_15 [4] [i_7]) * (max(1230530667, 9087814195333383854)));
        arr_29 [i_7] |= 1;
        arr_30 [i_7] [i_7] = (((arr_3 [i_7 - 1] [i_7] [i_7 - 1]) / (arr_5 [i_7 - 1] [i_7] [i_7] [i_7])));
    }
    for (int i_8 = 1; i_8 < 1;i_8 += 1) /* same iter space */
    {
        arr_33 [i_8 - 1] = (!var_1);
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 12;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 12;i_10 += 1)
            {
                {
                    var_25 = (max(var_25, var_8));
                    var_26 = ((((var_14 ? var_9 : (arr_2 [i_8] [i_8] [i_10])))));
                }
            }
        }
        arr_39 [i_8] = (((max(var_10, (arr_0 [i_8 - 1]))) - (((~((-(arr_38 [2]))))))));
        var_27 = (max(var_27, ((~(max((~var_8), ((-(arr_2 [i_8] [i_8 - 1] [i_8 - 1])))))))));
    }
    for (int i_11 = 0; i_11 < 21;i_11 += 1)
    {
        var_28 ^= arr_5 [i_11] [i_11] [i_11] [i_11];
        /* LoopNest 3 */
        for (int i_12 = 1; i_12 < 20;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 21;i_13 += 1)
            {
                for (int i_14 = 2; i_14 < 18;i_14 += 1)
                {
                    {
                        arr_52 [i_11] [i_14] [i_13] [i_12] = ((max((arr_19 [i_14 - 2] [i_12 + 1] [i_12] [i_12 + 1]), (arr_19 [i_14 + 3] [i_12 - 1] [i_12] [i_12 + 1]))));
                        var_29 = (max(var_29, (((+(max((arr_3 [i_11] [i_12 - 1] [i_13]), (arr_3 [i_11] [i_12 + 1] [i_11]))))))));
                    }
                }
            }
        }
        var_30 = ((max((max((arr_51 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]), var_10)), var_16)) <= ((-(arr_44 [i_11]))));
    }
    var_31 ^= var_7;
    #pragma endscop
}
