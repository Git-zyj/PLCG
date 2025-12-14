/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] &= (min(9069681364909778621, 0));
        var_15 = var_6;
    }
    var_16 = ((!((!(((var_13 ? 7839444781468366117 : var_6)))))));
    #pragma endscop
}
