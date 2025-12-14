/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (118 >= 65535);

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (((((~62) + 2147483647)) >> (((max(-3909891521, (min(var_5, -28138)))) - 14941926581483743625))));
        var_11 += var_7;
    }
    var_12 = ((var_6 ? 41194 : var_7));
    #pragma endscop
}
