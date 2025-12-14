/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_8;
    var_20 = ((var_18 | (~0)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                {
                    var_21 -= (max((((((arr_5 [0] [i_0] [8] [i_2 - 3]) & -17)) ^ (((-1143063927 || (arr_5 [i_0] [i_1] [i_0] [i_2])))))), (((arr_5 [i_2 - 1] [i_2 - 4] [i_2] [6]) ? (-2084159974 < -1498286032) : (((arr_6 [i_0]) ? (arr_0 [9]) : (arr_3 [i_2])))))));
                    arr_7 [i_1] = (arr_6 [i_1]);
                }
            }
        }
    }
    #pragma endscop
}
