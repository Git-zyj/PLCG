/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_19 -= ((var_4 ? var_4 : (arr_1 [i_0] [i_0])));
                var_20 = arr_2 [i_0];
                var_21 = var_9;
            }
        }
    }
    var_22 = var_8;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 21;i_4 += 1)
            {
                {
                    arr_12 [i_2] = arr_5 [i_4];
                    arr_13 [i_2] [i_4] [i_4] [17] = 311761924;
                }
            }
        }
    }
    #pragma endscop
}
