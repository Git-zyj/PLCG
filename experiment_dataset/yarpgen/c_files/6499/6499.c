/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;
    var_16 = (((var_7 - var_8) ? ((max(var_14, var_4))) : ((6282900666956988234 ? var_0 : ((6731 ? var_9 : 852263821))))));
    var_17 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (((min((max(171, 5947966156616707148)), 2147483647)) <= -23639));
                var_18 = (((!(((6368990223150602154 ? (arr_1 [i_0 - 1] [i_1]) : -8))))) ? (arr_2 [i_1] [1]) : (((-(arr_4 [i_0] [i_0])))));
                arr_6 [10] [8] |= ((((((arr_1 [i_0] [i_1]) - -5625984341546002820)) ^ (((var_9 ? -1613720014 : var_14))))));
                arr_7 [i_0] = var_6;
            }
        }
    }
    #pragma endscop
}
