/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_1));
    var_11 = (((((((min(var_4, var_6))) ? ((1 ? 1 : 1)) : var_5))) ? var_3 : ((1 ? 12001054321884147326 : 1))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_12 = (((arr_2 [i_0]) / ((min((arr_2 [i_0]), ((min(208, 54))))))));
        arr_3 [i_0] = var_9;
    }
    #pragma endscop
}
