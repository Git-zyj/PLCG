/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = ((-(((((max(-7704, var_1))) || ((min(8, 65535))))))));
        arr_3 [i_0] = ((-(max(var_5, 22))));
    }
    var_11 = (max(var_11, ((((((((-9223372036854775807 - 1) ? var_1 : var_8))) ? ((min(11, 8))) : ((max(60162, 65535))))) % ((var_8 ? 1 : 2))))));
    var_12 = var_4;
    #pragma endscop
}
