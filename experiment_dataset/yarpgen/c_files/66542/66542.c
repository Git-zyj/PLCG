/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_0] [i_0] = (arr_4 [i_2] [i_2] [i_2] [i_2]);
                    arr_7 [i_0] [i_0] [i_0] = 15451000240635596663;
                }
            }
        }
    }
    var_19 = (min((((((-3758010190667117938 ? (-32767 - 1) : var_7))) ? (max(var_5, var_7)) : var_4)), var_1));
    var_20 = ((((min(var_11, var_11)))) ? (min(var_9, (max(16383, var_16)))) : var_5);
    #pragma endscop
}
