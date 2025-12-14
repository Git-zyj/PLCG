/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= -var_13;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_15 = (((arr_2 [i_0]) ? (arr_2 [i_0]) : var_1));
        var_16 = ((var_5 ? (var_9 < 0) : (((((arr_1 [i_0]) + 2147483647)) << (((((arr_1 [i_0]) + 28244)) - 30))))));
    }
    var_17 = (((((4493916820838410374 <= 0) << (9223372036854775807 == var_10)))) ? (min((33554176 || var_9), ((var_2 ? var_11 : var_2)))) : var_8);
    var_18 = ((~(((((780102173 ? 255 : 32767))) ? (((65535 ? var_7 : var_7))) : ((var_5 ? 0 : 17800234837374251048))))));
    #pragma endscop
}
