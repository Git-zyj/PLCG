/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    var_16 ^= (max(128, 2566725804));
    var_17 += ((var_4 ? var_12 : var_7));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1 + 1] [i_2] = 1;
                    var_18 += ((-(arr_5 [i_0 - 2] [i_1 + 2] [i_2])));
                }
            }
        }
    }
    #pragma endscop
}
