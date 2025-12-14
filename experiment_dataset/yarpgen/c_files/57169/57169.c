/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!1);

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = ((-((-1579121778 ? var_8 : (((31 ? 1 : -923525322)))))));
        var_18 = (!-8879298255525876293);
        var_19 = 2534400264;
    }
    #pragma endscop
}
