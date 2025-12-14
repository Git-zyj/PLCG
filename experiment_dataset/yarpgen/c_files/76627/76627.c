/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76627
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_18;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_21 = (arr_2 [i_0] [i_1] [i_2]);
                    var_22 = (max(var_22, (((-(((arr_3 [i_0 + 2] [i_2 - 2] [i_2 - 1]) * 20523)))))));
                }
            }
        }
    }
    #pragma endscop
}
