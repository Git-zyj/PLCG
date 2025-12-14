/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(((-(33 + 0))), (1 != 1)));
    var_20 = (((((max(var_14, var_13)))) && (1 <= var_8)));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0] = (((max(2147483647, 4964)) * (((min((-9223372036854775807 - 1), 3304))))));
        var_21 = (min(var_21, ((max((arr_2 [0]), (arr_1 [i_0]))))));
    }
    #pragma endscop
}
