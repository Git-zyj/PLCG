/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    var_16 = var_6;
    var_17 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = var_2;
                arr_5 [i_0] = var_3;
            }
        }
    }
    var_18 = var_10;
    #pragma endscop
}
