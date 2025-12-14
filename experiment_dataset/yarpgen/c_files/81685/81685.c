/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (((((var_12 >= (((var_8 ? var_0 : var_7))))) ? (((((1 ? var_0 : -8))) / 9223372036854775807)) : -var_3)))));
    var_18 = (((((((66 != 181) >= -253)))) != var_5));
    var_19 = ((var_1 - (((((var_14 ? var_15 : var_16))) ? var_0 : -6082861460918863826))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, (((!((min(((max(var_0, var_2))), -8))))))));
                    var_21 = (((arr_0 [i_0] [i_1]) & ((((arr_1 [i_0] [i_1 + 1]) ? (arr_0 [i_0] [i_2]) : 54)))));
                }
            }
        }
    }
    #pragma endscop
}
