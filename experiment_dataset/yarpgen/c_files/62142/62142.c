/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= -var_7;

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_20 = (max((((arr_0 [i_0 + 1] [i_0]) * (arr_1 [i_0]))), ((~(31 + 15423)))));
        var_21 &= -15411;
        var_22 = ((((((((arr_1 [i_0]) ? 1 : (arr_2 [i_0])))) ? ((max(-1, (arr_1 [i_0])))) : (arr_2 [i_0]))) & ((~((~(arr_2 [i_0])))))));
        var_23 = (arr_0 [i_0] [i_0]);
    }
    #pragma endscop
}
