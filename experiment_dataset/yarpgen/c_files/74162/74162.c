/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((!var_8) ? var_7 : ((5 ? ((var_6 << (127 - 103))) : (~var_0)))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_13 *= (((arr_0 [i_0]) ? (min(-4294967293, (max(var_6, 4)))) : (((min(250, 5))))));
        arr_4 [i_0] = -43;
        arr_5 [i_0] [i_0] = 1;
    }
    var_14 = (max(var_0, (min(var_6, (((5 ? 43158 : 123)))))));
    #pragma endscop
}
