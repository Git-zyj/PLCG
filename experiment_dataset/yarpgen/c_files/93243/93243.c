/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= -4500445187671290784;
    var_11 = 0;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_12 -= 234;
        arr_4 [i_0] = 4500445187671290783;
        var_13 = -30255;
        var_14 &= 1330044973084772864;
        arr_5 [i_0] = 1;
    }
    #pragma endscop
}
