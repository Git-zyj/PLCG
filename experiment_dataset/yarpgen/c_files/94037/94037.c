/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((((45519 ? (4 / 251) : 45519))) ? ((((max(21, var_13))) ? ((20007 ? 128 : 20017)) : 20017)) : var_6));
                var_14 = (((~45519) | (~20017)));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_15 = ((((var_5 ? (13571711936568982663 * 14) : ((min(128, 1821833516))))) & 20017));
                            arr_13 [i_0] [i_0] [i_0] [i_2] [i_0] = ((226 ? (((!(~20017)))) : (~var_8)));
                        }
                    }
                }
                var_16 -= var_3;
            }
        }
    }
    var_17 = (((var_4 ? ((45537 ? 45537 : var_8)) : var_13)) << (((((~-25340) ? ((226 ? 2187807613 : 19986)) : -var_1)) - 2187807612)));
    var_18 *= var_1;
    #pragma endscop
}
