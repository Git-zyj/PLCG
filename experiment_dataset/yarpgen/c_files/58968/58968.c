/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-((var_1 ? (var_9 & var_7) : var_1))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_14 = ((((-(arr_3 [i_0])))));
        arr_4 [i_0] = ((((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))) ? (arr_1 [i_0] [i_0]) : var_8));
    }
    #pragma endscop
}
