/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= (((-80 ? 255 : -859106374)));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (!18014398509481983);
        var_19 = ((-80 ? (((!(((var_7 << (var_5 + 4200456443798076907))))))) : ((~(arr_1 [i_0])))));
    }
    #pragma endscop
}
