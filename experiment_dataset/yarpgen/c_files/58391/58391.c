/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((max(var_11, var_6)))) ? var_8 : ((((-58 ? 26700 : var_11)) + (var_0 && var_11)))));
    var_13 = (max((((((var_9 ? 71 : var_3))) ? (20085 && -72) : var_3)), var_8));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] = var_5;
        arr_5 [1] = (((max((var_5 || 4), var_2)) ^ var_7));
    }
    #pragma endscop
}
