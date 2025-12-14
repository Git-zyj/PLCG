/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_15 = (arr_0 [i_0 - 2] [i_0 - 3]);

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_16 &= var_14;
            var_17 = ((arr_0 [i_0 + 1] [i_0 + 1]) ? var_13 : (arr_0 [12] [12]));
            var_18 = (((arr_2 [i_1] [i_0 + 2]) ? (arr_2 [i_1] [i_0 - 2]) : (arr_2 [i_1] [i_0 + 1])));
        }
        var_19 = ((-(arr_0 [i_0 - 3] [i_0])));
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        var_20 += (min((min(var_10, ((var_6 ? (arr_4 [i_2] [8]) : (arr_6 [i_2]))))), ((min(var_13, (arr_4 [i_2 - 1] [i_2 - 1]))))));
        var_21 = (((((~((25401 | (arr_5 [i_2 - 1])))))) ? ((((min(var_12, var_13))) & ((var_5 | (arr_7 [8]))))) : ((((((arr_7 [i_2]) & var_14))) ? (((arr_5 [i_2]) ? (arr_4 [i_2] [i_2]) : (arr_7 [i_2]))) : ((max(var_3, var_1)))))));
    }
    var_22 = (((max(0, 111))));
    #pragma endscop
}
