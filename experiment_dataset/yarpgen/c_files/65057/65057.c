/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_12;
    var_18 = (min(44567, (max((var_1 * var_1), (var_6 * var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = (!16128);
                var_19 = (max((((46620 ? ((max(-16143, var_3))) : (arr_5 [i_1] [i_1 - 1])))), var_13));
            }
        }
    }
    #pragma endscop
}
