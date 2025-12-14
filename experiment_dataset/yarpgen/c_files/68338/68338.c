/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(((min(65529, 32736))), 980057039));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (max((((((181 ? -3828029933857783636 : 524280))) ? ((~(arr_1 [i_0]))) : 198)), ((~((-(arr_0 [i_0])))))));
        var_14 = 1;
    }
    #pragma endscop
}
