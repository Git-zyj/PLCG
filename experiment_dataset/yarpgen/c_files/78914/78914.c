/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;
    var_12 = (41757 - var_2);

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_13 = ((-(min((arr_0 [i_0]), (arr_2 [i_0])))));
        var_14 = 23778;
        var_15 = ((1 ? ((min((arr_2 [i_0]), var_9))) : (((((~(arr_0 [i_0])))) ? ((var_0 ? (arr_0 [i_0]) : -9360)) : ((min(-21, (arr_0 [i_0]))))))));
    }
    #pragma endscop
}
