/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((!((min(var_9, -1815923676))))) ? var_12 : var_11));
    var_21 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_22 = (min(var_22, ((((max((((arr_2 [i_0 - 4] [9]) >> (((arr_4 [i_0]) - 2126412889089467479)))), (arr_1 [i_0 + 1]))) * (min(((min(-11456, 1))), (arr_2 [i_1 - 2] [i_0 + 1]))))))));
                var_23 = (max(var_23, ((min(((max((((333030679 ? (arr_0 [1] [i_1]) : 1))), (min((arr_3 [i_0 - 4] [i_1] [i_0 - 4]), (arr_5 [i_0])))))), (((((min((arr_0 [i_0] [i_1]), 1)))) * (((arr_2 [i_1] [i_0]) ? 1 : (arr_4 [i_0]))))))))));
            }
        }
    }
    #pragma endscop
}
