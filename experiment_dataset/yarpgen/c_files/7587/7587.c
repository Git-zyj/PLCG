/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, ((-((((min(var_4, var_2))) ? (((max(194, -3)))) : (min((arr_4 [i_1]), (arr_2 [i_0])))))))));
                    arr_7 [i_0 - 1] [i_1] [0] [i_2] = (min((min((arr_1 [i_0] [i_0 - 3]), (max(var_7, 169)))), (arr_6 [i_2] [i_1] [8])));
                }
            }
        }
    }
    var_14 = (min(var_11, ((-(max(var_4, var_10))))));
    var_15 ^= (((!((min(var_12, var_9))))));
    #pragma endscop
}
