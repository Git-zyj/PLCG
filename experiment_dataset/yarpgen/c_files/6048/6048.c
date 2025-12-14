/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    var_10 = 8589934560;
                    var_11 = var_8;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_12 = (!268434944);
                                arr_14 [i_0 - 3] [i_1] [i_2] [i_3 + 1] [i_0] = ((+(((arr_8 [i_2 - 2] [i_1] [i_0 + 2] [i_3]) ? (arr_10 [i_0 - 2] [i_1] [i_0] [i_3] [i_1 + 1] [i_1 + 1] [i_0]) : (arr_10 [i_0 + 1] [0] [i_0] [i_3] [i_1 - 1] [i_3] [i_4])))));
                                var_13 = var_6;
                                var_14 = (268434944 + (arr_10 [i_0 - 1] [i_1] [i_0] [7] [i_3] [i_0] [5]));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 *= var_7;
    var_16 = -6;
    #pragma endscop
}
