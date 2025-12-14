/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_1));
    var_20 = (12 ^ 12);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = (~72057593970819072);
        var_22 = (!-1865470700);
        arr_2 [1] = (!(((((min((arr_0 [i_0]), (arr_1 [i_0] [i_0])))) ? 6434407812774595054 : 131071))));
        var_23 |= (min(var_17, (arr_1 [i_0] [i_0])));
        var_24 -= ((-var_18 ? (~6434407812774595056) : var_3));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = (((arr_1 [i_1] [13]) ? (((-22821 && (arr_0 [i_1])))) : (arr_4 [i_1])));
        arr_6 [i_1] = 3796427679;
    }
    #pragma endscop
}
