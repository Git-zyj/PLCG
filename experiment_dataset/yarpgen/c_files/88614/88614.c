/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_9 [i_0 - 4] [i_0 - 4] [i_0] [3] = var_3;
                            var_10 ^= (12 ? var_2 : (((-var_7 | (!var_1)))));
                            var_11 = (max(var_11, ((max((arr_5 [i_1] [i_3] [i_3]), 107)))));
                        }
                    }
                }
                arr_10 [i_0] [9] = ((((max(496, -496))) ? (arr_1 [i_0] [i_0]) : ((min(var_3, (arr_5 [i_0] [i_0] [i_0]))))));
                var_12 = (arr_7 [i_0 + 1] [i_0] [i_0 + 1] [5] [i_1]);
            }
        }
    }
    var_13 = max(var_4, (((496 >= -497) ? -255 : (~var_4))));
    #pragma endscop
}
