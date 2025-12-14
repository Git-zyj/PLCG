/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((max(var_2, var_11)))) ? (((-((var_1 ? var_9 : var_8))))) : (max(((min(1, var_7))), (var_1 << var_8)))));
    var_13 = ((((1 || 16276720218182162296) / ((max(33, 33))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [14] [i_1] = 1;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_2] [i_2] [i_3] = 1;
                            arr_14 [16] [14] [0] [i_3] = ((~(min((arr_9 [i_0] [i_1 - 1] [i_3 + 1] [i_3]), ((((arr_11 [i_0] [i_0] [i_0] [i_0]) & (arr_5 [i_0]))))))));
                            arr_15 [i_1] [i_2] [i_3] |= ((var_0 << (((((arr_11 [i_0] [i_1] [i_2] [i_3 - 1]) ? (arr_3 [i_1 - 1]) : (arr_3 [i_0]))) - 991612151))));
                            arr_16 [i_1 - 1] [i_2] [i_3 - 2] = (arr_1 [18]);
                        }
                    }
                }
                arr_17 [i_0] [4] [i_0] = max((((arr_2 [i_1 - 1] [i_1 - 3]) ? (arr_4 [i_1 - 1] [i_1 - 1]) : var_1)), ((((arr_7 [i_1] [i_0]) ? ((var_2 / (arr_12 [i_0] [i_1 + 1] [i_1] [i_1]))) : (arr_11 [i_1 - 3] [i_1 - 2] [i_1 - 1] [i_1 - 2])))));
                arr_18 [i_0] [i_1] = var_11;
                arr_19 [i_1] [i_1 - 2] [i_0] = 255;
            }
        }
    }
    #pragma endscop
}
