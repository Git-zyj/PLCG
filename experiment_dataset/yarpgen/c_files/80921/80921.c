/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((379670212 ? var_5 : -var_9))) ? ((((min(var_1, var_16))) ^ (-1030830774281473450 <= var_17))) : var_11));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [1]);
        var_20 -= (arr_1 [i_0]);
        var_21 &= arr_0 [i_0];
        arr_3 [4] [i_0] = 1;
    }
    #pragma endscop
}
