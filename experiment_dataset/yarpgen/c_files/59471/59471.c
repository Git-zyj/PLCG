/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_10 ^ (~-2697292551621617850)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_13 ^= var_1;
                            var_14 = (min(var_14, (arr_2 [i_0] [11])));
                        }
                    }
                }
                arr_10 [i_0] [i_0] = var_0;
            }
        }
    }
    var_15 -= ((-1803571863 <= (min(var_6, var_8))));
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            {
                var_16 -= (min(-7439311771851908205, (min(((var_4 ? 8423430539054046444 : 20)), ((min(67108608, -78)))))));
                var_17 -= 2064026722;
                arr_15 [i_4] [i_5] = arr_0 [i_5];
                var_18 = (min(var_18, (arr_3 [i_4 + 2])));
            }
        }
    }
    var_19 = ((((!(var_2 && 127))) ? var_2 : ((var_11 ? ((min(var_3, var_9))) : var_1))));
    #pragma endscop
}
