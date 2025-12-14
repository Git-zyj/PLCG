/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_9 ? var_8 : var_2));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_16 = ((+((((arr_1 [i_0]) <= (arr_1 [i_0]))))));
        arr_2 [10] = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_17 = (min((((-(29228 >= var_0)))), ((536870904 % (arr_0 [i_1] [i_1])))));
        var_18 -= (arr_4 [7] [9]);
    }
    #pragma endscop
}
