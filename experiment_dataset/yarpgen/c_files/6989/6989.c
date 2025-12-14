/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((1 ? -61 : var_10)) % 247));

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_15 = (((max((1 * 6696), var_0)) >> (var_8 - 113)));
        arr_3 [i_0] = var_9;
        arr_4 [i_0] = var_12;
        arr_5 [i_0] [i_0 - 1] = var_1;
        var_16 = (max(var_16, var_5));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_17 = 45;
        arr_9 [i_1] = (arr_8 [i_1] [i_1]);
        var_18 = (arr_2 [i_1]);
    }

    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        arr_12 [i_2] = (arr_6 [i_2] [i_2]);
        arr_13 [i_2] = (((max(-4, 118)) << (arr_6 [i_2] [i_2])));
        var_19 = var_9;
        arr_14 [i_2] = (arr_1 [i_2]);
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_20 = var_1;
        arr_19 [i_3] = (min((max((max(-61, 0)), 25)), ((((arr_16 [i_3]) != (arr_0 [i_3]))))));
        arr_20 [12] &= (min(-37, 0));
    }
    var_21 = 3751714411;
    #pragma endscop
}
