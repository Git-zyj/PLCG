/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((~(var_0 * var_3))));
    var_11 = (1 <= 93);
    var_12 = ((!(((((max(32768, 0))) ? 65535 : 242)))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_13 = (min(var_13, (min(((((((var_3 << (-29164 + 29164)))) ? var_3 : ((var_9 << (var_5 - 17496343)))))), ((0 / ((var_2 ? var_6 : var_5))))))));
        var_14 = var_5;
    }
    var_15 = (min(var_15, var_5));
    #pragma endscop
}
