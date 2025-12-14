/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(((var_5 << (((2391671583 - 32082) - 2391639493)))), (((~(var_7 != var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [1] [i_1] = (max(((-15125 ? ((-(arr_1 [i_0]))) : (max(var_0, var_3)))), (min((arr_1 [i_1]), 48535))));
                arr_5 [i_0] = (min((((var_15 + (arr_0 [i_0])))), -var_8));
            }
        }
    }
    var_17 |= ((var_14 ? ((max(var_1, (65533 == -1)))) : (-127 - 1)));
    var_18 = (min((-15533 / -525471470), var_3));
    var_19 = -250165834;
    #pragma endscop
}
