/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_3, var_1));
    var_20 = ((((max(((min(var_3, var_18))), 2255827972310951935))) ? -var_11 : ((min(2255827972310951947, var_12)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_21 = (max(var_21, (arr_0 [i_0])));
        var_22 = (arr_0 [i_0]);
        var_23 = (arr_1 [i_0]);
    }
    var_24 = max((max((max(var_13, var_2)), var_10)), ((max(((max(var_9, var_5))), var_18))));
    #pragma endscop
}
