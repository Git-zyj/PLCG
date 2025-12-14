/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-(0 / var_3)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_2] &= 23;
                    var_19 = (min(var_19, var_10));
                }
            }
        }
    }
    var_20 = (((((~((min(27, var_13)))))) - var_15));
    #pragma endscop
}
