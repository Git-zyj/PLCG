/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max((((-31057 + 2147483647) << (31070 - 31070))), 0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_14 = (((((((65535 ? (arr_4 [i_0] [i_0] [i_1]) : 924265112))) ? (arr_3 [i_0] [i_1 + 4]) : (((arr_4 [i_1 + 1] [i_0] [i_0]) - var_4)))) % (((((-5001544471847302370 != (arr_2 [i_1]))))))));
                var_15 = (arr_2 [i_1]);
                var_16 ^= var_5;
                arr_5 [i_1] [i_1] = max(((((max(var_5, 8))) ? -2467712668700070572 : ((max((arr_2 [i_0]), 268431360))))), ((-5257086520529953265 / (var_9 - var_5))));
            }
        }
    }
    var_17 = (((((((min(255, var_2))) ? (((54079 ? var_4 : var_1))) : (max(var_0, 21))))) ? ((var_4 ? (var_6 / var_6) : var_4)) : (max(((var_1 ? var_11 : -3530181645282716665)), 11467))));
    #pragma endscop
}
