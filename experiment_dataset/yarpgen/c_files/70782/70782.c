/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((min(var_11, var_14))) ? var_12 : ((~(~var_4)))));
    var_20 = (((((var_13 ? var_12 : var_13))) && -var_3));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_21 = ((!(((~(arr_1 [i_0] [i_0]))))));
        arr_2 [i_0] [1] = min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]));
    }
    #pragma endscop
}
