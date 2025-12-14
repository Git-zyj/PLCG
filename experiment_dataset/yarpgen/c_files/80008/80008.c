/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 16;

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_19 = (max(var_19, (!-7699687738757228801)));
        var_20 |= (10 ^ -7699687738757228801);
        arr_3 [i_0] [i_0] = (((--249) - (65535 + 127)));
    }
    #pragma endscop
}
