/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = (max(var_11, (~2305843008676823040)));
        arr_3 [i_0] = var_9;
        var_12 = (max(var_0, (((min(91, (arr_1 [i_0] [i_0])))))));
    }
    var_13 = ((1 > (((var_6 && 6) ? var_4 : (var_7 | -100)))));
    #pragma endscop
}
