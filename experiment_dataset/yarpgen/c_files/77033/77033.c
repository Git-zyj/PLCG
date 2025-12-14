/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] = ((((min(var_13, var_4))) ? (((4252604358 <= (((arr_3 [i_1] [i_1]) ? 0 : 4294967278))))) : (((arr_1 [i_0 + 1]) ? var_5 : var_5))));
                var_18 = (((((arr_1 [i_0 - 1]) & (arr_0 [i_0 - 3]))) <= ((max((arr_1 [i_0 - 2]), var_11)))));
            }
        }
    }
    var_19 = (min(var_19, var_6));
    var_20 = (max(var_15, var_14));
    var_21 &= (((((min(0, var_6)) < var_13)) ? var_6 : ((var_3 ? (((var_15 ? var_6 : var_2))) : ((var_3 ? var_0 : var_1))))));
    #pragma endscop
}
