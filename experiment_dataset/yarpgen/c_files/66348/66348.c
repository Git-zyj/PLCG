/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_6;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] &= 4167128134;
        arr_4 [i_0] = ((var_7 ? ((((var_8 == var_16) > (0 < 1)))) : ((var_13 ? (arr_1 [i_0]) : var_19))));
        var_21 += ((+((max((arr_1 [i_0]), (arr_1 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    var_22 = ((var_5 ? (max((((4167128143 ? var_17 : 3))), (arr_2 [i_2] [i_1]))) : ((((-29180 ? 3784599766 : 34225520640)) % 2047))));
                    var_23 = (~(max((arr_7 [i_0] [i_2 + 1] [i_2] [1]), (arr_7 [i_0] [i_2 - 2] [i_2] [i_0]))));
                }
            }
        }
        var_24 -= (((((min((arr_0 [i_0]), 4167128134)) * 32)) + ((((((arr_5 [i_0]) / (arr_8 [i_0] [i_0] [8] [5]))))))));
    }
    var_25 = (max(var_25, var_13));
    #pragma endscop
}
