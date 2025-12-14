/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += (var_10 | 6044256746708294396);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_1 - 3] = (max(-11698161617330700215, 9505164690509889044));
                var_12 = (max((max(6748582456378851407, 11698161617330700199)), (((arr_1 [i_1 + 2]) ? var_6 : (arr_1 [i_1 - 2])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_13 = (max(var_13, (arr_2 [i_2])));
                            var_14 = var_0;
                            var_15 = 24;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
