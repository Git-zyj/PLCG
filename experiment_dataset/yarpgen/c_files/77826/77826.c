/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77826
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_17 = (max((+-18858), (max((arr_0 [11] [i_0]), 18842))));
        var_18 *= (18858 & 1133297016);
    }
    var_19 = ((((((var_5 || var_16) ? 225 : (var_6 || var_13)))) ? ((((var_0 || (-5879584919111725815 || 225))))) : var_13));
    #pragma endscop
}
