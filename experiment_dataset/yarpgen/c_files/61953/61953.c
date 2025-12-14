/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((min(((13 ? 16168350856227063952 : var_19)), ((min(-1, var_9))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_21 = ((arr_2 [i_0]) ? (min((arr_0 [i_0] [i_0]), 5697252653036472803)) : (arr_2 [i_0]));
                var_22 = (min(var_22, var_14));
                arr_5 [6] [i_1] = ((255 ? (((!(arr_4 [i_0] [i_1] [i_1])))) : -6));
                var_23 = ((+((max(((min((arr_0 [i_0] [4]), -124))), 10)))));
                arr_6 [i_0] = ((((var_17 ? (arr_4 [i_1] [i_0] [10]) : -8))) ? (min(var_16, (arr_4 [i_0] [i_0] [i_1]))) : (min((arr_0 [i_0] [i_1]), (arr_3 [i_0] [i_1] [i_1]))));
            }
        }
    }
    var_24 = ((-((var_8 ? -var_13 : var_18))));
    #pragma endscop
}
