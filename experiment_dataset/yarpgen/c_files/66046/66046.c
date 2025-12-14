/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_18 = (((+-1) ? (((-((-50 * (arr_4 [i_0] [i_0])))))) : (arr_0 [i_0 + 1])));
                arr_5 [i_0] [i_1 + 3] [i_1] = (((-1020716026 / -564821524) ? (min(15299, (arr_0 [i_1 - 1]))) : ((min(((-1235217464 ? (arr_1 [i_0] [i_0]) : -862228750)), -var_7)))));
            }
        }
    }
    var_19 = ((((((var_1 ? var_16 : var_3)) + var_16)) >= -var_14));
    var_20 = var_4;
    #pragma endscop
}
