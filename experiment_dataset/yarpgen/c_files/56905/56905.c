/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_1] = ((((max((arr_0 [i_0]), (arr_0 [i_0])))) ? var_7 : ((min((arr_2 [i_1] [i_1]), (arr_1 [i_1]))))));
                var_17 += (max((((((((arr_4 [i_0] [i_1]) ? var_6 : var_6))) & (((arr_0 [i_1]) - 65522))))), (((((arr_0 [i_0]) ? (arr_3 [i_0]) : var_16)) - (arr_4 [i_0] [i_1])))));
            }
        }
    }
    var_18 = (min(var_18, (((20323 ? -1528824607 : -1764122019)))));
    #pragma endscop
}
