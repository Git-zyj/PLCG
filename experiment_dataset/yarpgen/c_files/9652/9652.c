/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_15 = (max(var_0, 36));
        var_16 = 1404032981;
    }
    var_17 = (max(var_17, (((var_11 ? ((var_11 * ((var_11 ? var_11 : 22924)))) : ((min((min(var_8, 28)), var_3))))))));
    var_18 = var_3;
    #pragma endscop
}
