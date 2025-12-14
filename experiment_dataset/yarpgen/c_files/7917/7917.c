/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_18 = (arr_4 [i_0] [i_0]);
                var_19 = (((((arr_2 [i_0] [i_1]) ? -12165 : var_7))) ? (arr_4 [i_0] [i_1]) : var_14);
            }
        }
    }
    var_20 -= ((((((((var_1 ? var_10 : var_15))) ? (var_4 / var_2) : var_3))) ? ((((var_12 / var_1) || (var_8 != var_3)))) : ((((var_10 ? var_13 : var_6))))));
    var_21 ^= (max((var_7 / var_17), (max(((var_12 ? 12176 : var_0)), (!6855561428299281228)))));
    #pragma endscop
}
