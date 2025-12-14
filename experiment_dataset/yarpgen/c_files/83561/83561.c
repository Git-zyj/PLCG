/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((min(var_8, (~var_11))), -2147483644));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, ((min((max((min(var_5, var_1)), (arr_3 [i_0]))), var_6)))));
                    var_15 = arr_6 [i_0];
                    var_16 = (max(var_16, ((min((arr_5 [i_1 - 1]), (-32171 || var_12))))));
                    arr_9 [i_2] = (max((arr_1 [i_1 + 2]), 1726));
                }
            }
        }
    }
    var_17 *= (min(9223372036854775807, (min(57586, 1802136075841800264))));
    var_18 = (min(var_18, var_4));
    #pragma endscop
}
