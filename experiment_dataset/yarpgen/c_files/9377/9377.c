/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_12 ^= (max(var_10, (((arr_3 [i_2] [i_2] [i_2]) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
                    arr_6 [i_2] [i_1] [i_2] = (max((max((~4096), ((max((arr_2 [i_2] [i_1] [16]), 61440))))), (max((arr_2 [i_0] [i_0] [i_0]), ((-1 ? 207 : -20123))))));
                    arr_7 [i_2] [i_2] [i_2] [i_0] = (max((arr_4 [i_2] [i_1] [i_1] [i_2]), (max(250, (arr_4 [i_2] [i_1] [i_1] [i_1])))));
                }
            }
        }
    }
    var_13 = (max((var_11 + var_9), (((!(((2216405458807348902 ? 247 : 61449))))))));
    var_14 = 61440;
    var_15 = ((86 ? (max(var_10, var_0)) : var_10));
    #pragma endscop
}
