/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_11 = (min((((arr_2 [i_0]) ? (arr_1 [i_0] [i_0]) : -61)), (max(61, (~0)))));
        var_12 = ((~(((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            {
                var_13 = (arr_3 [i_1]);
                var_14 = (((((arr_0 [i_2]) && var_2)) ? (~61) : ((1688615804373256193 ? (min(-1090238918, 81)) : -60))));
            }
        }
    }
    #pragma endscop
}
