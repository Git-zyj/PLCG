/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max(2251896381, (((((2043070915 ? var_10 : var_0))) ? (((arr_1 [i_0]) / 2048)) : (((var_2 >> (((arr_0 [i_0]) - 59)))))))));
        arr_3 [i_0] = (((min((arr_1 [i_0]), (arr_1 [i_0]))) ? 206 : (arr_1 [i_0])));
    }
    #pragma endscop
}
