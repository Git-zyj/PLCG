/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_11 |= var_6;
        arr_2 [i_0] = ((var_4 & (min((arr_1 [i_0]), (arr_1 [i_0])))));
    }
    var_12 -= var_6;
    var_13 -= ((!((min(var_8, (!var_2))))));
    #pragma endscop
}
