/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -109;
    var_16 = var_1;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_17 = ((-((3688012814 + (arr_1 [i_0])))));
        var_18 = ((-(min(((((arr_1 [i_0]) >= 1))), (arr_2 [i_0])))));
    }
    var_19 += (min(var_14, (((9971 >= (((var_12 || (-127 - 1)))))))));
    var_20 = 104;
    #pragma endscop
}
