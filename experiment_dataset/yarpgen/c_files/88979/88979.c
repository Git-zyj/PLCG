/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (((arr_2 [i_1 - 2] [i_1 - 1]) > (((arr_2 [i_1 - 2] [i_1 - 1]) ? var_8 : (arr_0 [i_0])))));
                var_14 = (~(max(var_6, var_8)));
                var_15 = ((~(max((arr_2 [i_1] [i_1 + 1]), (58518 | var_1)))));
                arr_6 [i_0] [i_0] [i_0] = var_11;
            }
        }
    }
    var_16 = (((2147483634 % -536870912) ? (min(((min(var_10, 60496))), ((var_13 ? 536870923 : var_8)))) : (max(-var_8, ((max(-6405, var_0)))))));
    var_17 = -var_13;
    var_18 = (!var_5);
    #pragma endscop
}
