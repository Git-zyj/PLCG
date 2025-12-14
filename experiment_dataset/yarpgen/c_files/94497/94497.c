/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 48227;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = (min((((arr_2 [i_0]) ? 9223372036854775799 : (arr_2 [i_0]))), ((max((arr_2 [i_0]), (arr_2 [i_0]))))));
        arr_4 [i_0] |= (((((var_9 ? (((arr_1 [i_0]) ? 803854274 : var_12)) : ((((arr_1 [i_0]) + var_12)))))) && (((var_5 ? ((min(17296, 48204))) : (var_9 != 507710946))))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1 - 3] = ((-(((arr_9 [i_0] [i_0] [i_0]) << (var_2 - 118)))));
                                var_15 = ((-((min(-4, 32729)))));
                            }
                        }
                    }
                    var_16 = (max(var_16, (arr_7 [18] [i_1] [i_0])));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                {
                    arr_24 [1] [1] [i_6] = ((((((((var_12 ? var_10 : 32758))) ? ((-2189873972922694472 ? (arr_22 [i_7] [i_7] [i_6 + 1] [18]) : var_2)) : (~-17)))) ? ((98 | ((1 & (arr_8 [8] [i_6 + 2] [i_7] [i_7]))))) : ((((max((arr_7 [i_7] [i_7] [24]), (arr_22 [i_5] [i_5] [i_6] [21])))) | (arr_12 [i_7] [i_6] [i_6 + 1] [i_5] [i_5] [i_5])))));
                    var_17 = (-32766 <= 1);
                    var_18 = (((((((arr_6 [i_5] [i_5]) ? -118183062 : -118183065))) / (((arr_8 [7] [i_6] [i_7] [i_5]) ? 524287 : (arr_1 [i_5]))))));
                }
            }
        }
    }
    #pragma endscop
}
