/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_3 + ((-(min(var_3, var_7))))));
    var_18 -= (min(((~((var_5 ? var_1 : var_10)))), var_9));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_19 = ((arr_0 [i_0]) <= ((min((var_9 > 0), var_1))));
        arr_3 [i_0] = 7377767339306095351;
    }
    #pragma endscop
}
