/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_3, var_10));

    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = 24;
        var_13 ^= var_9;
        var_14 *= var_0;
        arr_4 [i_0] [20] = (var_7 ? (~var_6) : ((~(max(var_8, 1676915413)))));
    }
    var_15 &= (~-124);
    var_16 ^= -2794610220404423389;
    #pragma endscop
}
