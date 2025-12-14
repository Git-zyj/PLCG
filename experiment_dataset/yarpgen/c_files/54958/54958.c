/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_11 = (arr_2 [i_0] [i_0]);
        var_12 = (min(var_7, (((-(arr_2 [i_0] [4]))))));
    }
    #pragma endscop
}
