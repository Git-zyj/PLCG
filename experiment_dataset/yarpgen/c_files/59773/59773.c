/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -110;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_12 = (max(var_12, (arr_1 [i_0])));
        var_13 = (max(var_13, ((max(((((arr_0 [i_0]) ? 127 : -107))), (min((((91 ? var_8 : -107))), (arr_1 [i_0]))))))));
        arr_2 [i_0] = 100;
    }
    #pragma endscop
}
