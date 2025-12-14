/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1 - 2] [21] = (9223372036854775806 & 255);
                    var_14 ^= ((var_4 ? ((min(1, (~8192)))) : (min((max(17, 9223372036854775797)), (max(8471171829562673892, 0))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            {
                arr_11 [i_3 - 1] [3] [i_4] = (max(0, 19867));
                var_15 = (min(0, 1));
            }
        }
    }
    var_16 = (min(1, 114));
    var_17 = (min(0, 1641535669));
    var_18 = (max(var_18, (3880319477 < 87)));
    #pragma endscop
}
