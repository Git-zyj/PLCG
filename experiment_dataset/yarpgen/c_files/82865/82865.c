/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max((min((~var_2), var_9)), ((var_12 ? ((min(2704382611, 1))) : var_9))));
    var_14 = -103;
    var_15 = (max(var_15, (((-1146243098 > 2265160653) * (max((var_9 > var_4), var_12))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                var_16 = ((((39859 ? (arr_0 [i_0 - 3]) : (arr_0 [i_0 - 2]))) >= (arr_0 [i_0 - 1])));
                var_17 = ((-97784082 ? 1282543065262974692 : -84));
            }
        }
    }
    var_18 = (max(var_18, ((-84 ? var_10 : -103))));
    #pragma endscop
}
