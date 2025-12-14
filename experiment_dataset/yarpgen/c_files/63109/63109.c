/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= var_2;
    var_16 = var_1;
    var_17 = (max(var_4, var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_18 = (arr_1 [i_0]);
                arr_8 [i_0] [i_1] = (min(31, 3311456917));
                var_19 = ((((((arr_5 [i_1 - 1]) && (((arr_5 [1]) && var_2)))))));
                var_20 = (min(((((arr_6 [i_1 - 2] [i_1] [i_1]) ? (((((arr_3 [7]) || (arr_3 [i_0]))))) : -1))), (min(((min((arr_5 [i_0]), 161))), var_10))));
            }
        }
    }
    #pragma endscop
}
