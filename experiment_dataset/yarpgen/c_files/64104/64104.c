/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 32767;
    var_14 = var_11;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_15 = ((-120 / (min((((32762 ? 65431 : -1))), (min((arr_2 [i_0]), (arr_3 [i_0])))))));
        var_16 = ((-(~var_1)));
        var_17 = (max((arr_0 [i_0]), ((max((arr_1 [i_0]), 1597539058)))));
        var_18 = var_6;
        var_19 = ((105 ? (min((((arr_3 [i_0]) - (arr_2 [i_0]))), 142)) : -23374));
    }
    var_20 = (var_5 ? (((((min(var_11, -2412))) ? (~var_7) : (((max(-2436, 221))))))) : -var_12);
    #pragma endscop
}
