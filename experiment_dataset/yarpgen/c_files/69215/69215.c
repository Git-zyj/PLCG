/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((((var_3 ? (0 && -2840) : ((var_12 ? var_0 : var_11))))), (min(var_17, var_9))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_20 = (max(var_20, -2840));
        var_21 = ((((min((arr_0 [i_0]), var_1))) >= var_13));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_22 = (((((((((arr_1 [14] [i_1]) ? (arr_4 [i_1]) : 222))) ? var_9 : 1))) && ((((max(var_2, (arr_1 [i_1] [i_1]))))))));
        arr_5 [i_1] = (((arr_3 [i_1]) ? (min(var_10, 6256)) : 49891));
    }
    var_23 = -2840;
    #pragma endscop
}
