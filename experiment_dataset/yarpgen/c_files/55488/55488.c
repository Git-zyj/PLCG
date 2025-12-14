/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_3;
    var_12 = (var_10 + (max(var_1, -41205)));
    var_13 = -var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                arr_7 [i_1] = (arr_1 [i_0] [i_1]);
                var_14 = ((~(((((1 ? var_4 : var_4)) == 4)))));
                var_15 = (((((-1282361700 | (arr_0 [i_1 + 1] [i_1 + 1])))) || var_0));
                var_16 ^= (--1282361702);
            }
        }
    }
    var_17 = var_9;
    #pragma endscop
}
