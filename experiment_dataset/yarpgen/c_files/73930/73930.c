/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, var_1));
    var_20 = (var_7 ? ((((-3177214292776822162 ? var_11 : var_0)) >> (var_16 - 7237210319122693738))) : (!var_5));
    var_21 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_22 = (max(var_22, (max((var_15 / -2441768505198180897), (((-(!9223372036854775807))))))));
                var_23 = (max(var_23, ((var_7 ? (((((-9223372036854775807 - 1) | (arr_1 [i_0] [2]))) ^ (arr_0 [5]))) : ((~(arr_3 [i_1])))))));
                var_24 = (max(var_24, (((((((arr_3 [i_1]) <= var_14)))) & var_13))));
                arr_4 [i_0] [i_1] [i_0] = (536870911 ? 9223372036854775807 : (arr_1 [i_0] [i_1]));
                arr_5 [i_0] = min(var_3, var_1);
            }
        }
    }
    #pragma endscop
}
