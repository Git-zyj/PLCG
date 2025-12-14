/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_14 ? var_4 : var_4));
    var_18 -= ((min(var_3, (~1667824388))));
    var_19 ^= (~(((~9223372036854775806) | (var_15 / 4882117531263699644))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_20 = (min(((var_14 ? var_16 : ((var_12 ? -4882117531263699665 : (arr_5 [i_1] [i_1]))))), var_13));
                var_21 *= ((~(((arr_2 [i_1]) ? var_9 : (arr_2 [i_0])))));
            }
        }
    }
    var_22 = var_8;
    #pragma endscop
}
