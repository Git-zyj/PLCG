/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_10 += (min((arr_1 [i_0] [1]), 65302));
        var_11 = ((((((max(1, 1)) ? -1 : var_8))) ? (max((max(65535, (arr_2 [i_0] [i_0]))), 137438953472)) : (((((max(var_0, (arr_0 [i_0])))) | 234)))));
        var_12 = (min(var_12, (arr_1 [i_0] [i_0])));
    }
    var_13 = var_9;
    #pragma endscop
}
