/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_18 |= (max(0, 9223372036854775807));
                var_19 = (max(var_19, (((((max(141, 0))) ? (min((max((arr_0 [i_0]), var_0)), ((214 ? -6952774099744920685 : 63)))) : (max((((arr_1 [i_0]) ? var_9 : 2684270976)), (((var_1 ? 44 : 37))))))))));
                var_20 = (((max(((min(var_15, 214))), (max((arr_3 [i_0] [i_0]), var_0)))) >> (max((((0 & (arr_3 [i_0] [i_0])))), (min((arr_1 [i_1]), (arr_2 [21])))))));
            }
        }
    }
    var_21 += (min((max(((min(0, var_13))), (min(var_0, var_17)))), ((min(((1 >> (44 - 16))), ((min(1, 42))))))));
    #pragma endscop
}
