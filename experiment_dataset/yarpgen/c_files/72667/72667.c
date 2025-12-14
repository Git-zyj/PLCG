/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_17 *= -7064;
        arr_4 [i_0] = (arr_2 [i_0]);
    }
    var_18 *= ((((((((var_7 ? 1 : 16942890994617501266))) ? ((max(var_10, var_2))) : (min(16942890994617501266, var_5))))) ? var_2 : (!var_16)));
    #pragma endscop
}
