/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_10 = (((((~(arr_4 [i_1 + 2])))) ? (min((arr_4 [i_1 - 4]), var_6)) : (arr_3 [i_1 + 1] [i_1 + 1])));
                    var_11 = (~2215473212);
                    var_12 *= var_8;
                }
            }
        }
    }
    var_13 = var_6;
    var_14 = ((var_2 ? var_3 : -8803));
    #pragma endscop
}
