/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_20 += ((!(arr_2 [i_0 + 2] [i_0])));
        var_21 = ((((1321558938 + (((-(arr_1 [0])))))) + (arr_1 [0])));
        var_22 = ((!((min((arr_2 [i_0] [i_0]), (((arr_1 [i_0]) ? (arr_2 [i_0 - 1] [i_0]) : (arr_0 [i_0 + 3] [i_0 + 3]))))))));
    }
    var_23 = (max(var_23, var_19));
    #pragma endscop
}
