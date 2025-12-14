/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_2] [i_2] = arr_8 [i_0];
                            arr_12 [i_3] [i_2] [i_2] [1] = ((var_2 ? (arr_6 [i_3 - 1] [i_1] [i_2] [i_3]) : ((-(arr_9 [i_3] [i_0] [9] [9] [0] [i_0])))));
                            arr_13 [i_3] [i_2] [i_2] [i_1] [i_2] [i_0] = (max(16383, (((((8236 ? 0 : var_10))) ? (arr_1 [i_0]) : (!-27552)))));
                            var_16 = (min(var_16, ((min((((var_14 > var_7) % (arr_9 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3] [i_3 - 1] [i_2]))), ((+((var_0 ? (arr_7 [i_0] [i_1] [13] [i_3]) : var_0)))))))));

                            for (int i_4 = 0; i_4 < 14;i_4 += 1)
                            {
                                arr_18 [i_1] [i_4] [i_1] &= var_12;
                                arr_19 [i_2] = (((((-var_0 ? var_10 : (!var_10)))) ? 26742 : (((((var_1 ? var_8 : 14849))) ? -var_12 : var_10))));
                                arr_20 [i_2] [i_1] [i_2] [i_3] [i_4] [i_1] = (((((0 ? (-9223372036854775807 - 1) : var_8)) > -9223372036854775792)));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 14;i_5 += 1)
                            {
                                var_17 = (((((var_0 ? -28784 : var_10))) ? 5431466775008866363 : ((var_6 ? 1838191096369012761 : var_3))));
                                var_18 = (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [3]);
                                arr_25 [i_0] [i_1] [i_1] [i_2] [i_3] [i_5] = (((arr_7 [6] [i_3 + 1] [i_2] [i_3 - 1]) != (var_5 >= 9223372036854775807)));
                            }
                            for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                            {
                                var_19 = (max(var_19, (-9223372036854775807 - 1)));
                                var_20 = ((((var_14 - (~9594842338348677470))) != (((((arr_8 [i_0]) < var_11))))));
                                var_21 = (((var_0 + 2147483647) << (((((((((arr_1 [i_0]) != var_11)) ? -5431466775008866347 : (arr_6 [i_3] [i_3] [i_3 - 1] [i_3 - 1]))) + 5431466775008866350)) - 1))));
                            }
                            for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
                            {
                                var_22 = ((18446744073709551604 ? ((((!var_9) && (253 || var_3)))) : ((var_4 ? 1 : (arr_14 [i_7] [i_3 + 1] [i_2] [i_1] [i_0])))));
                                var_23 = (min(var_23, (((var_4 == -17618) ? 1 : (+-1)))));
                                arr_32 [i_7] [i_2] [i_2] [i_1] = (var_15 > var_6);
                                var_24 *= (arr_28 [i_1] [i_3 - 1] [i_3 - 1] [i_3 - 1]);
                                var_25 = 2;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            {
                                arr_41 [i_9] = ((var_4 ? -76 : ((min((!var_14), var_9)))));
                                arr_42 [i_10] [10] [i_0] = ((min(17635712911566988312, (arr_35 [i_0] [i_0] [i_0] [i_0]))));
                                var_26 = -var_11;
                                var_27 = (((~(arr_29 [i_1] [i_1] [i_1]))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 22;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 22;i_12 += 1)
        {
            {
                arr_49 [i_11] [i_11] [i_12] = (((((+(((arr_47 [i_11]) ? 18446744073709551613 : var_7))))) ? (((~213) ^ var_5)) : (((-81 > (!var_5))))));
                var_28 = ((((arr_46 [i_11] [i_12]) >> (1006442807 - 1006442803))));
            }
        }
    }
    #pragma endscop
}
