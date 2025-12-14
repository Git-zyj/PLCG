/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(((min(var_10, var_8))), var_7));
    var_12 = (max(255, -121));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_13 = var_5;
                var_14 = ((8 & (((arr_0 [i_1 + 1] [i_1 + 1]) / (arr_0 [i_1 + 1] [i_1])))));
                arr_4 [i_0] = (((max((((arr_1 [19] [i_0]) / var_10)), 7)) >= var_1));
                var_15 = ((max((((arr_2 [i_0]) ? (arr_3 [i_0] [i_1]) : (arr_2 [16]))), (arr_0 [i_1] [i_1 - 2]))));
                var_16 = (((((((arr_1 [i_1 - 2] [i_1 + 1]) >= var_2)))) == (max((((~(arr_0 [3] [3])))), (arr_2 [i_1])))));
            }
        }
    }
    #pragma endscop
}
