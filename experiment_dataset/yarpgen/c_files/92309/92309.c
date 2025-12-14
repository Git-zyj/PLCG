/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, ((max((18446744073709551615 && -9225), var_5)))));
    var_12 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_13 = (max(var_13, ((((((var_2 ? (arr_9 [i_0 + 1] [i_1]) : var_2))) ? (102 && 5752799250241198175) : ((min((11046730672957635267 != var_8), (min(102, (arr_2 [i_0] [i_0] [i_1])))))))))));

                            for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
                            {
                                var_14 ^= (~var_2);
                                arr_12 [i_0] [i_0] [7] [i_3 + 2] [16] = ((~((((max(var_3, 5752799250241198178)) != (arr_7 [i_0] [i_2] [i_3 + 3] [i_4]))))));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                            {
                                var_15 = (((arr_5 [i_3 + 2] [i_2 + 3]) ? ((var_8 ? var_0 : var_7)) : ((-(arr_6 [i_2])))));
                                arr_15 [i_5] [i_5] [i_0] [i_2 + 2] [i_0] [i_0] [i_0 + 1] = arr_14 [i_0] [i_1] [i_2] [i_3 + 1] [i_5];
                                arr_16 [i_3 + 1] [i_0] [i_3] = ((~(arr_3 [i_0] [i_3])));
                                var_16 ^= ((0 ? (!1) : 0));
                            }
                            for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                            {
                                var_17 = ((((((arr_14 [i_0] [i_0] [i_0] [i_0 + 1] [i_0]) ? (!var_0) : (((arr_2 [i_0] [i_0] [i_0]) / var_0))))) ? ((102 ? (min(var_7, var_6)) : (max(var_8, var_2)))) : (((-(arr_0 [i_0]))))));
                                arr_19 [i_0 + 1] [i_0] [i_2] [i_0] [i_3] [i_0 + 1] = ((min((((var_0 * (arr_14 [i_2 + 1] [i_2] [i_2] [i_2] [i_2])))), var_2)));
                                var_18 = (min((min((arr_17 [i_0] [i_3 + 1] [i_6] [i_2 + 1]), (arr_17 [i_0] [i_3 - 1] [i_2 + 2] [i_2 + 1]))), ((var_0 != (arr_7 [i_6] [i_2] [16] [i_0])))));
                                var_19 = var_4;
                            }
                        }
                    }
                }
                var_20 = (min(-103, (min(-103, -17432))));
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            {
                                var_21 &= (arr_22 [i_1] [i_8 - 1] [i_8 - 1] [i_0 + 1]);
                                arr_29 [i_0] [i_9] = (min(var_8, (((arr_0 [i_0]) ? (max(var_9, var_6)) : (((arr_26 [i_0] [i_0] [i_0 + 1] [i_0] [i_0]) & var_2))))));
                            }
                        }
                    }
                }
                arr_30 [i_0] [i_0] = ((((max((~5752799250241198175), (((var_1 || (arr_22 [i_0] [i_0 + 1] [i_0] [i_0 + 1]))))))) ? ((max(var_9, (12693944823468353422 > var_0)))) : (arr_2 [i_0] [i_0] [i_0])));
            }
        }
    }
    #pragma endscop
}
