/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0 + 2] = (max(((min((min((arr_0 [i_0]), 1)), ((min(var_12, 160)))))), (min((min(var_10, var_5)), ((min(-53, 1988100623)))))));
        var_13 = (min(((min(((max(59, 54))), (min(1, 2585174924))))), 18019523520474476052));
        var_14 = (max((max(-10, 2062856225)), (min((max((arr_0 [i_0]), var_0)), (max(1136867573, 11))))));
    }
    var_15 *= (min((min(((min(1, 2062856206))), (min(1, 427220553235075577)))), ((min((max(1, -3)), ((max(1, var_6))))))));
    #pragma endscop
}
