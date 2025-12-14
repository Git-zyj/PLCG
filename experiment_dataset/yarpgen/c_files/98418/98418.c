/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    var_11 = (min(var_4, (~12740006450515846679)));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_12 = ((((min((~-1467307389), (min((arr_1 [i_0] [i_0]), var_7))))) ? (~-736727399) : ((~(arr_1 [i_0] [i_0])))));
        var_13 *= (arr_0 [i_0]);
    }
    var_14 = var_3;
    #pragma endscop
}
