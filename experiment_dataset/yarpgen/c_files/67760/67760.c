/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((max(1552043490, 1552043503))) >= ((30786325577728 ? var_7 : (min(var_1, var_15)))));

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = (((((~1) ? ((((arr_1 [i_0]) == (arr_0 [i_0 - 1] [i_0])))) : (arr_0 [i_0] [i_0]))) & (((4294967295 && 1552043489) ? (1552043503 > var_9) : ((3529293929 ? 1552043523 : 1))))));
        arr_4 [0] = 1;
    }
    var_20 = var_5;
    #pragma endscop
}
