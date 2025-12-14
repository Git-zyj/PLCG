/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((-(min(var_11, var_14))))) ^ var_12));
    var_17 = var_11;

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (((arr_3 [i_0] [i_0]) / (0 ^ 18446744073709551600)));
        arr_5 [i_0] = 3;
        arr_6 [i_0] [i_0] = ((((((((arr_1 [i_0] [i_0]) * var_5)) * -0))) ? (((((var_1 ? var_14 : (arr_2 [i_0])))) * (((arr_1 [i_0] [i_0]) / (arr_0 [i_0]))))) : ((((max(14, 7022)))))));
        arr_7 [i_0] = (arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        arr_10 [i_1] [13] |= var_1;
        arr_11 [i_1] = var_6;

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_14 [i_1] [i_2] = (((((var_11 ? var_14 : 2047))) || ((var_12 || (arr_3 [i_1] [21])))));
            arr_15 [i_1] = (-((-(arr_13 [14]))));
        }
        for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 22;i_6 += 1)
                    {
                        {
                            arr_28 [i_4] [16] [i_4] [i_1] [i_1] = 1715795381;
                            arr_29 [i_1] [i_4] [i_4] [i_5] [i_3] [i_4] = (~12332578128237809768);
                            arr_30 [i_4] = (((arr_8 [i_4]) && (arr_23 [i_1] [i_3 - 1] [i_5] [i_6 - 1])));
                            arr_31 [i_6] [i_1] [i_1] [i_3] = (((arr_3 [i_5] [i_4]) != var_4));
                        }
                    }
                }
            }
            arr_32 [i_3] [22] [i_1] = ((!(((~(arr_1 [i_1] [i_3]))))));
            arr_33 [i_1] [i_3] = (-var_5 + var_5);
            arr_34 [i_3] = var_15;
            arr_35 [i_1] = var_12;
        }
        for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
        {
            arr_38 [i_1] = (((41 <= var_13) ? (arr_36 [i_7 - 1] [i_7 - 1] [i_1]) : (0 ^ 1)));
            arr_39 [i_1] = var_12;
        }
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {
                        arr_49 [i_1] = (((arr_8 [i_10]) ^ (arr_21 [i_1] [i_9] [i_10])));
                        arr_50 [i_1] [i_8] [i_9] = (arr_42 [i_8] [i_8] [i_8] [i_8]);
                        arr_51 [i_1] [i_1] [i_8] [i_8] [i_1] = 168;
                        arr_52 [i_1] [i_8] [i_9] [i_10] = var_15;
                        arr_53 [i_9] [5] = (((arr_26 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) ? var_0 : 1));
                    }
                }
            }
            arr_54 [9] [9] = (((arr_42 [i_1] [i_1] [i_1] [i_1]) ? (arr_42 [i_1] [1] [i_8] [i_8]) : (arr_42 [i_1] [i_8] [i_8] [i_8])));
        }
    }
    #pragma endscop
}
