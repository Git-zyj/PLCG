/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 2406261392;

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_14 = (!6579);
        var_15 = (min(var_15, (((((((var_12 ? 36027697507336192 : var_4)) >> (((((arr_0 [i_0]) >> (6592 - 6588))) - 146315214)))) << ((((~((6592 ? var_11 : 3508402863)))) - 2961642060)))))));
        arr_2 [i_0] = -935418069;
        var_16 -= (((!((min(-553445949, 1))))));
    }
    for (int i_1 = 3; i_1 < 10;i_1 += 1)
    {
        var_17 = (min(var_17, (((!((!((max(var_3, 6592))))))))));
        var_18 = ((!((min((arr_0 [i_1 - 2]), 16607641959919088918)))));
    }
    #pragma endscop
}
