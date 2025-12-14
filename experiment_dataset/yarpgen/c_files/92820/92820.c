/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = min((34746 > 0), 42308);
    var_14 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                var_15 = ((1 + (((var_0 < 16242) ? 11656025312768434977 : (-72 <= -77)))));
                arr_4 [i_0] [i_0] = (((((34746 - 1) ? (min(17636533591781667867, -83)) : 4493)) + (((~((min(20, var_3))))))));
                arr_5 [i_0] = ((var_8 ? ((5406 ? (65535 - 36043) : ((min(-5402, var_2))))) : 5406));
                arr_6 [8] [i_0] [i_0] = 65;
            }
        }
    }
    #pragma endscop
}
