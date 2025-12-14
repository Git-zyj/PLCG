/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_16 = (max(var_16, ((((arr_0 [i_0]) ? var_13 : var_10)))));
        arr_3 [4] [i_0] = var_0;
        var_17 *= (arr_1 [i_0] [i_0]);
        arr_4 [9] = (6876 || 127);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_1] = (arr_5 [1]);
                    arr_11 [i_0] [3] [i_1] [i_2] = (arr_5 [i_0]);
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
    {
        arr_15 [13] = max((((arr_5 [i_3]) & ((((((arr_8 [i_3] [i_3] [i_3]) + 2147483647)) << (((var_3 + 7496250319424052272) - 23))))))), (arr_8 [i_3] [i_3] [i_3]));

        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                arr_21 [i_3] [i_5] [i_5] [9] = ((var_14 ? ((((var_10 <= (((min(var_8, 0)))))))) : (((min(252, 16299764922226523409)) & (((3104346218 ? var_3 : 8709742891479709778)))))));
                arr_22 [i_3] |= (arr_7 [i_3] [i_3] [2]);
            }
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        arr_29 [i_3] [i_3] [i_3] = ((~(max(((11576 << (-37 + 44))), -127))));
                        arr_30 [i_3] [i_3] &= var_12;
                        var_18 = var_11;
                    }
                }
            }
        }
        var_19 *= (-(max(1793405277, (arr_2 [i_3]))));
    }
    for (int i_8 = 0; i_8 < 20;i_8 += 1)
    {
        var_20 += (((((((arr_32 [i_8]) ? (arr_31 [i_8]) : (arr_32 [i_8]))) << (((arr_32 [i_8]) - 2544033517)))) | (var_13 >= 61909)));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                for (int i_11 = 4; i_11 < 19;i_11 += 1)
                {
                    {
                        arr_43 [i_8] [i_9] [i_9] [i_11] = (((arr_40 [i_11 - 4] [i_11 - 1] [i_11 - 1] [i_11 - 4]) ? ((255 ? 29336 : 1)) : var_13));
                        arr_44 [i_11] [12] [7] [1] [i_8] [i_8] = var_9;

                        for (int i_12 = 2; i_12 < 18;i_12 += 1)
                        {
                            arr_47 [i_8] [i_9] [9] [i_11 - 2] [i_11] = var_9;
                            arr_48 [i_8] [i_9] [i_8] [i_11] [i_11 - 4] [i_11] = var_2;
                        }
                        for (int i_13 = 1; i_13 < 18;i_13 += 1) /* same iter space */
                        {
                            var_21 *= ((!((((-31596 / 3626) * 7)))));
                            arr_51 [i_11] = var_6;
                            arr_52 [i_8] [i_8] [2] [11] [i_11] = 565385666;
                            arr_53 [16] [16] [13] [i_11] = var_15;
                        }
                        for (int i_14 = 1; i_14 < 18;i_14 += 1) /* same iter space */
                        {
                            var_22 = (min(var_22, (arr_45 [i_8] [i_9] [8] [i_8] [i_8])));
                            var_23 -= ((((max(((var_11 << (((arr_35 [i_9] [11]) + 16052)))), var_6))) ? (((((arr_38 [i_9] [i_11] [10]) >= 15833)) ? (arr_34 [i_11 - 2]) : (((var_0 >= (arr_40 [i_8] [i_8] [12] [i_8])))))) : (((8894877122997293510 + 2147483647) << (((var_15 + 37317382) - 28))))));
                            var_24 = (i_11 % 2 == zero) ? (((((((var_11 | (((arr_42 [i_11] [i_11]) ? var_3 : 3144331006)))) + 9223372036854775807)) << (min(((var_8 ? var_13 : var_14)), var_2))))) : (((((((((var_11 | (((arr_42 [i_11] [i_11]) ? var_3 : 3144331006)))) - 9223372036854775807)) + 9223372036854775807)) << (min(((var_8 ? var_13 : var_14)), var_2)))));
                        }
                        var_25 -= ((((min((!var_12), var_10))) ? (((max((arr_54 [i_11 - 3] [i_9] [i_9] [i_11] [i_9] [i_10]), (arr_50 [i_11 - 3] [18] [i_8] [i_11] [i_10] [i_9]))))) : ((-(arr_40 [i_9] [i_9] [i_9] [i_9])))));
                    }
                }
            }
        }
    }
    var_26 = ((var_9 * (((0 ? 0 : -7381994038985153136)))));
    #pragma endscop
}
