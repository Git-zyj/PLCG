/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= var_7;
    var_18 = -4402627223179996175;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_1] = (!var_10);
                    arr_9 [i_0 + 3] [i_0] [i_0] [i_1] = ((-9223372036854775802 ? ((-var_16 & (1 & -2241307166581525800))) : (((((var_9 ? (arr_6 [i_0] [i_1] [i_2]) : var_11)))))));
                }
            }
        }
    }
    var_19 = (~-29);
    #pragma endscop
}
