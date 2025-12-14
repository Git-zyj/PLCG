/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                var_13 *= ((!(~3847255795435770812)));
                arr_5 [i_0] [i_0] [7] = (min((~var_6), (max((arr_4 [i_1 - 1] [i_1] [i_1]), (arr_4 [i_1 - 1] [i_1 + 1] [i_1])))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        arr_10 [i_2] = ((!(((var_6 >> (((arr_6 [i_2]) - 5180244437413943730)))))));
        var_14 ^= (arr_9 [16]);
    }
    #pragma endscop
}
