/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_14 = (arr_0 [i_0] [i_0]);
        arr_2 [i_0] [i_0] = 3854811814795211124;
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] = 143;
        var_15 *= (((((((max(1, 4294967295))) || 4294967292))) >> (((min(((min((arr_5 [i_1 - 1] [i_1 - 1]), var_5))), var_3)) - 117))));
    }
    var_16 = (var_6 < var_1);
    var_17 = (min(((min(var_6, ((max(var_4, 1)))))), (max(var_1, (~var_1)))));
    #pragma endscop
}
