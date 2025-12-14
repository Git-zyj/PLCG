/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_12 += var_2;
        var_13 = (((((1 ? 1073741792 : 65515))) ? (max(2854336953, 0)) : ((((arr_3 [i_0]) | 63)))));
        var_14 = ((-192 ? ((~(max(var_11, -2088403145)))) : 63));
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        arr_6 [i_1] &= ((~(max((min(71, 0)), 0))));
        var_15 = (min(var_15, ((min(((43 ? (arr_5 [i_1 - 2]) : (arr_5 [i_1 - 2]))), ((var_7 ? (arr_4 [i_1 - 1]) : 9)))))));
    }
    var_16 = (min(var_16, (((var_4 ? -29069 : var_1)))));
    var_17 = ((((213 ? ((1220950863 ? 29069 : 1)) : (var_9 | 48))) | (min(var_8, -124))));
    #pragma endscop
}
