/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_15 ^= 24;
                    arr_9 [i_2] = (((arr_5 [i_2] [i_1] [i_0] [i_0]) ? (((arr_3 [i_1 - 1] [i_1 - 1]) ? (arr_3 [i_1 + 2] [i_1 - 1]) : (-1 > 34092))) : (arr_7 [i_0] [i_1 + 1] [i_2])));
                    var_16 = (max(var_16, (((~(10047 >= 185))))));
                }
            }
        }
    }
    var_17 = 73;
    var_18 = (min(-1690796422, 54));
    #pragma endscop
}
