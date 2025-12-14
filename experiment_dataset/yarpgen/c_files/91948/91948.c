/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!-7993149141236545235);
    var_21 = ((!(((((max(-122, var_7))) & ((min(var_12, var_8))))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_22 = 865737191306631900;
        arr_2 [i_0] [i_0] = 46619;
        arr_3 [i_0] [i_0] = var_16;
        var_23 = (arr_1 [i_0] [i_0]);
    }
    #pragma endscop
}
