/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += (((var_15 * (0 / var_10))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [3] [i_1] [i_2] [3] = (arr_1 [i_2 - 1]);
                    arr_9 [i_0] [i_1] [i_2] = ((-(((arr_6 [i_1 + 1] [i_1]) ? var_4 : (-9223372036854775807 - 1)))));
                }
            }
        }
    }
    #pragma endscop
}
