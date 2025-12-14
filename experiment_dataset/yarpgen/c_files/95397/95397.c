/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 254;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_17 *= (max(var_10, -9219));
        arr_4 [i_0] [i_0] = ((var_14 ? (~18446744073709551615) : (var_8 > 196608)));
        var_18 = (max(var_18, 1373583198));
        arr_5 [i_0] = (!4096);
    }
    for (int i_1 = 3; i_1 < 11;i_1 += 1)
    {
        arr_9 [i_1] [i_1] = max((((65528 ? 128 : 0))), var_3);
        arr_10 [i_1] [i_1] = 17773054470221797380;
    }
    #pragma endscop
}
