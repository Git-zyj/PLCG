/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= (min(var_5, var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_12 = (max(var_12, (((6131536739921303879 ? 162 : 12289680606330232938)))));
                var_13 += (((((((arr_0 [i_0] [i_1 + 1]) ? var_9 : var_7))) ? ((min((arr_2 [i_0]), var_3))) : (max((arr_0 [1] [12]), var_10)))) * (((!(((var_3 ? 12289680606330232962 : var_8)))))));
                var_14 -= (arr_5 [i_0]);
            }
        }
    }
    var_15 = (max(1116353392, var_4));
    var_16 = var_8;
    var_17 = var_8;
    #pragma endscop
}
