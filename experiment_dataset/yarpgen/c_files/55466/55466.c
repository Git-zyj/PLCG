/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_21 = (((((arr_3 [i_0] [i_1] [i_1]) ? (arr_3 [i_0] [i_1] [i_1]) : (arr_3 [i_0] [i_1] [i_1])))) ? (((arr_3 [i_0] [1] [i_1]) ^ (arr_3 [i_0] [i_0] [i_0]))) : (~var_13));
                var_22 = var_6;
            }
        }
    }
    var_23 = ((((min(var_15, var_13))) ? (((~-3878693453379764338) ? -3878693453379764338 : var_8)) : ((((((var_14 + 2147483647) << (var_18 - 97)))) ? ((3878693453379764343 ? var_18 : 127)) : (10903904574970814624 != var_17)))));
    var_24 = var_16;
    var_25 = ((((((~128) ? -var_4 : (var_12 & var_11)))) ? (((((var_0 ? 369669968 : 1999231969))) / var_15)) : ((((((42229 ? 7055 : var_16))) ? ((max(var_18, var_9))) : ((max(var_2, var_2))))))));
    #pragma endscop
}
