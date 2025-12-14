/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_11));
    var_13 += ((+(((!var_11) * (14 & var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_14 = min(((~((var_4 ? var_7 : (arr_2 [i_1]))))), (((((arr_1 [i_1 + 1]) / (arr_2 [i_0]))) / ((var_3 ? (arr_3 [i_0 - 4] [i_1 + 1] [i_1 + 1]) : (arr_1 [3]))))));
                var_15 |= (~3738913625);
            }
        }
    }
    #pragma endscop
}
