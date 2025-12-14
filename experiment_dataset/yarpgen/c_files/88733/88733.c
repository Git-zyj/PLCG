/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_10, (((var_13 != -42) & var_12))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_16 = arr_1 [i_0];
        arr_2 [i_0] = (min((arr_1 [i_0]), (arr_0 [i_0])));
        var_17 = (((((((((arr_0 [i_0]) ? 10 : var_5)) == (arr_1 [i_0]))))) ^ (arr_0 [i_0])));
    }
    #pragma endscop
}
