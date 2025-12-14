/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_19 = (max(var_19, ((max((((arr_1 [i_0]) >> (194 - 178))), (~194))))));
        var_20 = ((!(arr_1 [i_0])));
        var_21 &= 39;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_22 = (min(var_22, -380));
        var_23 = (max(var_23, ((((!var_14) >= var_18)))));
        var_24 += min(14, 242);
    }
    var_25 *= -2389504248833297354;
    #pragma endscop
}
