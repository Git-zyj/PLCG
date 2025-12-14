/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((~(0 * 32767))));
    var_21 = (min(var_21, (-24099 || 576460202547609600)));
    var_22 = (~var_19);

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_23 ^= (32761 + 32767);
        arr_4 [i_0] [2] = ((((max(-var_8, 12618))) ? ((max((max(32756, 32767)), 65532))) : (-7682556429048548300 && 1)));
    }
    #pragma endscop
}
