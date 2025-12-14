/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_10 -= (((var_5 * 2519539068) ? (var_3 == 2519539068) : ((var_3 ? var_0 : -28792))));
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((-(((((var_3 ? 65535 : var_7))) ? (~var_6) : 5950624277658723258))));
                    var_11 = (max((min(-76, (4426801012303945154 * 1780358217))), (((var_6 ? 1 : var_9)))));
                }
            }
        }
    }
    var_12 |= 1775428228;
    var_13 = var_3;
    var_14 = (min(var_14, (((((((~var_5) / (~var_5)))) ? ((min(5085, var_7))) : (min(var_7, 1630886299689696699)))))));
    var_15 |= (min((max((max(var_0, 2012638543414639695)), var_8)), var_2));
    #pragma endscop
}
