/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_14 = min((max(10965911426431693394, (arr_3 [i_0] [i_0] [i_1 - 1]))), (!var_8));
                var_15 = ((((((10965911426431693394 ? var_12 : var_10)))) ? (((var_10 ^ 7480832647277858221) + var_10)) : (var_13 <= var_4)));
                arr_6 [i_0] [i_0] [i_1] = (((((((arr_4 [i_0]) ? var_3 : var_7))) ? ((var_8 ? (arr_3 [i_0] [i_1] [i_0]) : (arr_1 [i_0] [i_1]))) : ((10965911426431693373 ? var_0 : var_4)))));
            }
        }
    }
    var_16 = ((~(!var_0)));
    #pragma endscop
}
