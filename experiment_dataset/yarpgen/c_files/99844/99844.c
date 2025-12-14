/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= 7;
    var_21 |= (max(var_6, (max((~-12), (~var_5)))));
    var_22 = ((var_16 != ((((((var_8 ? 1 : var_5)) == ((min(-21079, 14129)))))))));
    var_23 *= max(var_8, (max(((11 ? var_8 : var_15)), var_19)));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_24 *= 0;
        var_25 = (max(var_25, var_13));
    }
    #pragma endscop
}
