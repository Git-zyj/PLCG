/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_2] [i_2] [i_3] [i_3] [i_1] = (((var_8 ? var_8 : (arr_7 [i_1 + 1] [i_1 + 1]))));
                            arr_11 [i_0] [i_1] [i_0] [i_2] [i_3] = (((((arr_4 [i_3]) >= var_5))));
                            arr_12 [i_0] [i_0] [i_1] [i_2] [i_3] = ((((max((arr_8 [i_2 + 1] [i_2 - 2] [i_1 + 1]), var_14))) ? (~25641) : ((-(arr_8 [i_2 - 2] [i_2 + 1] [i_1 + 1])))));
                            arr_13 [i_0] [i_1] [i_0] [i_0] = (max(((3 ? (arr_9 [i_1 + 1] [1] [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1]) : (arr_9 [i_1 + 1] [i_2 - 2] [i_2] [i_3] [i_3] [i_3]))), var_0));
                        }
                    }
                }
                arr_14 [i_1] [i_0] [i_0] = ((((min(var_10, (arr_6 [i_0] [i_1] [i_1 + 1] [i_1 + 1])))) ? ((((arr_0 [i_1 + 1] [i_0]) >= (arr_0 [i_1 + 1] [i_0])))) : ((min((arr_6 [i_0] [i_0] [i_0] [i_1]), (arr_0 [i_0] [i_1]))))));
            }
        }
    }
    var_18 = var_12;
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            {
                                var_19 ^= (arr_26 [i_7] [i_7] [i_6] [i_7] [i_8]);
                                var_20 -= ((max((!var_6), (max(8081611002475379406, var_12)))));
                                var_21 = (((arr_7 [i_8] [19]) >> (((arr_3 [i_4 + 1]) - 640809123))));
                                var_22 = (arr_4 [i_8]);
                            }
                        }
                    }
                }
                arr_28 [i_4] [i_4] [i_4] = var_12;
                var_23 = (max(var_23, ((min(3458794838, 1)))));
                arr_29 [8] |= var_5;
            }
        }
    }
    var_24 -= ((((min(-var_17, (~var_7)))) ? var_2 : ((((((var_9 ? var_11 : var_2))) ? var_15 : (var_4 >= var_14))))));
    #pragma endscop
}
