/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 += ((1 != (arr_1 [i_0])));
        var_19 -= var_8;

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_4 [i_1] = -var_7;
            var_20 *= (((((-(arr_0 [10])))) != (var_15 * 33488896)));
            var_21 = (!var_15);
        }
        arr_5 [i_0] = (arr_3 [i_0] [2]);
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        var_22 = (var_1 - (var_5 > var_0));
        var_23 = (min(var_23, var_6));
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        arr_12 [i_3] = (((((((arr_2 [2] [i_3] [i_3]) / var_13)))) > (min((65533 + -26), ((min((arr_9 [i_3]), var_1)))))));
        arr_13 [i_3] [i_3] = (13 | 4261478403);
    }
    var_24 = (549739036672 != -13332);
    #pragma endscop
}
