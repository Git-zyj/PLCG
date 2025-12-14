/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_12 = (max(var_12, (~2560323562)));
        arr_2 [i_0] = (1467495716 + 0);
        var_13 |= (((arr_1 [6]) ? ((((max(536739840, var_10))) ? ((var_2 & (arr_0 [i_0] [4]))) : (((arr_1 [4]) ? 48310 : 3537857805)))) : ((((arr_0 [i_0] [0]) ? (arr_0 [i_0] [0]) : 4294967295)))));
    }
    var_14 ^= (var_7 ? (var_11 * var_4) : (max(var_9, var_1)));
    var_15 = (min(var_15, 36038));
    var_16 = (((((0 ? var_0 : var_4))) ? var_5 : (((((158 * 149) || (!var_11)))))));
    #pragma endscop
}
