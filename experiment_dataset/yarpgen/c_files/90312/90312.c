/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_17 = ((1339716149 ? 2955251142 : 1358153102));
        var_18 = (((((10 << (-1358153108 + 1358153119)))) <= 6937406526301936428));
        var_19 = (max(var_19, ((((min(var_1, var_3)) ^ (((var_11 ? var_14 : 1339716149))))))));
    }
    var_20 = (max(var_20, (((min(1339716149, 2955251147))))));
    var_21 = (min(var_21, var_9));
    #pragma endscop
}
