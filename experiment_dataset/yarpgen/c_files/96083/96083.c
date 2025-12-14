/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((min(100, -310909466981184022)), ((min((min(1, var_9)), var_8)))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_13 = ((-28 ? 21 : 310909466981184021));
        var_14 = ((var_4 ? ((245 ? 5711355247542007561 : -598463368)) : ((234 ? 12735388826167544068 : 30))));
    }
    var_15 -= (min(var_11, (min(4294967295, (min(0, 8425892182562163274))))));
    #pragma endscop
}
