/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_17 = (min(((((~524287) || 1))), (var_11 | -2509397145623280623)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_1] = (min(-4735854742090262651, (((((min(-34840805, (arr_0 [i_0])))) || (var_15 || 1))))));
                    arr_10 [i_0] [i_1] [i_1] = (((var_6 && var_2) ? 2509397145623280638 : ((((!36600) ? (arr_4 [i_1] [i_1] [i_1]) : ((min(var_12, var_12))))))));
                }
            }
        }
    }
    var_18 = (max(var_18, ((((49817 ? ((var_1 ? var_13 : 49812)) : (((max(36600, var_14))))))))));
    var_19 = var_4;
    var_20 = var_7;
    var_21 = var_1;
    #pragma endscop
}
