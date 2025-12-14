/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((!((!(var_6 & var_0)))));
    var_11 = var_7;

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((884868024 & var_6) ? (arr_1 [i_0]) : (arr_0 [i_0 - 1] [i_0 + 3]))));
        var_12 ^= (max((((arr_0 [i_0 + 2] [i_0 + 1]) ? (arr_1 [i_0 + 3]) : (arr_0 [i_0 + 1] [i_0 + 3]))), (arr_0 [i_0] [i_0])));
    }
    #pragma endscop
}
