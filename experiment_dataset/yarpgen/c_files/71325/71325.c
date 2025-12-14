/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (((-(((((16224785719031344243 >> (var_9 - 2768888239)))) ? (var_4 | var_12) : var_6)))))));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_16 = ((3897706522715575828 ? (16224785719031344250 == 1073741823) : (2221958354678207366 * 21)));
        var_17 = (((var_0 - 2211817737) ? (!4294967280) : (((2639741775 >> (3726408184 - 3726408159))))));
        var_18 = ((-(((((~(arr_1 [i_0] [i_0])))) ? (arr_1 [i_0 - 1] [i_0 + 2]) : (2062372164 / 3897706522715575822)))));
    }
    var_19 -= (2062372163 & ((-(max(var_5, var_4)))));
    #pragma endscop
}
