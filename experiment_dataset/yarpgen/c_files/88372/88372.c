/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((~var_5), (max(-10068380256446756888, var_9))));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_15 = (arr_1 [i_0]);
        arr_2 [i_0] = (((arr_1 [i_0]) ? (arr_0 [i_0 + 1]) : var_5));
    }
    var_16 = (min(var_16, var_7));
    var_17 = ((1 ? 288160007407534080 : 36236));
    var_18 = var_3;
    #pragma endscop
}
