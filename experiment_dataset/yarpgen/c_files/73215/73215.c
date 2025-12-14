/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 18;i_3 += 1)
                {
                    {
                        var_11 = (((arr_8 [i_2] [i_2 - 3] [i_2 - 1] [i_2]) ? -17 : var_7));
                        var_12 = var_2;
                        arr_10 [i_0] [i_1] [i_2] [i_3] = (!138);
                        var_13 = (max(-51, (arr_5 [i_0 - 1])));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                        {
                            arr_14 [i_0] [i_1] [i_0] [i_4] [i_3] = (((((arr_11 [i_2] [i_2 + 2] [i_2 - 3] [i_0] [i_2]) ? (arr_8 [i_1] [i_4] [i_2] [i_3]) : (arr_11 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0] [i_0 - 1]))) != (arr_3 [i_0])));
                            var_14 = (arr_2 [i_0]);
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            var_15 ^= (((0 ? (max((arr_8 [i_0] [i_0 + 1] [i_0] [i_0 - 1]), (arr_5 [i_1]))) : (~251))));
                            var_16 = ((~(((arr_11 [i_2 + 3] [i_2 + 3] [i_2 + 3] [i_0] [i_2 - 2]) ? (((var_10 ? (arr_7 [i_2] [i_0]) : 0))) : (arr_0 [i_3 - 1] [i_0])))));
                            var_17 ^= ((141 ? ((((arr_6 [i_3 - 2] [i_3 - 1] [i_3 - 2] [i_3 - 1]) ? (arr_6 [i_3] [i_3 - 1] [i_3 - 2] [i_3 - 2]) : (arr_6 [i_3] [i_3 - 1] [i_3 - 2] [i_3 - 2])))) : (max(var_5, var_9))));
                            var_18 = (arr_11 [i_3] [i_3 + 2] [i_3 - 2] [i_3] [i_3]);
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            arr_21 [i_0] [i_1] [i_2] [i_2] [i_3 + 2] [i_6] = ((((((!(arr_20 [i_0] [i_0] [i_2 - 1] [i_3] [i_3 - 2] [i_6]))))) + var_4));
                            var_19 = ((~((30 ? var_8 : 253))));
                        }
                    }
                }
            }
        }
        var_20 = ((((max(var_6, (min((arr_3 [i_0]), var_4))))) ? ((((((arr_3 [i_0]) != var_5)) ? (arr_4 [i_0] [i_0 + 1]) : -1239585599))) : (arr_13 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 1])));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 19;i_8 += 1)
            {
                {
                    arr_28 [i_0] = ((!(((~(min(var_8, var_1)))))));
                    var_21 = 11725020569756922128;

                    for (int i_9 = 1; i_9 < 18;i_9 += 1)
                    {
                        var_22 = (i_0 % 2 == 0) ? ((min(((((((arr_11 [i_7] [i_7] [i_9 + 2] [i_0] [i_9 + 1]) + 2147483647)) >> (((arr_2 [i_0]) - 4237216541))))), (max(1, (arr_2 [i_0])))))) : ((min(((((((arr_11 [i_7] [i_7] [i_9 + 2] [i_0] [i_9 + 1]) + 2147483647)) >> (((((arr_2 [i_0]) - 4237216541)) - 3803839453))))), (max(1, (arr_2 [i_0]))))));
                        var_23 = ((9293997713009601411 <= ((((var_0 ? var_9 : 1))))));
                        var_24 = 1;
                    }
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        arr_35 [i_10] = ((-(max((max((arr_16 [i_10] [i_10] [i_10] [i_10]), 0)), ((((arr_6 [i_10] [i_10] [i_10] [i_10]) ? (arr_8 [i_10] [i_10] [i_10] [i_10]) : 1)))))));
        arr_36 [8] [i_10] |= (max((((var_7 < (arr_23 [i_10])))), (((arr_6 [i_10] [i_10] [i_10] [i_10]) + (arr_6 [i_10] [i_10] [i_10] [i_10])))));
    }
    var_25 |= (min(((max(var_9, ((var_9 ? 13313 : 32))))), var_0));
    /* LoopNest 3 */
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        for (int i_12 = 2; i_12 < 14;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 14;i_13 += 1)
            {
                {
                    arr_45 [i_11] = ((((var_10 != ((min((arr_1 [i_11]), var_1))))) ? (arr_22 [i_11] [i_11] [i_11]) : (max(var_8, (max(var_8, var_5))))));
                    var_26 |= ((1 ? (arr_41 [i_11] [i_12 - 2] [i_13]) : var_8));
                }
            }
        }
    }
    #pragma endscop
}
