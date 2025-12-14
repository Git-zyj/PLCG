/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_19 = (min(var_19, ((((((!((!(arr_3 [i_1])))))) != (var_1 && var_18))))));
                var_20 = (((((min((arr_4 [i_0] [i_0] [i_0]), (arr_5 [i_0] [i_1] [i_0]))))) ? ((((var_17 != (arr_4 [i_1] [i_0] [i_0]))) ? ((var_5 - (arr_2 [i_0] [i_1]))) : (((var_5 ? var_15 : (arr_4 [i_0] [i_0] [i_0])))))) : var_15));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_10 [i_2] = ((((((!(arr_6 [i_3]))) ? (arr_9 [i_0] [i_0]) : var_5)) ^ ((max(var_13, ((var_14 & (arr_5 [i_0] [i_2] [i_0]))))))));
                            arr_11 [i_3] [i_3] [i_1] [i_3] = (!-var_5);
                        }
                    }
                }
                var_21 *= (-127 - -13096);
                arr_12 [i_0] [i_0] [i_0] = (((max(((var_6 - (arr_2 [i_0] [i_0]))), ((((arr_9 [i_0] [i_1]) >= var_0)))))) ? ((+(((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) * (arr_4 [i_0] [i_0] [i_1]))))) : var_5);
            }
        }
    }
    var_22 = (var_2 != var_6);
    var_23 = ((var_0 >= (max((var_0 != var_13), ((var_13 ? var_1 : var_1))))));
    var_24 = var_1;
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                {
                    arr_22 [i_4] [i_5] [i_4] [i_4] = (((69 & 1) ? ((min((var_17 >= var_16), var_18))) : var_11));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            {
                                arr_30 [i_8] [i_7] [i_6] [i_6] [i_4] [i_4] = var_8;
                                var_25 = ((~(min(((var_5 >> (var_10 - 32120))), var_0))));
                                var_26 = ((~(min(var_15, (max(var_9, var_10))))));
                                arr_31 [i_4] [i_5] [i_6] [i_5] [i_7] [i_5] = var_5;
                                arr_32 [i_4] [i_4] [i_6] [i_7] [i_8] = (min(var_4, (((var_2 + 2147483647) << (var_15 - 1616418490)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
