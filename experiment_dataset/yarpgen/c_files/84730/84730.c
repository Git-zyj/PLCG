/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (!-3977830413072153852);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_16 = (arr_9 [i_0 + 3] [i_1] [i_1] [12]);
                    arr_10 [i_2] [i_0] [i_1] = ((~(arr_1 [i_0])));
                    arr_11 [i_0 + 1] [i_0 + 1] [i_2] [i_0] = (~(min(50154, 1073725440)));
                    var_17 -= ((-450524044376094402 ? ((((((arr_1 [i_1]) ? (arr_2 [1]) : (arr_5 [i_0] [1])))) ? 0 : ((0 ? -3630740038640443462 : 65535)))) : ((((min(553550967968443026, 3958624254))) ? -5545685646942291367 : (arr_9 [i_0] [i_1] [i_2] [i_2])))));
                }
            }
        }
    }
    var_18 *= var_12;
    #pragma endscop
}
