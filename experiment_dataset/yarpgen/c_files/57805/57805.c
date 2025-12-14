/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (~var_13);
        var_17 *= (min((min((((0 >= (arr_0 [i_0])))), (~-18290))), ((var_2 & (!-3537)))));
    }
    var_18 = ((~((((var_11 ? var_9 : -3543))))));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            {
                arr_8 [i_1] [i_1] = ((!((((arr_6 [i_1] [i_1] [5]) >> (39 - 27))))));
                var_19 = (((((!(((0 ? (arr_5 [i_1] [i_2] [i_1]) : 3943816404904315850)))))) >= ((255 ? var_14 : var_4))));
                arr_9 [i_1] [1] [i_1] = (arr_6 [i_1] [i_1] [i_2]);
            }
        }
    }
    #pragma endscop
}
