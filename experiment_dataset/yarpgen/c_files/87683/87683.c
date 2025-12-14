/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_15 += var_0;

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            var_16 = (((((var_5 ? ((var_1 ? (arr_3 [i_1]) : (arr_0 [i_0]))) : -var_4))) ? ((((((arr_4 [i_0]) * var_4)) == 934345314))) : ((min((arr_2 [i_1 + 1] [i_1 + 1]), 1)))));
            arr_6 [i_1] = (max(((~((var_2 ? (arr_1 [10]) : (arr_3 [i_0]))))), var_10));
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_17 = (max(var_17, 1));
            var_18 = (max(var_18, ((((((~(arr_8 [i_2] [i_2] [i_2])))) ? ((min((arr_5 [i_0] [i_0] [1]), (arr_3 [i_2])))) : ((var_3 * (max(491207254784919156, 934345289)))))))));
        }
    }
    var_19 &= var_11;
    #pragma endscop
}
