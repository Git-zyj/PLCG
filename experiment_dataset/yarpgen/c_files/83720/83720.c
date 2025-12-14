/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [13] = ((((min((arr_4 [i_0] [i_1]), (arr_4 [i_0] [i_1])))) ^ (((arr_4 [i_0] [i_1]) ? (arr_4 [i_0] [i_1]) : 235581078))));
                arr_6 [i_0] = (18099 ? 0 : 4092);
                var_18 = max((25450 > 23405), ((var_17 ? (arr_0 [i_0]) : (arr_3 [i_1]))));
                var_19 = ((((max(1, 25450))) < (((((1 ? (arr_3 [i_0]) : var_0))) ? (((arr_4 [i_0] [i_1]) ? (-2147483647 - 1) : 1)) : (arr_0 [i_0])))));
            }
        }
    }
    var_20 *= ((var_11 ? var_14 : var_4));
    var_21 = (max(var_21, var_2));
    var_22 = var_11;
    #pragma endscop
}
