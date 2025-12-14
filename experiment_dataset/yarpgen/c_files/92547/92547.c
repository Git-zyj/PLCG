/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = (max((arr_1 [i_0]), (((arr_2 [i_0 - 1]) | 127))));
        arr_4 [i_0] [i_0] = 41;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_9 [i_1] = var_3;
        var_14 = (max(var_14, (arr_2 [i_1])));
        var_15 = var_12;
    }
    var_16 = ((0 ? -127 : (((-119 != 126) ? -80 : ((max(-73, 59)))))));
    var_17 = var_13;
    var_18 = max((((125 == ((max(-63, 126)))))), -127);
    #pragma endscop
}
