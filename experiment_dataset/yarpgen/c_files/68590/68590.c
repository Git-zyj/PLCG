/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_3 <= 7993177176080581320);
    var_17 = -1322479060;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_18 = (~4815);
        var_19 = ((var_10 ? 173 : ((44601 ? 1063331322428599049 : (arr_0 [i_0] [i_0])))));
    }
    #pragma endscop
}
