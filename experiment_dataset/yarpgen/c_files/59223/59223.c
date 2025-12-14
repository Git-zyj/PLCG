/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    arr_9 [12] [10] [12] &= (((var_1 % 10670) < var_10));
                    arr_10 [i_0] [i_1] [i_1] = 81;
                    var_11 += (-(arr_2 [i_1 - 1] [i_1 - 1] [i_1 + 2]));
                }
                var_12 = var_3;
            }
        }
    }
    var_13 = (54865 & var_9);
    #pragma endscop
}
