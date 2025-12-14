/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (-8218 ? 1 : 1);
        var_20 = (min((arr_2 [i_0]), (((!(((15 ? 1 : 115))))))));
        var_21 *= (arr_1 [4]);
    }
    var_22 = 10601;
    var_23 = (((((1 ? 17866 : 5600135181604286002))) ? (min(((6964691205210842210 ? var_1 : 127)), var_19)) : (((-1 ? ((155 ? 86 : -2008576698573280495)) : 1)))));
    #pragma endscop
}
