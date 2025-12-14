/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= (max((max(var_6, ((max(var_16, var_0))))), ((max(((min(var_11, var_16))), ((var_14 ? var_10 : var_10)))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_20 |= ((~((var_6 & (arr_6 [i_0] [i_0] [i_0 - 1])))));
                    arr_7 [9] = (arr_2 [i_1] [i_1]);
                }
            }
        }
    }
    #pragma endscop
}
