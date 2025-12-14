/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((max((var_5 << var_5), (var_8 > var_6)))) ? (max(var_4, var_15)) : (((((var_1 < var_17) && ((min(0, 8354081548092727813)))))))));
    var_19 = (var_1 << var_6);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = (max(((var_13 ? var_1 : ((var_15 ? var_7 : var_4)))), (((var_8 || (((var_6 << (var_0 - 66)))))))));
        var_21 = var_6;
    }
    #pragma endscop
}
