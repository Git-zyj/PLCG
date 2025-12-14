/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_12 = (min(114, var_5));
        arr_4 [i_0] = ((!(arr_3 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [i_0] = (arr_1 [i_0]);
            arr_8 [i_0] [i_1] = (arr_3 [i_0] [i_1]);
            var_13 = ((((max((arr_2 [i_1] [i_1]), var_10))) ? (arr_3 [i_0] [i_1]) : (((max((arr_5 [i_0] [7]), (!8859512119316627172)))))));
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_12 [i_0] = (((6674857173590962750 ? 1 : (arr_5 [i_2] [i_0]))));
            arr_13 [i_2] [i_0] [i_0] = ((~((((!(arr_3 [i_0] [9]))) ? (arr_3 [i_2] [i_0]) : var_2))));
            arr_14 [i_2] = (min(((((max(32767, 64))) ? (arr_9 [i_0] [i_0] [i_0]) : (min(var_8, -8604258670433831959)))), (arr_1 [i_0])));
        }
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            arr_17 [11] [i_0] [19] = (((((!(arr_1 [i_0]))))) / var_4);
            var_14 = (arr_6 [i_0] [i_3]);

            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                arr_20 [i_0] [i_4] [i_0] = ((((min(var_2, (arr_18 [i_4 - 1] [i_4 - 1] [i_4 - 1])))) ? ((var_2 ? (arr_2 [i_4 - 1] [i_3]) : (arr_2 [i_4 - 1] [i_3]))) : ((~(arr_2 [i_4 - 1] [i_3])))));
                var_15 = (min(4018994693, (arr_16 [i_0])));
            }
            arr_21 [i_0] [i_0] [i_0] = ((~(arr_15 [i_3] [i_3] [i_0])));
            var_16 = ((((var_2 || (arr_3 [i_0] [i_3]))) ? (arr_18 [i_0] [i_3] [i_3]) : (arr_15 [i_3] [i_0] [i_0])));
        }
    }

    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            arr_27 [i_5] [i_6] [11] = (~((var_7 ? (arr_9 [i_5] [i_5] [i_5]) : ((((arr_15 [i_5] [i_6] [i_6]) ? var_8 : var_0))))));
            arr_28 [i_6] = (arr_0 [i_6]);
        }
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {

            for (int i_8 = 4; i_8 < 16;i_8 += 1)
            {
                arr_33 [i_7] [18] = ((!(((var_2 ? ((var_1 ? 32757 : (arr_31 [i_5] [i_7] [i_8] [i_8]))) : (arr_10 [i_8 + 3] [1] [17]))))));
                arr_34 [i_7] = ((((max((arr_15 [i_8 + 2] [i_8 - 1] [i_8]), (arr_15 [i_8 + 2] [i_8 + 3] [i_8])))) > (arr_31 [i_7] [i_8 + 3] [i_8 - 2] [i_8 - 3])));
                var_17 = (((arr_30 [i_8 - 4] [i_8 + 3] [i_8 + 1]) / (max((arr_30 [i_8 - 4] [i_8 + 3] [i_8 + 1]), (arr_30 [i_8 - 4] [i_8 + 3] [i_8 + 1])))));
            }
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        {
                            var_18 = (max((max((arr_6 [i_5] [i_7]), var_2)), (((130 ? 32767 : 56)))));
                            arr_44 [i_5] [i_7] [i_9] [i_7] [i_10] [i_11] = ((51 ? 64 : 1));
                        }
                    }
                }
                arr_45 [i_7] = ((((min((min((arr_42 [i_9] [i_5] [i_7] [18] [i_5]), var_9)), ((var_3 ? var_7 : var_8))))) ? ((((!((var_2 != (arr_16 [i_7]))))))) : (max((max((arr_15 [i_5] [i_5] [i_5]), -85)), var_3))));
                var_19 = ((!((((arr_18 [i_5] [1] [i_9]) ? ((1 ? 61 : var_6)) : var_1)))));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 18;i_13 += 1)
                    {
                        {
                            var_20 -= ((arr_42 [i_5] [i_5] [i_9] [i_12] [i_13 + 1]) ? (((!(((~(arr_5 [i_5] [i_13]))))))) : ((var_7 ? (arr_48 [i_5] [i_13]) : ((min(var_10, (arr_29 [i_5])))))));
                            var_21 |= -5365230417541625640;
                        }
                    }
                }
            }
            var_22 = var_5;
            var_23 += (((-64 ? 65535 : -1238450014621878277)));
        }
        arr_52 [i_5] [i_5] = (arr_49 [i_5] [i_5] [i_5] [i_5] [i_5]);
        arr_53 [i_5] [i_5] = (arr_43 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]);
        var_24 ^= var_9;
    }
    #pragma endscop
}
