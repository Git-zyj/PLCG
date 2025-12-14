/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_1] = (((max((-32767 - 1), var_6))) ? 8838073574831478376 : (arr_2 [i_1] [1]));
                arr_5 [i_0] [i_1] [i_0] = (((((arr_0 [i_1]) == var_8)) ? (((-32767 - 1) ? (arr_0 [i_1]) : (arr_0 [i_0]))) : (arr_0 [i_1])));
                arr_6 [i_0] [i_1] [i_0] = (min((arr_2 [i_1] [i_1]), ((((arr_3 [5] [i_1]) * ((((arr_2 [i_1] [i_1]) != (arr_1 [i_1] [i_0])))))))));
            }
        }
    }
    var_17 -= var_10;
    var_18 -= (max(((var_5 ? -var_11 : (min(22, var_6)))), (min(var_6, (!var_4)))));
    var_19 = (var_15 ? ((var_1 ? ((var_12 ? -1 : var_8)) : var_1)) : var_10);
    #pragma endscop
}
