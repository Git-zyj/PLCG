/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= 8177845967591768922;

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = ((((var_8 ? ((min(var_9, var_7))) : ((min(16, 72)))))) ? ((62 ? 13428827135955015733 : (2845064257976411868 / 211))) : (((((min(var_7, var_13))) + var_9))));
        arr_4 [i_0 - 2] [i_0] = (min(var_11, (-4867937591060266214 / 53)));
        var_15 ^= var_9;
        arr_5 [i_0] [i_0] = 172;
    }
    #pragma endscop
}
