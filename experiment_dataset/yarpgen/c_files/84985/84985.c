/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [1] = (max((arr_1 [i_0]), ((((~1061067512) != var_6)))));
        arr_4 [i_0] [5] |= (max(3233899785, 255));
    }
    var_12 = var_6;
    var_13 = ((~((62 * ((var_2 ? var_4 : var_7))))));
    #pragma endscop
}
