/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_10 = (max(var_10, (arr_1 [11])));
        var_11 = (((((((arr_1 [i_0 - 2]) && (arr_0 [i_0 - 1]))))) <= (max(-7148976847571703548, -10725))));
    }
    var_12 |= var_2;
    #pragma endscop
}
