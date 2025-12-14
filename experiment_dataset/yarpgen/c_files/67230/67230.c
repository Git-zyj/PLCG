/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!var_4);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_20 &= ((var_18 ? (arr_0 [i_0 + 2] [i_0 - 1]) : (arr_0 [i_0 + 2] [i_0 - 1])));
        var_21 = (var_14 <= (arr_0 [i_0 + 1] [i_0]));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_22 = (arr_2 [i_1] [10]);
        var_23 = (((arr_3 [i_1] [i_1]) != (!-58)));
        var_24 = ((arr_3 [i_1] [i_1]) != (arr_1 [i_1]));
        arr_4 [i_1] [i_1] |= (((arr_0 [i_1] [i_1]) | 3797918527));
    }
    #pragma endscop
}
