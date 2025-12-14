/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= var_7;
    var_13 = -29028;
    var_14 = var_10;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((min((min((arr_1 [i_0]), var_8)), (arr_0 [1] [i_0])))) ? ((((min(var_4, (arr_2 [3]))) == (arr_0 [i_0] [i_0])))) : ((1 ? 1 : -33))));
        var_15 -= (((((((((arr_1 [i_0]) ? var_4 : 1))) ? (arr_2 [i_0]) : (max((arr_2 [i_0]), 1))))) ? ((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_2 [i_0])))) : ((-(max(-29028, 0))))));
        var_16 = (max((((arr_2 [i_0]) ? (arr_1 [i_0]) : (arr_2 [i_0]))), ((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_17 = (max(var_17, (((1 ? 0 : ((40665 ? 29822 : -1465926368)))))));
        arr_7 [i_1] [i_1] = (max(((((arr_5 [i_1]) ? 1 : 1))), ((84 ? (arr_5 [i_1]) : (arr_5 [i_1])))));
        arr_8 [i_1] = ((((((arr_4 [i_1] [i_1]) ? (arr_4 [i_1] [i_1]) : (arr_6 [i_1] [i_1])))) ? (((arr_6 [i_1] [i_1]) + (-32767 - 1))) : (((arr_4 [i_1] [i_1]) ? (arr_6 [i_1] [i_1]) : (arr_6 [i_1] [i_1])))));
    }
    var_18 = ((!((((((var_3 ? var_7 : 13679421395281829828))) ? 0 : 0)))));
    #pragma endscop
}
