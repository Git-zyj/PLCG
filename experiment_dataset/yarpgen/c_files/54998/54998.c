/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (max((52623 && -1036), var_10));
        var_14 = (min(347, 18953));
    }
    var_15 = (var_4 + var_0);
    var_16 = (((((-18946 ? (var_12 / 18935) : var_4))) ? var_6 : (1 + -13129)));
    #pragma endscop
}
