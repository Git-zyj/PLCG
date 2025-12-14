/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    var_15 = ((-((((var_5 ^ var_3) != ((min(var_12, 0))))))));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_16 = ((7240737813038625097 ? 7240737813038625101 : -215));
        var_17 = ((!(25 ^ 7240737813038625101)));
        var_18 = var_6;
        var_19 = var_2;
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        arr_4 [i_1] = (-16 * 11206006260670926542);
        arr_5 [i_1] = (((-86 != 19) ? (var_2 + 7240737813038625097) : (var_12 & 1)));
    }
    var_20 = ((-(((var_13 < (var_9 != -58))))));
    #pragma endscop
}
