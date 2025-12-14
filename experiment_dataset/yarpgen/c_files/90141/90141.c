/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_8));

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_21 = ((((((arr_2 [i_0 - 1]) ^ var_3))) ^ (((arr_2 [i_0 - 3]) ? (arr_2 [i_0 + 2]) : 8375565514316110851))));
        arr_3 [5] = (((arr_1 [i_0 - 3]) & var_16));
    }
    #pragma endscop
}
