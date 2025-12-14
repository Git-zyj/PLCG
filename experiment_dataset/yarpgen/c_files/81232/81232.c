/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += var_5;
    var_13 = ((((!(((46 ? var_10 : var_11))))) ? (((((var_5 ? var_1 : 91))))) : ((var_2 ? var_5 : ((var_10 ? 9223372036854775807 : var_11))))));
    var_14 = ((((((((var_9 ? var_8 : var_5))) ? var_3 : (var_4 < var_7)))) ? var_6 : var_11));
    var_15 = (!var_11);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_16 = (((((((((arr_6 [i_0 - 2] [i_0] [i_0]) ? (arr_3 [i_1] [i_0] [i_1]) : (arr_0 [i_1])))) ? (((arr_5 [i_0] [i_1] [i_2]) ? var_2 : var_11)) : (((1 ? (arr_5 [i_0] [i_0] [i_0]) : var_10)))))) ? ((((arr_0 [9]) ? ((var_2 ? (arr_0 [i_2 + 1]) : 1)) : (arr_1 [i_0] [i_0])))) : (max((arr_1 [i_0 + 2] [i_2 - 1]), 72057593501057024))));
                    arr_7 [i_0] [i_0] = var_3;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_17 *= (min((min((((var_6 ? 1 : 3581084876845761432))), 7888166298773973577)), (arr_11 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_1] [i_0])));
                                arr_13 [0] [i_1] [i_0] [i_1] [i_1] [i_1] [i_1] = ((((((arr_3 [i_4 + 1] [i_0] [i_1]) ? (arr_8 [i_4] [i_0] [i_1] [i_3] [i_3]) : (((arr_12 [i_4 - 1] [i_4 + 1] [i_0] [i_1] [i_0] [i_1] [i_0]) ? var_9 : var_6))))) ? (arr_8 [16] [i_0] [1] [i_0] [i_0]) : (((!var_3) ? ((var_6 ? (arr_4 [i_0] [i_1] [i_0] [i_4 + 2]) : (arr_2 [i_0]))) : (((arr_5 [i_0 - 3] [i_2] [i_2]) ? (arr_4 [i_3] [i_0] [i_0] [i_0]) : (arr_6 [i_3] [i_0] [i_0])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
