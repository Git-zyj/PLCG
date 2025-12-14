/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    arr_7 [i_1] = ((!(((11 ? var_2 : 11)))));
                    arr_8 [8] |= ((((arr_6 [12]) ? ((((arr_4 [i_0] [i_0] [i_1] [i_2 + 1]) * 11))) : (max(5799108385799895642, var_7)))));
                    arr_9 [i_0 - 1] [i_0 - 1] [i_1] [i_1] = var_3;
                    arr_10 [i_0] [i_0] [i_0] [10] |= (((var_0 ? (arr_6 [10]) : (!5799108385799895644))));
                    var_15 = (((!(((var_8 ? 61938 : 5799108385799895634))))) ? ((11 ? (max(-11, 4234028375)) : 54279)) : ((((var_4 ? var_3 : 39)) >> (((((arr_5 [i_1] [i_1] [i_1] [i_1]) ? var_7 : var_7)) - 545590221995253057)))));
                }
            }
        }
    }
    #pragma endscop
}
