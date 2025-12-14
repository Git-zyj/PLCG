/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_9 / var_1);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_14 = 1117734041;
                    arr_7 [i_0] [i_1] [i_0] = (max((((((arr_5 [i_2] [i_1] [i_0] [i_0]) ? 0 : (arr_0 [i_0] [i_1]))) ^ (arr_0 [i_0] [i_1]))), (arr_3 [i_0] [i_0])));
                    var_15 = (min(var_15, var_0));
                }
            }
        }
    }
    #pragma endscop
}
