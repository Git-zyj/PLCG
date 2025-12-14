/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_17 ^= (max(((((((-(arr_11 [i_0] [i_1] [i_2] [i_3] [i_4])))) && (arr_5 [i_0] [i_0 - 1])))), (arr_2 [i_0 - 1])));
                                var_18 = ((((max(((min(var_6, (arr_8 [i_0] [i_1] [i_2])))), (max(var_12, var_3))))) ? (((((min(var_10, var_16))) / (arr_5 [i_0] [i_0])))) : (max((min(var_13, var_4)), (((arr_0 [i_2]) | (arr_9 [i_0] [i_0] [5] [i_0])))))));
                                var_19 = ((((max((~var_10), (((!(arr_10 [i_4] [i_3] [i_2] [i_1] [i_0]))))))) ? ((((!(((var_1 ? var_13 : (arr_1 [i_0] [i_1])))))))) : (min(4294967295, 4294967295))));
                                arr_16 [i_0 - 4] [i_3] [i_1] = ((~(min(var_1, var_5))));
                                var_20 = (max(((var_1 ? (arr_2 [i_0 - 3]) : var_14)), (var_16 & var_15)));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                var_21 = (max(var_21, ((((((!(arr_3 [i_0])))) != (!var_14))))));
                                var_22 = (max(((var_14 ? (arr_14 [i_6] [i_0 - 1] [i_0 + 3]) : var_7)), (1 & 255)));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 24;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 4; i_11 < 23;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 25;i_12 += 1)
                        {
                            {
                                arr_40 [i_9 - 2] [i_10] [i_8] [16] = (max((((var_9 >= (((var_1 != (arr_32 [i_12] [i_10]))))))), ((((!(arr_32 [i_12] [i_9]))) ? var_10 : ((-(arr_28 [i_9] [i_9])))))));
                                var_23 = (min(var_23, (((!(((var_4 * (((128 ? 0 : 1)))))))))));
                                arr_41 [i_10] [i_8] [7] = (((~(var_3 ^ var_6))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 25;i_14 += 1)
                        {
                            {
                                arr_49 [i_13] &= (~-var_6);
                                var_24 = ((~((var_7 ? (var_15 - var_10) : var_6))));
                                var_25 ^= (max(108, -3629663739196134506));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 25;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 25;i_16 += 1)
                        {
                            {
                                var_26 = ((((((!(arr_32 [i_9 - 2] [i_9 - 1]))))) + (~var_11)));
                                var_27 = (min(var_27, ((((arr_52 [i_16] [i_15] [i_15] [i_15] [i_8]) & var_12)))));
                                arr_54 [i_16] [i_9] [i_8] [i_8] [i_8] [i_8] = (max((((!(arr_5 [i_9 + 1] [i_9 + 1])))), var_2));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
