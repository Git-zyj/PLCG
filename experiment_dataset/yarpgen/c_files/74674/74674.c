/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_4 ? var_13 : (max((~var_2), (0 & var_1)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] = 9223372036854775807;
                    arr_9 [i_1] [i_1] [i_1] = (min(0, (arr_3 [i_2])));
                }
            }
        }
    }
    var_16 &= var_3;
    var_17 = (((max((~var_13), var_4)) & (~var_1)));
    var_18 = (!var_10);
    #pragma endscop
}
