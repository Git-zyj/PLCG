/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= (var_5 >= var_4);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 ^= (((arr_0 [19]) / (arr_0 [i_0])));
        var_19 = var_9;
        arr_3 [18] [i_0] = (max(-1, var_5));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_20 = ((((((((arr_0 [i_1]) + 2147483647)) >> (142168177 - 142168160)))) ? ((min(67, -24))) : -1));
        arr_6 [i_1] [i_1] = (((var_2 / (arr_5 [0] [i_1]))));
        var_21 = (max(3029178689, ((min(0, 0)))));
    }
    var_22 = (max(var_22, ((max((((var_3 || ((max(var_14, var_8)))))), var_2)))));
    var_23 = (min(var_1, var_3));
    #pragma endscop
}
