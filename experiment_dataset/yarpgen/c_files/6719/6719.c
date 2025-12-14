/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (((~(max(14, 18446744073709551602)))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_17 *= (((18446744073709551602 ? 18446744073709551602 : 13)) % ((((18446744073709551602 ? 13 : 13)) << ((((18446744073709551601 ? -1 : 20)) - 18446744073709551607)))));
        var_18 = min((~1435647986901816525), (max((18446744073709551605 & 17011096086807735091), (var_2 & 18446744073709551601))));
    }
    #pragma endscop
}
