/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67520
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
                var_14 = (max(var_14, ((min((((!var_10) - (-3 >= 34))), -7)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_12, (~var_13)));
                                arr_14 [i_2] [i_4] [1] = 7578;
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = (min(var_16, ((min(650910380, -1901338454)))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            {
                var_17 ^= ((var_11 ? (114 & -123) : (max((~var_4), (116 > -566702379)))));
                var_18 = (min(var_18, ((((((78 ? 1 : 65527))) ? (min((arr_16 [5]), -92)) : 1)))));
                var_19 = 1;
            }
        }
    }
    #pragma endscop
}
