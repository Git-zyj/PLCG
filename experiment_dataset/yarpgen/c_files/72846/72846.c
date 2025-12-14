/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 4095;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_18 = (((arr_0 [i_0 + 1]) ^ ((min((((arr_3 [i_0] [i_0] [i_0]) ? var_6 : var_4)), -var_7)))));
                    var_19 = var_3;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            {
                var_20 = (arr_10 [i_3] [i_3]);
                var_21 = (min(var_21, ((((arr_5 [2] [i_3] [i_3]) ? (arr_5 [0] [i_4] [i_4]) : (((arr_8 [i_3]) ? (arr_8 [i_3]) : var_7)))))));
            }
        }
    }
    #pragma endscop
}
