/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((~(max(var_6, var_3))));
    var_13 = var_4;
    var_14 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_15 = (max(var_15, (((max((arr_0 [i_1]), 18297))))));
                var_16 = ((~(((arr_2 [i_0] [i_0 - 1]) - (arr_2 [i_0] [i_0 + 1])))));
                arr_4 [i_0] [i_1] = ((1033665851544940829 != (((min((((!(arr_2 [i_1] [i_0])))), (min(0, 1))))))));
            }
        }
    }
    var_17 = var_2;
    #pragma endscop
}
