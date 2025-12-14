/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_14 = (max(((15 ? 2885853014 : 63)), (1 == 56)));
        arr_2 [i_0 + 2] &= ((+((((min((arr_1 [i_0]), (arr_0 [i_0] [i_0]))) > (max(-33, (arr_1 [i_0 + 2]))))))));
    }
    var_15 += (((((-1 || 1) << (-24 - 204))) - (-var_1 - -171)));
    var_16 |= ((((min(var_8, var_7))) ? ((((((171 ? var_9 : var_3)) <= var_0)))) : (((14680064 ? 18446744073709551615 : 0)))));
    #pragma endscop
}
