/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(((((!var_16) && (~var_13)))), (((((var_3 ? var_14 : var_9))) ? (min(var_5, var_12)) : (!1)))));
    var_19 = (max((min(((var_9 ? var_15 : var_11)), ((max(var_17, 0))))), ((max((!var_16), var_4)))));
    var_20 ^= -var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_21 = (((var_17 + var_12) + (min(((((arr_3 [1] [i_1] [i_0]) * var_7))), ((var_12 + (arr_2 [i_0 + 1])))))));
                var_22 = (((((((6144 && (arr_3 [1] [i_1] [8]))) ? 1 : var_3))) ? (2269814212194729984 + 1) : ((max((((arr_4 [i_0 + 1] [7] [i_1]) ? (arr_4 [i_0 + 1] [i_0] [4]) : -18)), var_6)))));
                var_23 = (((((21056 ? 32767 : var_5) >> (((arr_4 [i_0] [i_0] [i_0]) ? 1 : 1))))));
            }
        }
    }
    #pragma endscop
}
