/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_8 [i_1] = (((((5141 * (arr_7 [i_0] [3] [20] [20])))) && (((-((11281 ? 235 : -1)))))));
                            var_15 -= 8;
                        }
                    }
                }
                var_16 = ((14943190946834034319 ? (min(-1152921504606846976, 1)) : (~-3269)));
                arr_9 [i_1] = -1;
                var_17 &= -812242755162534378;
            }
        }
    }
    var_18 = (~-8);
    var_19 += ((var_11 ? ((1 ? -2737083617387942067 : 9)) : ((max((~1363776711), (4294967295 & 3946498235))))));
    #pragma endscop
}
