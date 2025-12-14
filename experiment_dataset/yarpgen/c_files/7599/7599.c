/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (!var_1);
    var_17 = (~16511);
    var_18 = (((~var_14) < var_15));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [17] [17] [i_2] [i_2] = ((((((arr_1 [i_1] [i_2]) ? (arr_2 [i_2]) : (arr_5 [7] [i_0] [i_1] [i_0]))) / (((arr_0 [i_0]) & (arr_1 [i_0] [i_0]))))) / (((min(28765, (arr_6 [i_0] [i_0] [i_2]))) - (1988180215 | 0))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((var_10 ? ((2162962116 ? (arr_3 [i_1 - 1] [i_1] [i_1]) : (arr_6 [i_0] [i_0] [i_2]))) : (max(2057001561, 64))));
                    var_19 -= (arr_0 [i_1]);
                }
            }
        }
    }
    var_20 ^= var_2;
    #pragma endscop
}
