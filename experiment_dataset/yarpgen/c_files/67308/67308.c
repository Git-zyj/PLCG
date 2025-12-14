/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (3829869583835915923 % 3829869583835915930);
    var_20 = var_14;
    var_21 += var_6;
    var_22 = (min(var_22, (min(var_4, var_17))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_23 = (max(var_23, (arr_0 [i_0] [i_0])));
        var_24 = (arr_0 [i_0] [i_0]);
    }
    #pragma endscop
}
