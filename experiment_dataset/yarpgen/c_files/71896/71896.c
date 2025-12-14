/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_12 = (((((((min(var_1, -1))) ? (arr_5 [i_0] [i_0] [i_0]) : -var_7))) ? var_0 : (min((~14525), (188461625 / var_2)))));
                    arr_7 [i_2] [i_1 - 2] [i_0] = (((((((var_3 ? 58601 : var_8)) / var_4))) ? -1 : ((max((min(-22, 28)), -22)))));
                    var_13 = (~27467);
                }
            }
        }
    }
    var_14 &= 7933732879766170892;
    var_15 = ((var_9 / (max(var_6, ((var_5 ? 1 : var_0))))));
    var_16 += var_0;
    var_17 = (((~(max(var_0, 7036)))));
    #pragma endscop
}
