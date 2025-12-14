/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = min(var_8, (max(64550, ((var_1 ? var_11 : var_12)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = (((min(var_4, (arr_3 [i_0 - 1] [i_0 - 2]))) && (((arr_3 [i_0 - 1] [i_0 - 1]) || (arr_1 [i_0])))));
                var_16 = ((var_11 ? ((((max((arr_5 [i_0] [1]), var_2))) ? (!0) : -10789)) : ((~((var_9 >> (var_10 - 7129)))))));
            }
        }
    }
    var_17 = max(((!((min(-435896734, var_2))))), (((min(-24397, var_6)) == ((min(var_9, (-9223372036854775807 - 1)))))));
    #pragma endscop
}
