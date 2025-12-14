/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [10] = (arr_1 [i_0] [i_0]);
        arr_3 [22] = (((arr_1 [1] [i_0]) ? (arr_0 [2] [i_0]) : (5837 | 13)));
    }
    var_16 = 5837;
    #pragma endscop
}
