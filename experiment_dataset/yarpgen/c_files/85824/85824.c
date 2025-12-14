/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = min((arr_0 [i_0] [i_0]), (((min((arr_1 [i_0] [i_0]), (arr_0 [i_0] [i_0]))) && 1)));
        var_20 = ((-var_12 ? (~var_13) : ((~(arr_0 [i_0] [i_0])))));
        var_21 &= -24;
    }
    var_22 = var_5;
    #pragma endscop
}
