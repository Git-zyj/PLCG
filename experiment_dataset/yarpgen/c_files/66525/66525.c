/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;
    var_16 = (((((+(((-127 - 1) * var_13))))) ? (((var_14 / var_5) ? (var_13 / var_4) : (min(159, var_12)))) : 66));
    var_17 = ((194 << (var_7 - 26175)));
    var_18 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                var_19 = ((!((((arr_0 [i_0 - 1] [i_0 - 1]) ? (arr_0 [i_0 - 1] [i_0 - 1]) : (arr_0 [i_1] [i_0 - 1]))))));
                var_20 = (((((((arr_4 [1]) && var_12)) && 1863177823)) ? (arr_5 [i_0]) : (max((((arr_5 [i_1]) ? var_3 : 11532710464047268328)), ((max(2024793854186264846, 28522)))))));
            }
        }
    }
    #pragma endscop
}
