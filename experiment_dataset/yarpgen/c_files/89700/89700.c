/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_19 != ((var_15 ? ((min(2126055123, 2126055137))) : var_8))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_2] [i_2] = (183 / ((121 ? (arr_6 [i_0] [i_2 + 3] [i_2 + 3] [i_0]) : (arr_6 [i_0] [i_2 - 1] [i_1] [i_0]))));
                    arr_11 [i_0] [i_1] [i_2 + 2] = -2126055144;
                }
            }
        }
    }
    #pragma endscop
}
