/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((242 ? 135 : 162));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] = var_4;
        var_12 = (7451210508166936948 * 1);
        var_13 = var_10;
    }
    #pragma endscop
}
