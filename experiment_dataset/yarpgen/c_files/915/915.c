/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_11 ^= (((arr_0 [i_0]) ? (((arr_2 [i_0] [i_0]) - (arr_1 [i_0]))) : (arr_1 [i_0])));
        var_12 = -0;
        arr_3 [i_0] [i_0] |= (((var_7 * -6) - (arr_2 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_13 ^= (((arr_6 [i_0] [i_1] [i_2]) ? (arr_4 [i_0] [17] [i_2]) : (arr_6 [i_0] [i_1] [i_0])));
                    var_14 = (((((arr_5 [i_2]) ? (arr_7 [i_2] [i_1] [i_0]) : 1)) * (((((arr_4 [i_0] [i_1] [i_0]) > 37))))));
                    var_15 ^= 3613517067;
                    var_16 = (arr_0 [6]);
                }
            }
        }
    }
    var_17 = ((var_0 ? var_0 : var_4));
    var_18 = var_2;
    var_19 = (max((((var_0 ? var_5 : 5122002136636816305))), (!120)));
    #pragma endscop
}
