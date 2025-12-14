/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 0;
    var_18 = min(var_15, ((67108863 - (~var_12))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_19 = (!(((var_8 ? 815351674 : (arr_2 [i_0])))));
        arr_3 [1] [1] = ((-((-(arr_1 [i_0])))));
    }
    var_20 = 1865956376;
    #pragma endscop
}
