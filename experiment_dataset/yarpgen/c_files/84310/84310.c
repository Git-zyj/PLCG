/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, var_12));
    var_17 = ((~(~4294967295)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (~((1892308232 ? -113 : ((94 ? 18446744073709551615 : -11624)))));
                var_18 = var_1;
                arr_6 [i_0] = ((-(((((-(arr_0 [i_0])))) ? ((((arr_2 [i_0]) ? (arr_4 [i_0]) : 1892308232))) : 2499453071236456306))));
                var_19 -= ((((((var_1 ? (arr_1 [i_1]) : 0)))) ? ((~((var_8 ? var_0 : var_2)))) : -var_10));
            }
        }
    }
    var_20 = (~-var_12);
    #pragma endscop
}
