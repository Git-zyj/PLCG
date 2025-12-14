/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [7] [i_3] [i_3] [i_0] [i_4] = ((208585838 ? 56964 : 1));
                                var_15 = arr_11 [i_0] [i_1] [14] [14] [i_4] [i_0];
                                var_16 = -56967;
                                arr_15 [i_0] [i_0] [i_0] = ((8561 ? 8550 : 56964));
                            }
                        }
                    }
                    var_17 = (max(56943, (arr_3 [7] [i_0])));
                    var_18 = (max(27922, 56964));
                    arr_16 [i_0] [i_1] [i_0] [i_0] = (~4294967295);
                    arr_17 [1] [i_2 - 1] [i_0] = (~56984);
                }
            }
        }
    }
    var_19 = var_8;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            {
                arr_24 [i_6] [i_5] [i_5] = (arr_19 [i_5]);
                arr_25 [i_6] [i_6] [i_5] = (max(-40441, 7219));
            }
        }
    }
    #pragma endscop
}
