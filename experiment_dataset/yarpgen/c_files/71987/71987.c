/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = -304187840;
        var_19 -= ((((((~(arr_1 [i_0]))) ? (-18930 & -18930) : (arr_2 [i_0])))));
        arr_3 [i_0] = (arr_1 [i_0]);
    }
    var_20 = (((2147483647 != var_13) * ((-(max(121, 9223372036854775776))))));
    var_21 = (min(var_21, var_0));
    var_22 &= (var_2 / var_6);
    #pragma endscop
}
