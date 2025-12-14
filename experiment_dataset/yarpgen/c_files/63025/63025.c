/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (-(max((var_6 == 30840), -var_8)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = ((-((min((arr_0 [i_0]), (arr_0 [i_0]))))));
        var_20 = -21;
        var_21 |= (((((arr_1 [10]) ? (arr_1 [4]) : 50)) > ((min((arr_1 [6]), (!0))))));
        var_22 = (min(23, 32767));
    }
    #pragma endscop
}
