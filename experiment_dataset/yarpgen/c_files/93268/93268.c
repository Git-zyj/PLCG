/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_14 |= ((((((((-(arr_3 [0])))) ? (arr_6 [i_0] [i_1] [i_0 + 2]) : var_8))) ? (max(((var_9 ? (arr_3 [2]) : (arr_4 [i_0] [i_1]))), (arr_5 [0] [0] [i_0 - 1]))) : -104));
                var_15 = 127;
                arr_7 [i_0] = (max((((((max(var_0, (arr_6 [i_1] [i_1] [i_1]))))) - ((102 ? (arr_5 [i_1] [i_0] [i_0]) : var_8)))), var_2));
                arr_8 [6] |= ((((((var_13 ? 0 : (arr_1 [i_0] [i_1]))))) ? (arr_4 [i_0 + 2] [i_1]) : (min(((57 ? var_12 : var_8)), ((((arr_3 [12]) >= var_11)))))));
            }
        }
    }
    var_16 |= ((var_9 ? ((var_0 ? ((max(var_11, var_12))) : ((var_13 ? var_5 : var_8)))) : ((min(var_3, ((var_1 ? var_0 : 114)))))));
    #pragma endscop
}
