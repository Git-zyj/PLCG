/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_15 ^= max((((arr_1 [i_1]) / 10205)), (((var_12 || (arr_0 [i_0 + 2])))));

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_16 = (min(var_16, ((((((((var_6 ? var_9 : (arr_2 [i_2] [i_1] [i_0])))) ? -var_4 : (((((arr_0 [i_0 - 3]) || var_14)))))) > var_4)))));
                    arr_7 [6] [i_1] [i_2] = (((((max(var_9, var_0)))) || 10719078783346870246));
                    var_17 = ((var_12 ? var_0 : (min(231193402, 1454229107))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    arr_11 [i_3] [i_0 - 3] [i_0 - 2] = ((!(arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 1])));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 22;i_5 += 1)
                        {
                            {
                                arr_16 [i_3] [5] [5] [5] [i_3] [i_4] [24] = (((0 < 1) ? (arr_6 [i_5]) : var_0));
                                arr_17 [i_0 - 2] [i_1 - 1] [i_3] [i_5 + 3] = (arr_2 [7] [7] [i_0]);
                            }
                        }
                    }
                    arr_18 [i_3] [i_3] [22] = var_1;
                    arr_19 [i_3] = var_13;
                }
                arr_20 [i_0 + 3] [i_1] = ((arr_13 [i_0 + 4] [i_0 - 3] [i_0] [i_0 + 3] [i_0 - 3] [i_0 - 1]) / ((-(arr_13 [i_0 + 2] [i_0 + 4] [i_0] [i_0 - 1] [i_0 + 3] [i_0]))));
                var_18 += 1454229107;
            }
        }
    }
    var_19 = var_2;
    var_20 = -var_9;
    var_21 ^= (max(((var_2 ? var_11 : (min(var_11, var_12)))), ((min((0 << var_1), 45999)))));
    #pragma endscop
}
