/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_10, (((max(3660365262, var_2)) + (3660365262 / var_4)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_2] [13] [i_0] = (~var_5);
                    var_14 = ((((!(130 + 3660365259))) ? var_5 : var_4));
                }
            }
        }
    }
    var_15 = var_5;
    var_16 = var_1;
    #pragma endscop
}
