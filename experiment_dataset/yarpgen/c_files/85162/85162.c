/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_19 = ((var_18 ? (((arr_1 [i_0 - 3] [i_0 - 2]) ? (arr_1 [i_0 - 2] [i_0 - 3]) : (arr_1 [i_0 - 2] [i_0 - 2]))) : (((arr_1 [i_0 - 1] [i_0 + 2]) | (arr_1 [i_0 - 1] [i_0 + 2])))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            var_20 = (max(var_20, ((max((((arr_1 [i_0 - 2] [i_0 - 3]) / (arr_3 [i_0] [i_0]))), var_18)))));
                            var_21 = ((((var_13 ? var_13 : var_17)) * ((max(var_10, (arr_5 [i_0 - 3] [i_0 + 1]))))));
                            arr_13 [i_0 - 2] [i_1] [i_1] [i_4] = (max(var_6, (min(((max(var_16, var_2))), (arr_9 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0])))));
                        }
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            var_22 = ((~(((arr_4 [i_2]) ? var_8 : var_12))));
                            var_23 = (((((arr_10 [i_5] [i_0] [i_2] [i_0] [i_0] [i_0]) ? (arr_15 [i_0] [i_0] [i_0 + 1] [i_0 - 3]) : 15))) ? ((max(var_18, (arr_10 [i_0] [i_1] [i_1] [i_2] [i_3] [i_5])))) : (4294967277 < var_4));
                        }
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            arr_19 [i_0 + 1] [i_1] [i_6] [i_2] [i_6] = ((-((-(arr_4 [i_0 + 2])))));
                            var_24 = (((((1 + (arr_1 [i_0 + 1] [i_0 - 2])))) && (((arr_1 [i_0] [i_0 - 2]) && ((((arr_7 [i_2] [i_2] [i_2] [i_3]) ? (arr_1 [i_0] [i_0 + 2]) : var_13)))))));
                        }

                        for (int i_7 = 1; i_7 < 15;i_7 += 1) /* same iter space */
                        {
                            var_25 *= (((~var_9) ? (arr_5 [i_3] [i_2]) : (max((arr_5 [i_1] [i_1]), (arr_5 [i_7] [i_7 + 3])))));
                            var_26 ^= ((var_0 ? var_6 : (((4294967277 ? 8 : 255)))));
                        }
                        for (int i_8 = 1; i_8 < 15;i_8 += 1) /* same iter space */
                        {
                            var_27 ^= ((((var_13 % (arr_22 [i_8] [i_1] [i_2] [i_3] [i_1]))) - ((max(((max(1, var_0))), var_7)))));
                            var_28 = (!var_9);
                        }
                        /* vectorizable */
                        for (int i_9 = 1; i_9 < 15;i_9 += 1) /* same iter space */
                        {
                            var_29 ^= ((-((((arr_0 [i_1]) >= var_1)))));
                            arr_27 [i_9] [i_1] [i_2] [i_2] [i_9 + 3] [i_9 - 1] [i_2] = (arr_7 [i_1] [i_1] [i_2] [i_3]);
                        }

                        /* vectorizable */
                        for (int i_10 = 1; i_10 < 16;i_10 += 1)
                        {
                            arr_31 [i_0 + 1] [i_1] [i_10 + 1] [i_2] [i_2] [i_2] [i_1] = var_3;
                            arr_32 [i_0] [i_0] [i_1] [i_3] [i_3] [i_3] [i_3] = ((((-3523393567380627489 ? var_12 : 9223372036854775790)) == (((4673426198697281520 ? (arr_3 [i_10 + 1] [i_2]) : var_10)))));
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 18;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    {
                        arr_41 [i_11] [i_11] [i_12] [i_12] = (((arr_7 [i_11] [i_0] [i_0 - 2] [i_0 - 2]) ? var_12 : var_7));
                        var_30 = (min(var_30, 129));
                        arr_42 [i_0 - 2] [i_11] [i_12] [i_11] = (max(((var_10 ? (arr_29 [i_0 - 3]) : ((max(var_2, (arr_11 [i_0] [i_11] [i_12] [i_11] [i_12] [i_0] [i_13])))))), (((var_9 == (arr_38 [i_0] [i_0 + 1] [i_12] [i_13]))))));
                    }
                }
            }
        }
    }
    var_31 = (((-var_4 - var_0) * ((((21248 ? var_2 : 129)) - (var_13 == var_8)))));
    var_32 = 129;
    #pragma endscop
}
