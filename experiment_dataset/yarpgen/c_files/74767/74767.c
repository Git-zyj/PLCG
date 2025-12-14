/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_7));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_14 -= 2;
        var_15 = (max((-4294967291 % 207), (((!((max(30427, var_7))))))));
    }
    var_16 = min((((4294967270 ? var_5 : 2969))), var_10);
    var_17 *= (((max(2969, 632568971360838603)) & var_12));
    var_18 = var_5;
    #pragma endscop
}
