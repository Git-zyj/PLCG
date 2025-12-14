/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_4;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_14 += (!var_4);
        var_15 += (((arr_2 [i_0 + 2]) | (!-8192)));
        arr_4 [6] &= (arr_1 [i_0 - 3]);
        var_16 = (max(var_16, (((-(arr_3 [i_0] [i_0 + 1]))))));
    }
    for (int i_1 = 3; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_17 = ((((min((min(var_1, var_8)), (max(-8199, -8164))))) < (max((((arr_7 [i_1] [i_1]) ? var_8 : (arr_2 [i_1]))), var_10))));
        arr_8 [i_1] = (max(8165, ((var_1 ? (arr_2 [i_1]) : (arr_6 [i_1 + 1])))));
        arr_9 [i_1] [i_1] = ((+((((min((arr_0 [i_1] [i_1]), var_10))) / var_5))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_18 = (arr_3 [i_1 - 1] [i_2]);
            var_19 = (((arr_7 [i_1] [i_1 - 2]) & (~var_5)));
        }
        var_20 = (max((arr_0 [i_1] [i_1]), (arr_0 [i_1] [i_1])));
    }
    #pragma endscop
}
