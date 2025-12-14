/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_14 = (((max((arr_0 [i_1 + 1]), ((max(1231772636, (arr_1 [i_0])))))) ^ (((max((arr_5 [1] [i_1]), (arr_3 [i_1] [i_1 + 1] [i_1])))))));
                    var_15 = (min(var_15, ((max(((88 ? (max((arr_2 [i_0] [i_0]), 3063194649)) : (max(-121, (arr_3 [i_0] [8] [10]))))), (((arr_7 [6]) | 655195565)))))));
                }
            }
        }
    }
    var_16 = (((var_10 < 3819536170570782704) / ((((var_9 ? -95 : 226))))));
    #pragma endscop
}
