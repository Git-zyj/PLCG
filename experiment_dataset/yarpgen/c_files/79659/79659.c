/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;
    var_17 = ((~((var_3 ? var_3 : (((var_2 ? 1094287773 : 2651)))))));
    var_18 = 8176;
    var_19 = (((((((min(var_6, var_11))) + -8176))) ? (((max((-8176 <= 10104652293182014521), var_6)))) : ((~(max(var_1, 10104652293182014521))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 10104652293182014515;
        var_20 += ((min((arr_1 [i_0] [i_0]), var_15)));
    }
    #pragma endscop
}
