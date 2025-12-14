/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_19 -= (min(((((((arr_0 [i_0]) / 1286789019))) ? (max((arr_0 [i_0]), var_4)) : (min((arr_0 [i_0]), var_1)))), var_10));
        var_20 = (max(var_20, 133));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_21 = ((-(min(((min(97, (arr_3 [i_1])))), ((123 ? 63761 : var_0))))));
        arr_6 [i_1] |= ((((arr_5 [i_1] [i_1]) ? (((!(arr_4 [i_1] [i_1])))) : ((~(arr_5 [i_1] [i_1]))))));
        arr_7 [i_1] [i_1] = (((((var_17 & ((min(var_10, (arr_3 [i_1]))))))) ? ((-(((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_3 [i_1]))))) : (1 == -3)));
        arr_8 [i_1] [i_1] = (max((arr_5 [i_1] [i_1]), (arr_5 [i_1] [i_1])));
        var_22 = (max(var_22, ((-(max(var_2, (min(31747, var_5))))))));
    }
    var_23 = var_14;
    var_24 = (min(var_24, ((var_8 ? (~var_10) : var_12))));
    #pragma endscop
}
