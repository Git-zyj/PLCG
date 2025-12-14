/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 6;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_17 |= (((((var_12 ? ((var_1 ? var_1 : 107625680)) : var_0))) ? (arr_3 [i_1 + 4] [i_1]) : (((max(255, (arr_5 [i_1 - 2] [i_1 - 2] [i_1 - 3])))))));
                    var_18 ^= ((((max(237, 3716618648))) ? ((((!(arr_4 [i_1 + 2] [i_1 - 3] [i_2 + 2]))))) : ((var_10 ? (arr_1 [i_0] [1]) : ((var_1 ? (arr_4 [5] [i_1] [5]) : 3151638796912229635))))));
                }
            }
        }
    }
    var_19 = var_12;
    var_20 *= var_10;
    #pragma endscop
}
