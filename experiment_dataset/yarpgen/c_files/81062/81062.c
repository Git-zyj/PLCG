/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_10 = (min(((var_8 ? (((-2651694827217878347 ? (arr_4 [i_0 - 1] [i_0] [i_0 - 1]) : (arr_4 [i_0] [i_0] [i_1])))) : (arr_0 [i_0] [i_0 + 1]))), (arr_2 [i_0 - 2])));
                arr_7 [i_0 - 2] = var_3;
                var_11 &= max((((((min((arr_0 [i_1] [i_0]), -481128894137852095))) ? (arr_4 [i_0] [i_0 - 2] [i_0 + 1]) : ((((arr_2 [i_1]) < (arr_1 [6] [i_1 + 1]))))))), ((562949953421311 >> (((!(arr_2 [i_0])))))));
            }
        }
    }
    var_12 = ((((((var_1 ? var_0 : var_0))) ? var_5 : ((max(var_1, var_1))))));
    #pragma endscop
}
