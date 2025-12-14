/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = var_2;
        var_11 ^= var_5;
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        arr_6 [i_1] = var_5;
        arr_7 [i_1] = var_5;
    }

    for (int i_2 = 3; i_2 < 19;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    arr_17 [i_4] = var_7;
                    var_12 = (min(var_12, var_7));
                    arr_18 [i_4] [i_3] [i_4] = var_8;
                }
            }
        }
        var_13 *= var_8;
        var_14 = var_6;
    }
    var_15 = 4294967295;
    #pragma endscop
}
