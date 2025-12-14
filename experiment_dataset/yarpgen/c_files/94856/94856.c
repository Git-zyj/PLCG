/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_17 = var_0;
        var_18 = 3813216461;
        var_19 = (((-(arr_0 [i_0]))));
        var_20 = (max(var_20, ((((arr_2 [i_0] [i_0]) - ((-var_1 + (arr_1 [i_0]))))))));
    }
    var_21 = var_0;
    var_22 *= (max(var_11, (min(var_9, (max(var_1, 1))))));
    #pragma endscop
}
