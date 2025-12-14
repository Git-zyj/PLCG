/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_11 = (min(124, ((((max((arr_0 [i_0]), 130))) * ((max(34, (arr_2 [i_1] [i_1]))))))));
                var_12 -= ((((((!46870) ? 114 : 243))) - (max((-19834 * var_10), (arr_5 [i_0] [i_1 - 1])))));
                var_13 = (((((!102) ? 148769199 : (((arr_5 [i_1] [i_0]) ? (arr_0 [i_0]) : var_9)))) - -119));
                var_14 = ((~((var_0 ? (arr_4 [i_1 - 2] [i_0]) : (arr_4 [i_1 - 1] [i_0])))));
            }
        }
    }
    var_15 = (min(var_15, var_1));
    var_16 -= var_4;
    #pragma endscop
}
