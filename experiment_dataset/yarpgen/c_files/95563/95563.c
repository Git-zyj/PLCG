/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_19 += (((((arr_1 [4]) - (arr_13 [i_3 - 1] [i_4]))) - 1));
                                var_20 = (-9223372036854775807 - 1);
                            }
                        }
                    }
                }
                arr_14 [i_0] = ((((1152358554653425664 ? ((247 ? -1152358554653425660 : 1152358554653425660)) : 88)) != ((((5040952840935384169 % 27193) ? 0 : 31)))));
                var_21 += 562949953420288;
            }
        }
    }
    var_22 ^= -22;
    var_23 = (min(var_14, -634143838824405692));
    #pragma endscop
}
