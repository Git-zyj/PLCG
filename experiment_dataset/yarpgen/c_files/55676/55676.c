/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += ((10398 ? ((var_5 ? ((min(55125, 1))) : ((10411 ? var_5 : 536805376)))) : var_5));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, ((3158123890 + (min((arr_5 [8] [8] [i_2 + 1]), 10410))))));
                    var_20 ^= ((((max((arr_10 [i_2 - 1] [i_2 + 3] [i_2 + 2]), -2734284862614586331))) ? (min((arr_10 [i_2 + 1] [i_2 - 1] [i_2 + 3]), (arr_10 [i_2 + 1] [i_2 - 1] [i_2 + 2]))) : ((((var_13 || (arr_10 [i_2 + 3] [i_2 - 1] [i_2 + 1])))))));
                    arr_11 [10] [i_0] [i_0] [i_0] = ((arr_1 [i_2 + 1]) ? (max((((arr_6 [i_2] [i_0] [0]) ? (arr_10 [i_0] [i_1 + 1] [i_2]) : 3158123906)), ((max((arr_8 [i_0] [i_0] [i_0]), -59))))) : 4181275935);
                }
            }
        }
    }
    #pragma endscop
}
