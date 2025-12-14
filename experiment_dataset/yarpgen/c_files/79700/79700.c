/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (var_9 % var_1)));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = 4294967295;
        arr_3 [i_0] = (((var_0 ? (arr_1 [i_0] [i_0]) : 0)) != var_9);
    }
    var_13 = var_7;
    #pragma endscop
}
