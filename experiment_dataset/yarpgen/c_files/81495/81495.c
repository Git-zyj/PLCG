/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 14246724831540363662;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] [i_0] = (((240 ? (((16 ? var_7 : (arr_3 [i_0] [i_1] [i_0]))) : (arr_4 [i_0] [i_0 + 4] [i_0] [i_0])))));
                    arr_8 [i_0] = (arr_1 [i_2] [i_0]);
                }
            }
        }
    }
    var_17 = ((var_0 ? (((var_3 <= var_10) ? ((245 ? 16 : 57188)) : var_6)) : (-41 && -7128528472833205646)));
    #pragma endscop
}
