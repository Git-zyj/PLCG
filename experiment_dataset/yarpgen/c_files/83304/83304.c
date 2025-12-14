/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (1 ? var_0 : 23);
    var_14 = (((((((min(var_1, var_1))) ? ((var_2 ? var_7 : -5231989146499172008)) : ((var_11 ? var_0 : 2319429074))))) && var_1));
    var_15 = ((((var_12 ? var_3 : var_1))) ? ((1 ? var_0 : var_0)) : (-1 == var_7));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_16 = (max(var_16, ((((arr_0 [i_0]) ? (((arr_3 [i_0] [14] [i_0 + 2]) ? 7108 : (arr_1 [i_0] [i_1]))) : 27)))));
            var_17 = (max(var_17, (arr_3 [i_0] [i_0] [8])));
        }
        arr_5 [i_0 + 1] = ((((((arr_0 [i_0 + 1]) ? var_10 : 1))) ? (((arr_3 [15] [15] [i_0]) ? 5 : var_5)) : var_11));
        arr_6 [i_0 - 1] = ((var_11 ? (arr_2 [i_0 + 2]) : (arr_1 [i_0 + 3] [i_0])));
    }
    var_18 *= (min(var_7, var_7));
    #pragma endscop
}
